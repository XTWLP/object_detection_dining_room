/* Generated code for Python module 'numba.core.typing.mathdecl'
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

/* The "module_numba$core$typing$mathdecl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numba$core$typing$mathdecl;
PyDictObject *moduledict_numba$core$typing$mathdecl;

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
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("numba.core.typing.mathdecl"));
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
void checkModuleConstants_numba$core$typing$mathdecl(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 100; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_872a253c114ae100433f0ef54a9dfb12;
static PyCodeObject *codeobj_fac9ce8c6e3f946ed9df6eac791f4f35;
static PyCodeObject *codeobj_ba8e4cc974c2f5ce15aa177eb4b85747;
static PyCodeObject *codeobj_b156812224cc88c07e65e14cb43e7cde;
static PyCodeObject *codeobj_356c0966168f5129932e99e45583c10f;
static PyCodeObject *codeobj_6b067da65c6d10a814d203fa6f6fe03f;
static PyCodeObject *codeobj_c5389504a5270af5778731e695a58250;
static PyCodeObject *codeobj_b9dc39e8ca354af918f9fecebc663da3;
static PyCodeObject *codeobj_82c9ee6b05b8c48d38d9cc800cac5c45;
static PyCodeObject *codeobj_40e0e04f3cfa57f1912cada102c29ec7;
static PyCodeObject *codeobj_299943011139a64165378a7ee2f75f57;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[96]); CHECK_OBJECT(module_filename_obj);
    codeobj_872a253c114ae100433f0ef54a9dfb12 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[97], NULL, NULL, 0, 0, 0);
    codeobj_fac9ce8c6e3f946ed9df6eac791f4f35 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_NOFREE, mod_consts[62], mod_consts[98], NULL, 0, 0, 0);
    codeobj_ba8e4cc974c2f5ce15aa177eb4b85747 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_NOFREE, mod_consts[64], mod_consts[98], NULL, 0, 0, 0);
    codeobj_b156812224cc88c07e65e14cb43e7cde = MAKE_CODEOBJECT(module_filename_obj, 72, CO_NOFREE, mod_consts[70], mod_consts[98], NULL, 0, 0, 0);
    codeobj_356c0966168f5129932e99e45583c10f = MAKE_CODEOBJECT(module_filename_obj, 130, CO_NOFREE, mod_consts[90], mod_consts[98], NULL, 0, 0, 0);
    codeobj_6b067da65c6d10a814d203fa6f6fe03f = MAKE_CODEOBJECT(module_filename_obj, 116, CO_NOFREE, mod_consts[82], mod_consts[98], NULL, 0, 0, 0);
    codeobj_c5389504a5270af5778731e695a58250 = MAKE_CODEOBJECT(module_filename_obj, 80, CO_NOFREE, mod_consts[72], mod_consts[98], NULL, 0, 0, 0);
    codeobj_b9dc39e8ca354af918f9fecebc663da3 = MAKE_CODEOBJECT(module_filename_obj, 137, CO_NOFREE, mod_consts[94], mod_consts[98], NULL, 0, 0, 0);
    codeobj_82c9ee6b05b8c48d38d9cc800cac5c45 = MAKE_CODEOBJECT(module_filename_obj, 106, CO_NOFREE, mod_consts[80], mod_consts[98], NULL, 0, 0, 0);
    codeobj_40e0e04f3cfa57f1912cada102c29ec7 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_NOFREE, mod_consts[74], mod_consts[98], NULL, 0, 0, 0);
    codeobj_299943011139a64165378a7ee2f75f57 = MAKE_CODEOBJECT(module_filename_obj, 35, CO_NOFREE, mod_consts[23], mod_consts[98], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


// The module function definitions.


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

function_impl_code functable_numba$core$typing$mathdecl[] = {

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

    function_impl_code *current = functable_numba$core$typing$mathdecl;
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

    if (offset > sizeof(functable_numba$core$typing$mathdecl) || offset < 0) {
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
        functable_numba$core$typing$mathdecl[offset],
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
        module_numba$core$typing$mathdecl,
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
PyObject *modulecode_numba$core$typing$mathdecl(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numba.core.typing.mathdecl");

    // Store the module for future use.
    module_numba$core$typing$mathdecl = module;

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
        PRINT_STRING("numba.core.typing.mathdecl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numba.core.typing.mathdecl: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numba.core.typing.mathdecl: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnumba$core$typing$mathdecl\n");

    moduledict_numba$core$typing$mathdecl = MODULE_DICT(module_numba$core$typing$mathdecl);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numba$core$typing$mathdecl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numba$core$typing$mathdecl,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[99]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numba$core$typing$mathdecl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numba$core$typing$mathdecl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numba$core$typing$mathdecl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numba$core$typing$mathdecl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numba$core$typing$mathdecl);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_872a253c114ae100433f0ef54a9dfb12;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_299943011139a64165378a7ee2f75f57_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_299943011139a64165378a7ee2f75f57_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45 = NULL;
    struct Nuitka_FrameObject *frame_fac9ce8c6e3f946ed9df6eac791f4f35_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fac9ce8c6e3f946ed9df6eac791f4f35_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55 = NULL;
    struct Nuitka_FrameObject *frame_ba8e4cc974c2f5ce15aa177eb4b85747_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ba8e4cc974c2f5ce15aa177eb4b85747_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_numba$core$typing$mathdecl$$$class__4_Math_floor_ceil_67 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72 = NULL;
    struct Nuitka_FrameObject *frame_b156812224cc88c07e65e14cb43e7cde_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_b156812224cc88c07e65e14cb43e7cde_5 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80 = NULL;
    struct Nuitka_FrameObject *frame_c5389504a5270af5778731e695a58250_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c5389504a5270af5778731e695a58250_6 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91 = NULL;
    struct Nuitka_FrameObject *frame_40e0e04f3cfa57f1912cada102c29ec7_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_40e0e04f3cfa57f1912cada102c29ec7_7 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_numba$core$typing$mathdecl$$$class__8_Math_isfinite_101 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106 = NULL;
    struct Nuitka_FrameObject *frame_82c9ee6b05b8c48d38d9cc800cac5c45_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_82c9ee6b05b8c48d38d9cc800cac5c45_8 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116 = NULL;
    struct Nuitka_FrameObject *frame_6b067da65c6d10a814d203fa6f6fe03f_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6b067da65c6d10a814d203fa6f6fe03f_9 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130 = NULL;
    struct Nuitka_FrameObject *frame_356c0966168f5129932e99e45583c10f_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_356c0966168f5129932e99e45583c10f_10 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137 = NULL;
    struct Nuitka_FrameObject *frame_b9dc39e8ca354af918f9fecebc663da3_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_b9dc39e8ca354af918f9fecebc663da3_11 = NULL;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_872a253c114ae100433f0ef54a9dfb12 = MAKE_MODULE_FRAME(codeobj_872a253c114ae100433f0ef54a9dfb12, module_numba$core$typing$mathdecl);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_872a253c114ae100433f0ef54a9dfb12);
    assert(Py_REFCNT(frame_872a253c114ae100433f0ef54a9dfb12) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numba$core$typing$mathdecl;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[7];
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[8];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numba$core$typing$mathdecl;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[9];
        tmp_level_value_2 = mod_consts[7];
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
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
                (PyObject *)moduledict_numba$core$typing$mathdecl,
                mod_consts[10],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[10]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numba$core$typing$mathdecl,
                mod_consts[11],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[11]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[12];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_numba$core$typing$mathdecl;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[13];
        tmp_level_value_3 = mod_consts[7];
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 3;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numba$core$typing$mathdecl,
                mod_consts[14],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[14]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_numba$core$typing$mathdecl,
                mod_consts[15],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[15]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_numba$core$typing$mathdecl,
                mod_consts[16],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[16]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numba$core$typing$mathdecl,
                mod_consts[17],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[17]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_12);
    }
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 6;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_14);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        tmp_assign_source_15 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_15, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_16 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[21];
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
        tmp_key_value_2 = mod_consts[21];
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


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[7];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_18 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[21];
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
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 35;

        goto try_except_handler_3;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[22]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[22]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[23];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 35;
        tmp_assign_source_19 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[24]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
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
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[26];
        tmp_getattr_default_1 = mod_consts[27];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[26]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 35;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_21;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_25;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_27;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_29;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_31;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_33;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_35;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_37;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_value_39;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_value_41;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_called_value_43;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_45;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_value_47;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_value_49;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_called_value_51;
        PyObject *tmp_called_value_52;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_50;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[28]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 10;
        tmp_called_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 11;

            goto try_except_handler_3;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 11;

            goto try_except_handler_3;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[29]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 11;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 11;
        tmp_called_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 11;

            goto try_except_handler_3;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[30]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 12;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 12;
        tmp_called_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 13;

            goto try_except_handler_3;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 13;

            goto try_except_handler_3;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[31]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 13;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 13;
        tmp_called_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 13;

            goto try_except_handler_3;
        }
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[32]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 14;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 14;
        tmp_called_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 15;

            goto try_except_handler_3;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 15;

            goto try_except_handler_3;
        }
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[33]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 15;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 15;
        tmp_called_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 15;

            goto try_except_handler_3;
        }
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 16;

            goto try_except_handler_3;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 16;

            goto try_except_handler_3;
        }
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[34]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 16;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 16;
        tmp_called_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 16;

            goto try_except_handler_3;
        }
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[35]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 17;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 17;
        tmp_called_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 17;

            goto try_except_handler_3;
        }
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 18;

            goto try_except_handler_3;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 18;

            goto try_except_handler_3;
        }
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[36]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 18;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 18;
        tmp_called_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 18;

            goto try_except_handler_3;
        }
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[37]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 19;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 19;
        tmp_called_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 20;

            goto try_except_handler_3;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 20;

            goto try_except_handler_3;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[38]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 20;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 20;
        tmp_called_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 20;

            goto try_except_handler_3;
        }
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[39]);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 21;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 21;
        tmp_called_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 22;

            goto try_except_handler_3;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 22;

            goto try_except_handler_3;
        }
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[40]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 22;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 22;
        tmp_called_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_25);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 22;

            goto try_except_handler_3;
        }
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[41]);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 23;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 23;
        tmp_called_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 23;

            goto try_except_handler_3;
        }
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 24;

            goto try_except_handler_3;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 24;

            goto try_except_handler_3;
        }
        tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[42]);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 24;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 24;
        tmp_called_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_29);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 24;

            goto try_except_handler_3;
        }
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 25;

            goto try_except_handler_3;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 25;

            goto try_except_handler_3;
        }
        tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[43]);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 25;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 25;
        tmp_called_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 25;

            goto try_except_handler_3;
        }
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[44]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 26;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 26;
        tmp_called_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 26;

            goto try_except_handler_3;
        }
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[45]);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 27;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 27;
        tmp_called_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 27;

            goto try_except_handler_3;
        }
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 28;

            goto try_except_handler_3;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 28;

            goto try_except_handler_3;
        }
        tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[46]);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 28;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 28;
        tmp_called_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 28;

            goto try_except_handler_3;
        }
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[47]);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 29;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 29;
        tmp_called_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 30;

            goto try_except_handler_3;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 30;

            goto try_except_handler_3;
        }
        tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[48]);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 30;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 30;
        tmp_called_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 30;

            goto try_except_handler_3;
        }
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[49]);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 31;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 31;
        tmp_called_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_43);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 32;

            goto try_except_handler_3;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 32;

            goto try_except_handler_3;
        }
        tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[50]);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 32;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 32;
        tmp_called_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 32;

            goto try_except_handler_3;
        }
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 33;

            goto try_except_handler_3;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 33;

            goto try_except_handler_3;
        }
        tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[51]);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 33;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 33;
        tmp_called_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 33;

            goto try_except_handler_3;
        }
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 34;

            goto try_except_handler_3;
        }
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 34;

            goto try_except_handler_3;
        }
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[52]);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 34;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 34;
        tmp_called_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_49);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 34;

            goto try_except_handler_3;
        }
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        if (isFrameUnusable(cache_frame_299943011139a64165378a7ee2f75f57_2)) {
            Py_XDECREF(cache_frame_299943011139a64165378a7ee2f75f57_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_299943011139a64165378a7ee2f75f57_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_299943011139a64165378a7ee2f75f57_2 = MAKE_FUNCTION_FRAME(codeobj_299943011139a64165378a7ee2f75f57, module_numba$core$typing$mathdecl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_299943011139a64165378a7ee2f75f57_2->m_type_description == NULL);
        frame_299943011139a64165378a7ee2f75f57_2 = cache_frame_299943011139a64165378a7ee2f75f57_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_299943011139a64165378a7ee2f75f57_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_299943011139a64165378a7ee2f75f57_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_expression_value_33;
            tmp_called_value_53 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[16]);

            if (tmp_called_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_called_value_53 == NULL)) {
                        tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_called_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_53);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_32 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[10]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_53);

                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[56]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_args_element_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_33 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[10]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_53);
                        Py_DECREF(tmp_args_element_value_51);

                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[57]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_args_element_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_args_element_value_51);

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_299943011139a64165378a7ee2f75f57_2->m_frame.f_lineno = 37;
            {
                PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_53, call_args);
            }

            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_args_element_value_51);
            Py_DECREF(tmp_args_element_value_52);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_called_value_54;
                PyObject *tmp_args_element_value_53;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_args_element_value_54;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_called_value_55;
                PyObject *tmp_args_element_value_55;
                PyObject *tmp_expression_value_36;
                PyObject *tmp_args_element_value_56;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_called_value_56;
                PyObject *tmp_args_element_value_57;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_args_element_value_58;
                PyObject *tmp_expression_value_39;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
                tmp_called_value_54 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[16]);

                if (tmp_called_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_54 == NULL)) {
                            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_54 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_called_value_54);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_expression_value_34 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[10]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_54);

                            exception_lineno = 38;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[56]);
                Py_DECREF(tmp_expression_value_34);
                if (tmp_args_element_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_54);

                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                tmp_expression_value_35 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[10]);

                if (tmp_expression_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_35 == NULL)) {
                            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_54);
                            Py_DECREF(tmp_args_element_value_53);

                            exception_lineno = 38;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_35);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[58]);
                Py_DECREF(tmp_expression_value_35);
                if (tmp_args_element_value_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_54);
                    Py_DECREF(tmp_args_element_value_53);

                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                frame_299943011139a64165378a7ee2f75f57_2->m_frame.f_lineno = 38;
                {
                    PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54};
                    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_54, call_args);
                }

                Py_DECREF(tmp_called_value_54);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
                tmp_called_value_55 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[16]);

                if (tmp_called_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_55 == NULL)) {
                            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_55 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 39;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_called_value_55);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_expression_value_36 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[10]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_55);

                            exception_lineno = 39;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[59]);
                Py_DECREF(tmp_expression_value_36);
                if (tmp_args_element_value_55 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_55);

                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                tmp_expression_value_37 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[10]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_55);
                            Py_DECREF(tmp_args_element_value_55);

                            exception_lineno = 39;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[59]);
                Py_DECREF(tmp_expression_value_37);
                if (tmp_args_element_value_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_55);
                    Py_DECREF(tmp_args_element_value_55);

                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                frame_299943011139a64165378a7ee2f75f57_2->m_frame.f_lineno = 39;
                {
                    PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
                    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_55, call_args);
                }

                Py_DECREF(tmp_called_value_55);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_56);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
                tmp_called_value_56 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[16]);

                if (tmp_called_value_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_56 == NULL)) {
                            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_56 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 40;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_called_value_56);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_expression_value_38 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[10]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_56);

                            exception_lineno = 40;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[56]);
                Py_DECREF(tmp_expression_value_38);
                if (tmp_args_element_value_57 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_56);

                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                tmp_expression_value_39 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[10]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_56);
                            Py_DECREF(tmp_args_element_value_57);

                            exception_lineno = 40;
                            type_description_2 = "o";
                            goto list_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto list_build_exception_1;
                    }
                }

                tmp_args_element_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[56]);
                Py_DECREF(tmp_expression_value_39);
                if (tmp_args_element_value_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_56);
                    Py_DECREF(tmp_args_element_value_57);

                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                frame_299943011139a64165378a7ee2f75f57_2->m_frame.f_lineno = 40;
                {
                    PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
                    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_56, call_args);
                }

                Py_DECREF(tmp_called_value_56);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "o";
                    goto list_build_exception_1;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_299943011139a64165378a7ee2f75f57_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_299943011139a64165378a7ee2f75f57_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_299943011139a64165378a7ee2f75f57_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_299943011139a64165378a7ee2f75f57_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_299943011139a64165378a7ee2f75f57_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_299943011139a64165378a7ee2f75f57_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_299943011139a64165378a7ee2f75f57_2 == cache_frame_299943011139a64165378a7ee2f75f57_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_299943011139a64165378a7ee2f75f57_2);
            cache_frame_299943011139a64165378a7ee2f75f57_2 = NULL;
        }

        assertFrameObject(frame_299943011139a64165378a7ee2f75f57_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_57 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[23];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 35;
            tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_57, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_args_element_value_50 = outline_0_var___class__;
        Py_INCREF(tmp_args_element_value_50);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35);
        locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35 = NULL;
        goto try_return_handler_4;
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

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35);
        locals_numba$core$typing$mathdecl$$$class__1_Math_unary_35 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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
        exception_lineno = 35;
        goto try_except_handler_3;
        outline_result_1:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 34;
        tmp_args_element_value_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_50);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 34;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 33;
        tmp_args_element_value_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 33;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 32;
        tmp_args_element_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 32;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 31;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 31;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 30;
        tmp_args_element_value_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 30;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 29;
        tmp_args_element_value_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 29;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 28;
        tmp_args_element_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 28;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 27;
        tmp_args_element_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 27;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 26;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 26;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 25;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 25;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 24;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 24;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 23;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 23;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 22;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 22;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 21;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 21;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 20;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 20;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 19;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 19;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 18;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 18;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 17;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 17;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 16;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 16;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 15;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 15;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 14;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 14;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 13;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 13;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 12;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 12;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 11;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 11;

            goto try_except_handler_3;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 10;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_21);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        tmp_assign_source_23 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_23, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_24 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[21];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        Py_INCREF(tmp_metaclass_value_2);
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_40 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[7];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_40, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_26 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 45;

        goto try_except_handler_6;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_41 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_41, mod_consts[22]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_42 = tmp_class_creation_2__metaclass;
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[22]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[62];
        tmp_args_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 45;
        tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_58, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_43 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_43, mod_consts[24]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_value_2 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[26];
        tmp_getattr_default_2 = mod_consts[27];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        tmp_right_value_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_44;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_value_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_44 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_44 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[26]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_value_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_value_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 45;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_28;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_59;
        PyObject *tmp_called_value_60;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_60;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[63]);
        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 44;
        tmp_called_value_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_59);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[62];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_8;
        }
        if (isFrameUnusable(cache_frame_fac9ce8c6e3f946ed9df6eac791f4f35_3)) {
            Py_XDECREF(cache_frame_fac9ce8c6e3f946ed9df6eac791f4f35_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_fac9ce8c6e3f946ed9df6eac791f4f35_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_fac9ce8c6e3f946ed9df6eac791f4f35_3 = MAKE_FUNCTION_FRAME(codeobj_fac9ce8c6e3f946ed9df6eac791f4f35, module_numba$core$typing$mathdecl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_fac9ce8c6e3f946ed9df6eac791f4f35_3->m_type_description == NULL);
        frame_fac9ce8c6e3f946ed9df6eac791f4f35_3 = cache_frame_fac9ce8c6e3f946ed9df6eac791f4f35_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_fac9ce8c6e3f946ed9df6eac791f4f35_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_fac9ce8c6e3f946ed9df6eac791f4f35_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_args_element_value_62;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_expression_value_48;
            tmp_called_value_61 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[16]);

            if (tmp_called_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_called_value_61 == NULL)) {
                        tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_called_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_61);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_46 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_61);

                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[56]);
            Py_DECREF(tmp_expression_value_46);
            if (tmp_args_element_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_61);

                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_expression_value_47 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_61);
                        Py_DECREF(tmp_args_element_value_61);

                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[57]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_args_element_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_61);
                Py_DECREF(tmp_args_element_value_61);

                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_expression_value_48 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

            if (tmp_expression_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_61);
                        Py_DECREF(tmp_args_element_value_61);
                        Py_DECREF(tmp_args_element_value_62);

                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_48);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[57]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_args_element_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_61);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);

                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_fac9ce8c6e3f946ed9df6eac791f4f35_3->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63};
                tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_61, call_args);
            }

            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_61);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_63);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_called_value_62;
                PyObject *tmp_args_element_value_64;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_args_element_value_65;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_args_element_value_66;
                PyObject *tmp_expression_value_51;
                PyObject *tmp_called_value_63;
                PyObject *tmp_args_element_value_67;
                PyObject *tmp_expression_value_52;
                PyObject *tmp_args_element_value_68;
                PyObject *tmp_expression_value_53;
                PyObject *tmp_args_element_value_69;
                PyObject *tmp_expression_value_54;
                PyObject *tmp_called_value_64;
                PyObject *tmp_args_element_value_70;
                PyObject *tmp_expression_value_55;
                PyObject *tmp_args_element_value_71;
                PyObject *tmp_expression_value_56;
                PyObject *tmp_args_element_value_72;
                PyObject *tmp_expression_value_57;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
                tmp_called_value_62 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[16]);

                if (tmp_called_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_62 == NULL)) {
                            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_62 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 48;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_62);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_expression_value_49 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_62);

                            exception_lineno = 48;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[56]);
                Py_DECREF(tmp_expression_value_49);
                if (tmp_args_element_value_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_62);

                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                tmp_expression_value_50 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

                if (tmp_expression_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_50 == NULL)) {
                            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_62);
                            Py_DECREF(tmp_args_element_value_64);

                            exception_lineno = 48;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_50);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[58]);
                Py_DECREF(tmp_expression_value_50);
                if (tmp_args_element_value_65 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_62);
                    Py_DECREF(tmp_args_element_value_64);

                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                tmp_expression_value_51 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

                if (tmp_expression_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_51 == NULL)) {
                            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_62);
                            Py_DECREF(tmp_args_element_value_64);
                            Py_DECREF(tmp_args_element_value_65);

                            exception_lineno = 48;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_51);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[58]);
                Py_DECREF(tmp_expression_value_51);
                if (tmp_args_element_value_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_62);
                    Py_DECREF(tmp_args_element_value_64);
                    Py_DECREF(tmp_args_element_value_65);

                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                frame_fac9ce8c6e3f946ed9df6eac791f4f35_3->m_frame.f_lineno = 48;
                {
                    PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66};
                    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_62, call_args);
                }

                Py_DECREF(tmp_called_value_62);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_66);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
                tmp_called_value_63 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[16]);

                if (tmp_called_value_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_63 == NULL)) {
                            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_63 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 49;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_63);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_expression_value_52 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

                if (tmp_expression_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_52 == NULL)) {
                            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_52 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_63);

                            exception_lineno = 49;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_52);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[59]);
                Py_DECREF(tmp_expression_value_52);
                if (tmp_args_element_value_67 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_63);

                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                tmp_expression_value_53 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

                if (tmp_expression_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_53 == NULL)) {
                            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_63);
                            Py_DECREF(tmp_args_element_value_67);

                            exception_lineno = 49;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_53);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[59]);
                Py_DECREF(tmp_expression_value_53);
                if (tmp_args_element_value_68 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_63);
                    Py_DECREF(tmp_args_element_value_67);

                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                tmp_expression_value_54 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

                if (tmp_expression_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_54 == NULL)) {
                            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_54 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_63);
                            Py_DECREF(tmp_args_element_value_67);
                            Py_DECREF(tmp_args_element_value_68);

                            exception_lineno = 49;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_54);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[59]);
                Py_DECREF(tmp_expression_value_54);
                if (tmp_args_element_value_69 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_63);
                    Py_DECREF(tmp_args_element_value_67);
                    Py_DECREF(tmp_args_element_value_68);

                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                frame_fac9ce8c6e3f946ed9df6eac791f4f35_3->m_frame.f_lineno = 49;
                {
                    PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69};
                    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_63, call_args);
                }

                Py_DECREF(tmp_called_value_63);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_69);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_2);
                tmp_called_value_64 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[16]);

                if (tmp_called_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_64 == NULL)) {
                            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_64 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 50;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_64);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_expression_value_55 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

                if (tmp_expression_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_55 == NULL)) {
                            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_55 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_64);

                            exception_lineno = 50;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_55);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[56]);
                Py_DECREF(tmp_expression_value_55);
                if (tmp_args_element_value_70 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_64);

                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                tmp_expression_value_56 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

                if (tmp_expression_value_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_56 == NULL)) {
                            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_56 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_64);
                            Py_DECREF(tmp_args_element_value_70);

                            exception_lineno = 50;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_56);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[56]);
                Py_DECREF(tmp_expression_value_56);
                if (tmp_args_element_value_71 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_64);
                    Py_DECREF(tmp_args_element_value_70);

                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                tmp_expression_value_57 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[10]);

                if (tmp_expression_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_57 == NULL)) {
                            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_57 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_64);
                            Py_DECREF(tmp_args_element_value_70);
                            Py_DECREF(tmp_args_element_value_71);

                            exception_lineno = 50;
                            type_description_2 = "o";
                            goto list_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_57);
                    } else {
                        goto list_build_exception_2;
                    }
                }

                tmp_args_element_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[56]);
                Py_DECREF(tmp_expression_value_57);
                if (tmp_args_element_value_72 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_64);
                    Py_DECREF(tmp_args_element_value_70);
                    Py_DECREF(tmp_args_element_value_71);

                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                frame_fac9ce8c6e3f946ed9df6eac791f4f35_3->m_frame.f_lineno = 50;
                {
                    PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
                    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_64, call_args);
                }

                Py_DECREF(tmp_called_value_64);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                Py_DECREF(tmp_args_element_value_72);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_2 = "o";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_2);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fac9ce8c6e3f946ed9df6eac791f4f35_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fac9ce8c6e3f946ed9df6eac791f4f35_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fac9ce8c6e3f946ed9df6eac791f4f35_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fac9ce8c6e3f946ed9df6eac791f4f35_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fac9ce8c6e3f946ed9df6eac791f4f35_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fac9ce8c6e3f946ed9df6eac791f4f35_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_fac9ce8c6e3f946ed9df6eac791f4f35_3 == cache_frame_fac9ce8c6e3f946ed9df6eac791f4f35_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_fac9ce8c6e3f946ed9df6eac791f4f35_3);
            cache_frame_fac9ce8c6e3f946ed9df6eac791f4f35_3 = NULL;
        }

        assertFrameObject(frame_fac9ce8c6e3f946ed9df6eac791f4f35_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_8;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_65 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[62];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 45;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_65, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_30;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_args_element_value_60 = outline_1_var___class__;
        Py_INCREF(tmp_args_element_value_60);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45);
        locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45);
        locals_numba$core$typing$mathdecl$$$class__2_Math_atan2_45 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 45;
        goto try_except_handler_6;
        outline_result_2:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 44;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_60);
        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_29);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
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
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        tmp_assign_source_31 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_32 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_13;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        tmp_key_value_7 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_value_8 = mod_consts[21];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        Py_INCREF(tmp_metaclass_value_3);
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_58 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[7];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_58, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_34 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        tmp_key_value_9 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 55;

        goto try_except_handler_9;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_value_59;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_59 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_59, mod_consts[22]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_60 = tmp_class_creation_3__metaclass;
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[22]);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        tmp_tuple_element_10 = mod_consts[64];
        tmp_args_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 55;
        tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_66, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_61;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_61 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_61, mod_consts[24]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
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
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_value_3 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[26];
        tmp_getattr_default_3 = mod_consts[27];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        tmp_right_value_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_62;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_right_value_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_62 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_62 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[26]);
            Py_DECREF(tmp_expression_value_62);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_value_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_value_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 55;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_36;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_67;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_74;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_9;
        }
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_9;
        }
        tmp_args_element_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[65]);
        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_9;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 54;
        tmp_called_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_73);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_9;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_11;
        }
        if (isFrameUnusable(cache_frame_ba8e4cc974c2f5ce15aa177eb4b85747_4)) {
            Py_XDECREF(cache_frame_ba8e4cc974c2f5ce15aa177eb4b85747_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ba8e4cc974c2f5ce15aa177eb4b85747_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ba8e4cc974c2f5ce15aa177eb4b85747_4 = MAKE_FUNCTION_FRAME(codeobj_ba8e4cc974c2f5ce15aa177eb4b85747, module_numba$core$typing$mathdecl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_ba8e4cc974c2f5ce15aa177eb4b85747_4->m_type_description == NULL);
        frame_ba8e4cc974c2f5ce15aa177eb4b85747_4 = cache_frame_ba8e4cc974c2f5ce15aa177eb4b85747_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_ba8e4cc974c2f5ce15aa177eb4b85747_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_ba8e4cc974c2f5ce15aa177eb4b85747_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_element_value_75;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_args_element_value_76;
            PyObject *tmp_expression_value_65;
            tmp_called_value_69 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[16]);

            if (tmp_called_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_called_value_69 == NULL)) {
                        tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_called_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_69);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_64 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[10]);

            if (tmp_expression_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_64 == NULL)) {
                        tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_69);

                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_64);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[66]);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_args_element_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_69);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_expression_value_65 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[10]);

            if (tmp_expression_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_69);
                        Py_DECREF(tmp_args_element_value_75);

                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_65);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[66]);
            Py_DECREF(tmp_expression_value_65);
            if (tmp_args_element_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_69);
                Py_DECREF(tmp_args_element_value_75);

                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_ba8e4cc974c2f5ce15aa177eb4b85747_4->m_frame.f_lineno = 57;
            {
                PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76};
                tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_69, call_args);
            }

            Py_DECREF(tmp_called_value_69);
            Py_DECREF(tmp_args_element_value_75);
            Py_DECREF(tmp_args_element_value_76);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dictset_value = PyList_New(5);
            {
                PyObject *tmp_called_value_70;
                PyObject *tmp_args_element_value_77;
                PyObject *tmp_expression_value_66;
                PyObject *tmp_args_element_value_78;
                PyObject *tmp_expression_value_67;
                PyObject *tmp_called_value_71;
                PyObject *tmp_args_element_value_79;
                PyObject *tmp_expression_value_68;
                PyObject *tmp_args_element_value_80;
                PyObject *tmp_expression_value_69;
                PyObject *tmp_called_value_72;
                PyObject *tmp_args_element_value_81;
                PyObject *tmp_expression_value_70;
                PyObject *tmp_args_element_value_82;
                PyObject *tmp_expression_value_71;
                PyObject *tmp_called_value_73;
                PyObject *tmp_args_element_value_83;
                PyObject *tmp_expression_value_72;
                PyObject *tmp_args_element_value_84;
                PyObject *tmp_expression_value_73;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
                tmp_called_value_70 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[16]);

                if (tmp_called_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_70 == NULL)) {
                            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_70 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 58;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_70);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_expression_value_66 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[10]);

                if (tmp_expression_value_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_66 == NULL)) {
                            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_66 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_70);

                            exception_lineno = 58;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_66);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_args_element_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[57]);
                Py_DECREF(tmp_expression_value_66);
                if (tmp_args_element_value_77 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_70);

                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                tmp_expression_value_67 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[10]);

                if (tmp_expression_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_67 == NULL)) {
                            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_67 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_70);
                            Py_DECREF(tmp_args_element_value_77);

                            exception_lineno = 58;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_67);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_args_element_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[57]);
                Py_DECREF(tmp_expression_value_67);
                if (tmp_args_element_value_78 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_70);
                    Py_DECREF(tmp_args_element_value_77);

                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                frame_ba8e4cc974c2f5ce15aa177eb4b85747_4->m_frame.f_lineno = 58;
                {
                    PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78};
                    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_70, call_args);
                }

                Py_DECREF(tmp_called_value_70);
                Py_DECREF(tmp_args_element_value_77);
                Py_DECREF(tmp_args_element_value_78);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
                tmp_called_value_71 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[16]);

                if (tmp_called_value_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_71 == NULL)) {
                            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_71 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 59;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_71);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_expression_value_68 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[10]);

                if (tmp_expression_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_68 == NULL)) {
                            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_68 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_71);

                            exception_lineno = 59;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_68);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_args_element_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[58]);
                Py_DECREF(tmp_expression_value_68);
                if (tmp_args_element_value_79 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_71);

                    exception_lineno = 59;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                tmp_expression_value_69 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[10]);

                if (tmp_expression_value_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_69 == NULL)) {
                            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_69 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_71);
                            Py_DECREF(tmp_args_element_value_79);

                            exception_lineno = 59;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_69);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_args_element_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[58]);
                Py_DECREF(tmp_expression_value_69);
                if (tmp_args_element_value_80 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_71);
                    Py_DECREF(tmp_args_element_value_79);

                    exception_lineno = 59;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                frame_ba8e4cc974c2f5ce15aa177eb4b85747_4->m_frame.f_lineno = 59;
                {
                    PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80};
                    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_71, call_args);
                }

                Py_DECREF(tmp_called_value_71);
                Py_DECREF(tmp_args_element_value_79);
                Py_DECREF(tmp_args_element_value_80);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_3);
                tmp_called_value_72 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[16]);

                if (tmp_called_value_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_72 == NULL)) {
                            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_72 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_72);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_expression_value_70 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[10]);

                if (tmp_expression_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_70 == NULL)) {
                            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_70 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_72);

                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_70);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_args_element_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[57]);
                Py_DECREF(tmp_expression_value_70);
                if (tmp_args_element_value_81 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_72);

                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                tmp_expression_value_71 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[10]);

                if (tmp_expression_value_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_71 == NULL)) {
                            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_71 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_72);
                            Py_DECREF(tmp_args_element_value_81);

                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_71);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_args_element_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[59]);
                Py_DECREF(tmp_expression_value_71);
                if (tmp_args_element_value_82 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_72);
                    Py_DECREF(tmp_args_element_value_81);

                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                frame_ba8e4cc974c2f5ce15aa177eb4b85747_4->m_frame.f_lineno = 60;
                {
                    PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82};
                    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_72, call_args);
                }

                Py_DECREF(tmp_called_value_72);
                Py_DECREF(tmp_args_element_value_81);
                Py_DECREF(tmp_args_element_value_82);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_3);
                tmp_called_value_73 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[16]);

                if (tmp_called_value_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_73 == NULL)) {
                            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_73 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 61;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_73);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_expression_value_72 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[10]);

                if (tmp_expression_value_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_72 == NULL)) {
                            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_72 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_73);

                            exception_lineno = 61;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_72);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_args_element_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[57]);
                Py_DECREF(tmp_expression_value_72);
                if (tmp_args_element_value_83 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_73);

                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                tmp_expression_value_73 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[10]);

                if (tmp_expression_value_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_73 == NULL)) {
                            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_73 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_73);
                            Py_DECREF(tmp_args_element_value_83);

                            exception_lineno = 61;
                            type_description_2 = "o";
                            goto list_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_73);
                    } else {
                        goto list_build_exception_3;
                    }
                }

                tmp_args_element_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[56]);
                Py_DECREF(tmp_expression_value_73);
                if (tmp_args_element_value_84 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_73);
                    Py_DECREF(tmp_args_element_value_83);

                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                frame_ba8e4cc974c2f5ce15aa177eb4b85747_4->m_frame.f_lineno = 61;
                {
                    PyObject *call_args[] = {tmp_args_element_value_83, tmp_args_element_value_84};
                    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_73, call_args);
                }

                Py_DECREF(tmp_called_value_73);
                Py_DECREF(tmp_args_element_value_83);
                Py_DECREF(tmp_args_element_value_84);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_3);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ba8e4cc974c2f5ce15aa177eb4b85747_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_ba8e4cc974c2f5ce15aa177eb4b85747_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ba8e4cc974c2f5ce15aa177eb4b85747_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ba8e4cc974c2f5ce15aa177eb4b85747_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ba8e4cc974c2f5ce15aa177eb4b85747_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ba8e4cc974c2f5ce15aa177eb4b85747_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_ba8e4cc974c2f5ce15aa177eb4b85747_4 == cache_frame_ba8e4cc974c2f5ce15aa177eb4b85747_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_ba8e4cc974c2f5ce15aa177eb4b85747_4);
            cache_frame_ba8e4cc974c2f5ce15aa177eb4b85747_4 = NULL;
        }

        assertFrameObject(frame_ba8e4cc974c2f5ce15aa177eb4b85747_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_11;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_74 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_12 = mod_consts[64];
            tmp_args_value_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_12 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 55;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_74, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_value_74 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_value_74);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55);
        locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55);
        locals_numba$core$typing$mathdecl$$$class__3_Math_converter_55 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 55;
        goto try_except_handler_9;
        outline_result_3:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 54;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_args_element_value_74);
        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_37);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
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
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_13;
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        tmp_assign_source_39 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_39, 0, tmp_tuple_element_13);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_40 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_metaclass_value_4;
        bool tmp_condition_result_19;
        PyObject *tmp_key_value_10;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_key_value_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        tmp_key_value_10 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_10, tmp_key_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_value_11 = mod_consts[21];
        tmp_metaclass_value_4 = DICT_GET_ITEM0(tmp_dict_arg_value_11, tmp_key_value_11);
        if (tmp_metaclass_value_4 == NULL) {
            tmp_metaclass_value_4 = Py_None;
        }
        assert(!(tmp_metaclass_value_4 == NULL));
        Py_INCREF(tmp_metaclass_value_4);
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_74 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[7];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_74, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_42 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_key_value_12;
        PyObject *tmp_dict_arg_value_12;
        tmp_key_value_12 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_value_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_12, tmp_key_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 67;

        goto try_except_handler_12;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_75;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_75 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_75, mod_consts[22]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_76 = tmp_class_creation_4__metaclass;
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[22]);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        tmp_tuple_element_14 = mod_consts[67];
        tmp_args_value_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_14 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 67;
        tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_75, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_77;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_77 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_77, mod_consts[24]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
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
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_value_4 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[26];
        tmp_getattr_default_4 = mod_consts[27];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        tmp_right_value_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_78;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_right_value_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_78 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[26]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_right_value_4, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_right_value_4);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 67;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_44;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_76;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_called_value_78;
        PyObject *tmp_called_value_79;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_args_element_value_88;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_12;
        }
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_12;
        }
        tmp_args_element_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[68]);
        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_12;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 65;
        tmp_called_value_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_77, tmp_args_element_value_85);
        Py_DECREF(tmp_args_element_value_85);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_12;
        }
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 66;

            goto try_except_handler_12;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 66;

            goto try_except_handler_12;
        }
        tmp_args_element_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[69]);
        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 66;

            goto try_except_handler_12;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 66;
        tmp_called_value_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_79, tmp_args_element_value_87);
        Py_DECREF(tmp_args_element_value_87);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 66;

            goto try_except_handler_12;
        }
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_numba$core$typing$mathdecl$$$class__4_Math_floor_ceil_67 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__4_Math_floor_ceil_67, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__4_Math_floor_ceil_67, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_14;
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
            assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__4_Math_floor_ceil_67, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_14;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_80;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_80 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_16 = mod_consts[67];
            tmp_args_value_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_16 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_numba$core$typing$mathdecl$$$class__4_Math_floor_ceil_67;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 67;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_80, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_args_element_value_88 = outline_3_var___class__;
        Py_INCREF(tmp_args_element_value_88);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__4_Math_floor_ceil_67);
        locals_numba$core$typing$mathdecl$$$class__4_Math_floor_ceil_67 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__4_Math_floor_ceil_67);
        locals_numba$core$typing$mathdecl$$$class__4_Math_floor_ceil_67 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 67;
        goto try_except_handler_12;
        outline_result_4:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 66;
        tmp_args_element_value_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_88);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_element_value_88);
        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 66;

            goto try_except_handler_12;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 65;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_86);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_86);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_45);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
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
        PyObject *tmp_assign_source_47;
        PyObject *tmp_tuple_element_17;
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        tmp_assign_source_47 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_48 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = PyDict_New();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_metaclass_value_5;
        bool tmp_condition_result_25;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        tmp_key_value_13 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_value_14 = mod_consts[21];
        tmp_metaclass_value_5 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_metaclass_value_5 == NULL) {
            tmp_metaclass_value_5 = Py_None;
        }
        assert(!(tmp_metaclass_value_5 == NULL));
        Py_INCREF(tmp_metaclass_value_5);
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        tmp_condition_result_26 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_81 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[7];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_81, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_50 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        tmp_key_value_15 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 72;

        goto try_except_handler_15;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_expression_value_82;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_82 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_82, mod_consts[22]);
        tmp_condition_result_28 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_83 = tmp_class_creation_5__metaclass;
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[22]);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        tmp_tuple_element_18 = mod_consts[70];
        tmp_args_value_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_18 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 72;
        tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_81, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_51;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_84;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_84 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_84, mod_consts[24]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
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
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_left_value_5 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[26];
        tmp_getattr_default_5 = mod_consts[27];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        tmp_right_value_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_85;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_right_value_5, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_85 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_85 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[26]);
            Py_DECREF(tmp_expression_value_85);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_right_value_5, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_right_value_5);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_5, tmp_right_value_5);
        Py_DECREF(tmp_right_value_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 72;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_52;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_82;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_args_element_value_90;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_15;
        }
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_15;
        }
        tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[71]);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_15;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 71;
        tmp_called_value_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_83, tmp_args_element_value_89);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_15;
        }
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[70];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_17;
        }
        if (isFrameUnusable(cache_frame_b156812224cc88c07e65e14cb43e7cde_5)) {
            Py_XDECREF(cache_frame_b156812224cc88c07e65e14cb43e7cde_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b156812224cc88c07e65e14cb43e7cde_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b156812224cc88c07e65e14cb43e7cde_5 = MAKE_FUNCTION_FRAME(codeobj_b156812224cc88c07e65e14cb43e7cde, module_numba$core$typing$mathdecl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b156812224cc88c07e65e14cb43e7cde_5->m_type_description == NULL);
        frame_b156812224cc88c07e65e14cb43e7cde_5 = cache_frame_b156812224cc88c07e65e14cb43e7cde_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_b156812224cc88c07e65e14cb43e7cde_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b156812224cc88c07e65e14cb43e7cde_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_called_value_84;
            PyObject *tmp_args_element_value_91;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_args_element_value_92;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_args_element_value_93;
            PyObject *tmp_expression_value_89;
            tmp_called_value_84 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[16]);

            if (tmp_called_value_84 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_called_value_84 == NULL)) {
                        tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_called_value_84 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_84);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_87 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[10]);

            if (tmp_expression_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_87 == NULL)) {
                        tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_87 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_84);

                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_87);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[59]);
            Py_DECREF(tmp_expression_value_87);
            if (tmp_args_element_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_84);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_88 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[10]);

            if (tmp_expression_value_88 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_88 == NULL)) {
                        tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_88 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_84);
                        Py_DECREF(tmp_args_element_value_91);

                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_88);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[59]);
            Py_DECREF(tmp_expression_value_88);
            if (tmp_args_element_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_84);
                Py_DECREF(tmp_args_element_value_91);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_89 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[10]);

            if (tmp_expression_value_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_89 == NULL)) {
                        tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_89 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_84);
                        Py_DECREF(tmp_args_element_value_91);
                        Py_DECREF(tmp_args_element_value_92);

                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_89);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[59]);
            Py_DECREF(tmp_expression_value_89);
            if (tmp_args_element_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_84);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);

                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_b156812224cc88c07e65e14cb43e7cde_5->m_frame.f_lineno = 74;
            {
                PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93};
                tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_84, call_args);
            }

            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_args_element_value_91);
            Py_DECREF(tmp_args_element_value_92);
            Py_DECREF(tmp_args_element_value_93);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = PyList_New(2);
            {
                PyObject *tmp_called_value_85;
                PyObject *tmp_args_element_value_94;
                PyObject *tmp_expression_value_90;
                PyObject *tmp_args_element_value_95;
                PyObject *tmp_expression_value_91;
                PyObject *tmp_args_element_value_96;
                PyObject *tmp_expression_value_92;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
                tmp_called_value_85 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[16]);

                if (tmp_called_value_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_85 == NULL)) {
                            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_85 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_85);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_expression_value_90 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[10]);

                if (tmp_expression_value_90 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_90 == NULL)) {
                            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_90 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_85);

                            exception_lineno = 75;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_90);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[56]);
                Py_DECREF(tmp_expression_value_90);
                if (tmp_args_element_value_94 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_85);

                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                tmp_expression_value_91 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[10]);

                if (tmp_expression_value_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_91 == NULL)) {
                            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_91 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_85);
                            Py_DECREF(tmp_args_element_value_94);

                            exception_lineno = 75;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_91);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[56]);
                Py_DECREF(tmp_expression_value_91);
                if (tmp_args_element_value_95 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_85);
                    Py_DECREF(tmp_args_element_value_94);

                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                tmp_expression_value_92 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[10]);

                if (tmp_expression_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_92 == NULL)) {
                            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_92 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_85);
                            Py_DECREF(tmp_args_element_value_94);
                            Py_DECREF(tmp_args_element_value_95);

                            exception_lineno = 75;
                            type_description_2 = "o";
                            goto list_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_92);
                    } else {
                        goto list_build_exception_4;
                    }
                }

                tmp_args_element_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[56]);
                Py_DECREF(tmp_expression_value_92);
                if (tmp_args_element_value_96 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_85);
                    Py_DECREF(tmp_args_element_value_94);
                    Py_DECREF(tmp_args_element_value_95);

                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                frame_b156812224cc88c07e65e14cb43e7cde_5->m_frame.f_lineno = 75;
                {
                    PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96};
                    tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_85, call_args);
                }

                Py_DECREF(tmp_called_value_85);
                Py_DECREF(tmp_args_element_value_94);
                Py_DECREF(tmp_args_element_value_95);
                Py_DECREF(tmp_args_element_value_96);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b156812224cc88c07e65e14cb43e7cde_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b156812224cc88c07e65e14cb43e7cde_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b156812224cc88c07e65e14cb43e7cde_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b156812224cc88c07e65e14cb43e7cde_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b156812224cc88c07e65e14cb43e7cde_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b156812224cc88c07e65e14cb43e7cde_5,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_b156812224cc88c07e65e14cb43e7cde_5 == cache_frame_b156812224cc88c07e65e14cb43e7cde_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b156812224cc88c07e65e14cb43e7cde_5);
            cache_frame_b156812224cc88c07e65e14cb43e7cde_5 = NULL;
        }

        assertFrameObject(frame_b156812224cc88c07e65e14cb43e7cde_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_17;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
            assert(tmp_condition_result_30 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_17;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_value_86;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_86 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_20 = mod_consts[70];
            tmp_args_value_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_20 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 72;
            tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_86, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_54;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_args_element_value_90 = outline_4_var___class__;
        Py_INCREF(tmp_args_element_value_90);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72);
        locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72);
        locals_numba$core$typing$mathdecl$$$class__5_Math_copysign_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 72;
        goto try_except_handler_15;
        outline_result_5:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 71;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_90);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_53);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        tmp_assign_source_55 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_56 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = PyDict_New();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_metaclass_value_6;
        bool tmp_condition_result_31;
        PyObject *tmp_key_value_16;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_key_value_17;
        nuitka_bool tmp_condition_result_32;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        tmp_key_value_16 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_16, tmp_key_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_value_17 = mod_consts[21];
        tmp_metaclass_value_6 = DICT_GET_ITEM0(tmp_dict_arg_value_17, tmp_key_value_17);
        if (tmp_metaclass_value_6 == NULL) {
            tmp_metaclass_value_6 = Py_None;
        }
        assert(!(tmp_metaclass_value_6 == NULL));
        Py_INCREF(tmp_metaclass_value_6);
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        tmp_condition_result_32 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_93 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[7];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_93, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_12:;
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_58 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_key_value_18;
        PyObject *tmp_dict_arg_value_18;
        tmp_key_value_18 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_value_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_18, tmp_key_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 80;

        goto try_except_handler_18;
    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_94 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_94, mod_consts[22]);
        tmp_condition_result_34 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_95 = tmp_class_creation_6__metaclass;
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[22]);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        tmp_tuple_element_22 = mod_consts[72];
        tmp_args_value_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_22 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 80;
        tmp_assign_source_59 = CALL_FUNCTION(tmp_called_value_87, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_87);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_96;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_96 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_96, mod_consts[24]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_left_value_6 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[26];
        tmp_getattr_default_6 = mod_consts[27];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        tmp_right_value_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_97;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_right_value_6, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_97 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_97 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[26]);
            Py_DECREF(tmp_expression_value_97);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_right_value_6, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_right_value_6);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_6, tmp_right_value_6);
        Py_DECREF(tmp_right_value_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 80;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_60;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_88;
        PyObject *tmp_called_value_89;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_98;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_18;
        }
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_18;
        }
        tmp_args_element_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[73]);
        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_18;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 79;
        tmp_called_value_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_89, tmp_args_element_value_97);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_18;
        }
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        if (isFrameUnusable(cache_frame_c5389504a5270af5778731e695a58250_6)) {
            Py_XDECREF(cache_frame_c5389504a5270af5778731e695a58250_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c5389504a5270af5778731e695a58250_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c5389504a5270af5778731e695a58250_6 = MAKE_FUNCTION_FRAME(codeobj_c5389504a5270af5778731e695a58250, module_numba$core$typing$mathdecl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c5389504a5270af5778731e695a58250_6->m_type_description == NULL);
        frame_c5389504a5270af5778731e695a58250_6 = cache_frame_c5389504a5270af5778731e695a58250_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c5389504a5270af5778731e695a58250_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c5389504a5270af5778731e695a58250_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_value_90;
            PyObject *tmp_args_element_value_99;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_args_element_value_100;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_args_element_value_101;
            PyObject *tmp_expression_value_101;
            tmp_called_value_90 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[16]);

            if (tmp_called_value_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_called_value_90 == NULL)) {
                        tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_called_value_90 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_90);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_expression_value_99 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

            if (tmp_expression_value_99 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_99 == NULL)) {
                        tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_99 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_90);

                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_99);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_args_element_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[56]);
            Py_DECREF(tmp_expression_value_99);
            if (tmp_args_element_value_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_90);

                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_expression_value_100 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

            if (tmp_expression_value_100 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_100 == NULL)) {
                        tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_100 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_90);
                        Py_DECREF(tmp_args_element_value_99);

                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_100);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_args_element_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[57]);
            Py_DECREF(tmp_expression_value_100);
            if (tmp_args_element_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_90);
                Py_DECREF(tmp_args_element_value_99);

                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_expression_value_101 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

            if (tmp_expression_value_101 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_101 == NULL)) {
                        tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_101 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_90);
                        Py_DECREF(tmp_args_element_value_99);
                        Py_DECREF(tmp_args_element_value_100);

                        exception_lineno = 82;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_101);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_args_element_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[57]);
            Py_DECREF(tmp_expression_value_101);
            if (tmp_args_element_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_90);
                Py_DECREF(tmp_args_element_value_99);
                Py_DECREF(tmp_args_element_value_100);

                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_c5389504a5270af5778731e695a58250_6->m_frame.f_lineno = 82;
            {
                PyObject *call_args[] = {tmp_args_element_value_99, tmp_args_element_value_100, tmp_args_element_value_101};
                tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_90, call_args);
            }

            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_args_element_value_99);
            Py_DECREF(tmp_args_element_value_100);
            Py_DECREF(tmp_args_element_value_101);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_called_value_91;
                PyObject *tmp_args_element_value_102;
                PyObject *tmp_expression_value_102;
                PyObject *tmp_args_element_value_103;
                PyObject *tmp_expression_value_103;
                PyObject *tmp_args_element_value_104;
                PyObject *tmp_expression_value_104;
                PyObject *tmp_called_value_92;
                PyObject *tmp_args_element_value_105;
                PyObject *tmp_expression_value_105;
                PyObject *tmp_args_element_value_106;
                PyObject *tmp_expression_value_106;
                PyObject *tmp_args_element_value_107;
                PyObject *tmp_expression_value_107;
                PyObject *tmp_called_value_93;
                PyObject *tmp_args_element_value_108;
                PyObject *tmp_expression_value_108;
                PyObject *tmp_args_element_value_109;
                PyObject *tmp_expression_value_109;
                PyObject *tmp_args_element_value_110;
                PyObject *tmp_expression_value_110;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
                tmp_called_value_91 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[16]);

                if (tmp_called_value_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_91 == NULL)) {
                            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_91 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 83;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_91);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_expression_value_102 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

                if (tmp_expression_value_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_102 == NULL)) {
                            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_102 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_91);

                            exception_lineno = 83;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_102);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[56]);
                Py_DECREF(tmp_expression_value_102);
                if (tmp_args_element_value_102 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_91);

                    exception_lineno = 83;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                tmp_expression_value_103 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

                if (tmp_expression_value_103 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_103 == NULL)) {
                            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_103 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_91);
                            Py_DECREF(tmp_args_element_value_102);

                            exception_lineno = 83;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_103);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[58]);
                Py_DECREF(tmp_expression_value_103);
                if (tmp_args_element_value_103 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_91);
                    Py_DECREF(tmp_args_element_value_102);

                    exception_lineno = 83;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                tmp_expression_value_104 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

                if (tmp_expression_value_104 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_104 == NULL)) {
                            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_104 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_91);
                            Py_DECREF(tmp_args_element_value_102);
                            Py_DECREF(tmp_args_element_value_103);

                            exception_lineno = 83;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_104);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[58]);
                Py_DECREF(tmp_expression_value_104);
                if (tmp_args_element_value_104 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_91);
                    Py_DECREF(tmp_args_element_value_102);
                    Py_DECREF(tmp_args_element_value_103);

                    exception_lineno = 83;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                frame_c5389504a5270af5778731e695a58250_6->m_frame.f_lineno = 83;
                {
                    PyObject *call_args[] = {tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104};
                    tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_91, call_args);
                }

                Py_DECREF(tmp_called_value_91);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_104);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
                tmp_called_value_92 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[16]);

                if (tmp_called_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_92 == NULL)) {
                            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_92 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_92);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_expression_value_105 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

                if (tmp_expression_value_105 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_105 == NULL)) {
                            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_105 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_92);

                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_105);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[59]);
                Py_DECREF(tmp_expression_value_105);
                if (tmp_args_element_value_105 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_92);

                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                tmp_expression_value_106 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

                if (tmp_expression_value_106 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_106 == NULL)) {
                            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_106 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_92);
                            Py_DECREF(tmp_args_element_value_105);

                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_106);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[59]);
                Py_DECREF(tmp_expression_value_106);
                if (tmp_args_element_value_106 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_92);
                    Py_DECREF(tmp_args_element_value_105);

                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                tmp_expression_value_107 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

                if (tmp_expression_value_107 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_107 == NULL)) {
                            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_107 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_92);
                            Py_DECREF(tmp_args_element_value_105);
                            Py_DECREF(tmp_args_element_value_106);

                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_107);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[59]);
                Py_DECREF(tmp_expression_value_107);
                if (tmp_args_element_value_107 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_92);
                    Py_DECREF(tmp_args_element_value_105);
                    Py_DECREF(tmp_args_element_value_106);

                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                frame_c5389504a5270af5778731e695a58250_6->m_frame.f_lineno = 84;
                {
                    PyObject *call_args[] = {tmp_args_element_value_105, tmp_args_element_value_106, tmp_args_element_value_107};
                    tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_92, call_args);
                }

                Py_DECREF(tmp_called_value_92);
                Py_DECREF(tmp_args_element_value_105);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_5);
                tmp_called_value_93 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[16]);

                if (tmp_called_value_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_93 == NULL)) {
                            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_93 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 85;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_93);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_expression_value_108 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

                if (tmp_expression_value_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_108 == NULL)) {
                            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_108 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_93);

                            exception_lineno = 85;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_108);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[56]);
                Py_DECREF(tmp_expression_value_108);
                if (tmp_args_element_value_108 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_93);

                    exception_lineno = 85;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                tmp_expression_value_109 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

                if (tmp_expression_value_109 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_109 == NULL)) {
                            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_109 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_93);
                            Py_DECREF(tmp_args_element_value_108);

                            exception_lineno = 85;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_109);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[56]);
                Py_DECREF(tmp_expression_value_109);
                if (tmp_args_element_value_109 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_93);
                    Py_DECREF(tmp_args_element_value_108);

                    exception_lineno = 85;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                tmp_expression_value_110 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[10]);

                if (tmp_expression_value_110 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_110 == NULL)) {
                            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_110 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_93);
                            Py_DECREF(tmp_args_element_value_108);
                            Py_DECREF(tmp_args_element_value_109);

                            exception_lineno = 85;
                            type_description_2 = "o";
                            goto list_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_110);
                    } else {
                        goto list_build_exception_5;
                    }
                }

                tmp_args_element_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[56]);
                Py_DECREF(tmp_expression_value_110);
                if (tmp_args_element_value_110 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_93);
                    Py_DECREF(tmp_args_element_value_108);
                    Py_DECREF(tmp_args_element_value_109);

                    exception_lineno = 85;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                frame_c5389504a5270af5778731e695a58250_6->m_frame.f_lineno = 85;
                {
                    PyObject *call_args[] = {tmp_args_element_value_108, tmp_args_element_value_109, tmp_args_element_value_110};
                    tmp_list_element_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_93, call_args);
                }

                Py_DECREF(tmp_called_value_93);
                Py_DECREF(tmp_args_element_value_108);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_110);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 85;
                    type_description_2 = "o";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_5);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c5389504a5270af5778731e695a58250_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c5389504a5270af5778731e695a58250_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c5389504a5270af5778731e695a58250_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c5389504a5270af5778731e695a58250_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c5389504a5270af5778731e695a58250_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c5389504a5270af5778731e695a58250_6,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c5389504a5270af5778731e695a58250_6 == cache_frame_c5389504a5270af5778731e695a58250_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c5389504a5270af5778731e695a58250_6);
            cache_frame_c5389504a5270af5778731e695a58250_6 = NULL;
        }

        assertFrameObject(frame_c5389504a5270af5778731e695a58250_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_20;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
            assert(tmp_condition_result_36 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_20;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_94;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_94 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_24 = mod_consts[72];
            tmp_args_value_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_24 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 80;
            tmp_assign_source_62 = CALL_FUNCTION(tmp_called_value_94, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto try_except_handler_20;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_62;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_args_element_value_98 = outline_5_var___class__;
        Py_INCREF(tmp_args_element_value_98);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80);
        locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80);
        locals_numba$core$typing$mathdecl$$$class__6_Math_hypot_80 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 80;
        goto try_except_handler_18;
        outline_result_6:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 79;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_88, tmp_args_element_value_98);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_61);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_tuple_element_25;
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        tmp_assign_source_63 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_63, 0, tmp_tuple_element_25);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_64 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = PyDict_New();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_metaclass_value_7;
        bool tmp_condition_result_37;
        PyObject *tmp_key_value_19;
        PyObject *tmp_dict_arg_value_19;
        PyObject *tmp_dict_arg_value_20;
        PyObject *tmp_key_value_20;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        tmp_key_value_19 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_19, tmp_key_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_value_20 = mod_consts[21];
        tmp_metaclass_value_7 = DICT_GET_ITEM0(tmp_dict_arg_value_20, tmp_key_value_20);
        if (tmp_metaclass_value_7 == NULL) {
            tmp_metaclass_value_7 = Py_None;
        }
        assert(!(tmp_metaclass_value_7 == NULL));
        Py_INCREF(tmp_metaclass_value_7);
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        tmp_condition_result_38 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_111 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[7];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_111, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_66 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_key_value_21;
        PyObject *tmp_dict_arg_value_21;
        tmp_key_value_21 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_value_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_21, tmp_key_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 91;

        goto try_except_handler_21;
    }
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_expression_value_112;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_112 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_112, mod_consts[22]);
        tmp_condition_result_40 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_113 = tmp_class_creation_7__metaclass;
        tmp_called_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[22]);
        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        tmp_tuple_element_26 = mod_consts[74];
        tmp_args_value_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_26 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 91;
        tmp_assign_source_67 = CALL_FUNCTION(tmp_called_value_95, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_95);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_67;
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_114;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_114 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_114, mod_consts[24]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_7;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_left_value_7 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[26];
        tmp_getattr_default_7 = mod_consts[27];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        tmp_right_value_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_115;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_right_value_7, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_115 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_115 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[26]);
            Py_DECREF(tmp_expression_value_115);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_right_value_7, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_right_value_7);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_7, tmp_right_value_7);
        Py_DECREF(tmp_right_value_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 91;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_68;
    }
    branch_end_26:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_96;
        PyObject *tmp_called_value_97;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_called_value_98;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_element_value_114;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_21;
        }
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_21;
        }
        tmp_args_element_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[75]);
        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_21;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 89;
        tmp_called_value_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_97, tmp_args_element_value_111);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_21;
        }
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 90;

            goto try_except_handler_21;
        }
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 90;

            goto try_except_handler_21;
        }
        tmp_args_element_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[76]);
        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 90;

            goto try_except_handler_21;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 90;
        tmp_called_value_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_99, tmp_args_element_value_113);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 90;

            goto try_except_handler_21;
        }
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_23;
        }
        if (isFrameUnusable(cache_frame_40e0e04f3cfa57f1912cada102c29ec7_7)) {
            Py_XDECREF(cache_frame_40e0e04f3cfa57f1912cada102c29ec7_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_40e0e04f3cfa57f1912cada102c29ec7_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_40e0e04f3cfa57f1912cada102c29ec7_7 = MAKE_FUNCTION_FRAME(codeobj_40e0e04f3cfa57f1912cada102c29ec7, module_numba$core$typing$mathdecl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_40e0e04f3cfa57f1912cada102c29ec7_7->m_type_description == NULL);
        frame_40e0e04f3cfa57f1912cada102c29ec7_7 = cache_frame_40e0e04f3cfa57f1912cada102c29ec7_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_40e0e04f3cfa57f1912cada102c29ec7_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_40e0e04f3cfa57f1912cada102c29ec7_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_6;
            PyObject *tmp_called_value_100;
            PyObject *tmp_args_element_value_115;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_args_element_value_116;
            PyObject *tmp_expression_value_119;
            tmp_called_value_100 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[16]);

            if (tmp_called_value_100 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_called_value_100 == NULL)) {
                        tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_called_value_100 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_100);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_expression_value_118 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[10]);

            if (tmp_expression_value_118 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_118 == NULL)) {
                        tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_118 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_100);

                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_118);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_args_element_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[77]);
            Py_DECREF(tmp_expression_value_118);
            if (tmp_args_element_value_115 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_100);

                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_expression_value_119 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[10]);

            if (tmp_expression_value_119 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_119 == NULL)) {
                        tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_119 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_100);
                        Py_DECREF(tmp_args_element_value_115);

                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_expression_value_119);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_args_element_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[57]);
            Py_DECREF(tmp_expression_value_119);
            if (tmp_args_element_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_100);
                Py_DECREF(tmp_args_element_value_115);

                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_40e0e04f3cfa57f1912cada102c29ec7_7->m_frame.f_lineno = 93;
            {
                PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116};
                tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_100, call_args);
            }

            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_args_element_value_115);
            Py_DECREF(tmp_args_element_value_116);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_called_value_101;
                PyObject *tmp_args_element_value_117;
                PyObject *tmp_expression_value_120;
                PyObject *tmp_args_element_value_118;
                PyObject *tmp_expression_value_121;
                PyObject *tmp_called_value_102;
                PyObject *tmp_args_element_value_119;
                PyObject *tmp_expression_value_122;
                PyObject *tmp_args_element_value_120;
                PyObject *tmp_expression_value_123;
                PyObject *tmp_called_value_103;
                PyObject *tmp_args_element_value_121;
                PyObject *tmp_expression_value_124;
                PyObject *tmp_args_element_value_122;
                PyObject *tmp_expression_value_125;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
                tmp_called_value_101 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[16]);

                if (tmp_called_value_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_101 == NULL)) {
                            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_101 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 94;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_101);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_expression_value_120 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[10]);

                if (tmp_expression_value_120 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_120 == NULL)) {
                            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_120 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_101);

                            exception_lineno = 94;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_120);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[77]);
                Py_DECREF(tmp_expression_value_120);
                if (tmp_args_element_value_117 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_101);

                    exception_lineno = 94;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_expression_value_121 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[10]);

                if (tmp_expression_value_121 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_121 == NULL)) {
                            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_121 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_101);
                            Py_DECREF(tmp_args_element_value_117);

                            exception_lineno = 94;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_121);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[58]);
                Py_DECREF(tmp_expression_value_121);
                if (tmp_args_element_value_118 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_101);
                    Py_DECREF(tmp_args_element_value_117);

                    exception_lineno = 94;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                frame_40e0e04f3cfa57f1912cada102c29ec7_7->m_frame.f_lineno = 94;
                {
                    PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118};
                    tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_101, call_args);
                }

                Py_DECREF(tmp_called_value_101);
                Py_DECREF(tmp_args_element_value_117);
                Py_DECREF(tmp_args_element_value_118);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_6);
                tmp_called_value_102 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[16]);

                if (tmp_called_value_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_102 == NULL)) {
                            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_102 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 95;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_102);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_expression_value_122 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[10]);

                if (tmp_expression_value_122 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_122 == NULL)) {
                            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_122 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_102);

                            exception_lineno = 95;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_122);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[77]);
                Py_DECREF(tmp_expression_value_122);
                if (tmp_args_element_value_119 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_102);

                    exception_lineno = 95;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_expression_value_123 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[10]);

                if (tmp_expression_value_123 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_123 == NULL)) {
                            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_123 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_102);
                            Py_DECREF(tmp_args_element_value_119);

                            exception_lineno = 95;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_123);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[59]);
                Py_DECREF(tmp_expression_value_123);
                if (tmp_args_element_value_120 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_102);
                    Py_DECREF(tmp_args_element_value_119);

                    exception_lineno = 95;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                frame_40e0e04f3cfa57f1912cada102c29ec7_7->m_frame.f_lineno = 95;
                {
                    PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120};
                    tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_102, call_args);
                }

                Py_DECREF(tmp_called_value_102);
                Py_DECREF(tmp_args_element_value_119);
                Py_DECREF(tmp_args_element_value_120);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_6);
                tmp_called_value_103 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[16]);

                if (tmp_called_value_103 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_103 == NULL)) {
                            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_103 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_103);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_expression_value_124 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[10]);

                if (tmp_expression_value_124 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_124 == NULL)) {
                            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_124 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_103);

                            exception_lineno = 96;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_124);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[77]);
                Py_DECREF(tmp_expression_value_124);
                if (tmp_args_element_value_121 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_103);

                    exception_lineno = 96;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                tmp_expression_value_125 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[10]);

                if (tmp_expression_value_125 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_125 == NULL)) {
                            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_125 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_103);
                            Py_DECREF(tmp_args_element_value_121);

                            exception_lineno = 96;
                            type_description_2 = "o";
                            goto list_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_125);
                    } else {
                        goto list_build_exception_6;
                    }
                }

                tmp_args_element_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[56]);
                Py_DECREF(tmp_expression_value_125);
                if (tmp_args_element_value_122 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_103);
                    Py_DECREF(tmp_args_element_value_121);

                    exception_lineno = 96;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                frame_40e0e04f3cfa57f1912cada102c29ec7_7->m_frame.f_lineno = 96;
                {
                    PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122};
                    tmp_list_element_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_103, call_args);
                }

                Py_DECREF(tmp_called_value_103);
                Py_DECREF(tmp_args_element_value_121);
                Py_DECREF(tmp_args_element_value_122);
                if (tmp_list_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_2 = "o";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_6);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_7;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_40e0e04f3cfa57f1912cada102c29ec7_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_40e0e04f3cfa57f1912cada102c29ec7_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_40e0e04f3cfa57f1912cada102c29ec7_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_40e0e04f3cfa57f1912cada102c29ec7_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_40e0e04f3cfa57f1912cada102c29ec7_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_40e0e04f3cfa57f1912cada102c29ec7_7,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_40e0e04f3cfa57f1912cada102c29ec7_7 == cache_frame_40e0e04f3cfa57f1912cada102c29ec7_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_40e0e04f3cfa57f1912cada102c29ec7_7);
            cache_frame_40e0e04f3cfa57f1912cada102c29ec7_7 = NULL;
        }

        assertFrameObject(frame_40e0e04f3cfa57f1912cada102c29ec7_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_23;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
            assert(tmp_condition_result_42 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_28:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_23;
        }
        branch_no_28:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_value_104;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_104 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_28 = mod_consts[74];
            tmp_args_value_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_28 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 91;
            tmp_assign_source_70 = CALL_FUNCTION(tmp_called_value_104, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto try_except_handler_23;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_70;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_args_element_value_114 = outline_6_var___class__;
        Py_INCREF(tmp_args_element_value_114);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91);
        locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91);
        locals_numba$core$typing$mathdecl$$$class__7_Math_predicate_91 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 91;
        goto try_except_handler_21;
        outline_result_7:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 90;
        tmp_args_element_value_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_114);
        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_args_element_value_114);
        if (tmp_args_element_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 90;

            goto try_except_handler_21;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 89;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_112);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_element_value_112);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_69);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_tuple_element_29;
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        tmp_assign_source_71 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_71, 0, tmp_tuple_element_29);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_72 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = PyDict_New();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_metaclass_value_8;
        bool tmp_condition_result_43;
        PyObject *tmp_key_value_22;
        PyObject *tmp_dict_arg_value_22;
        PyObject *tmp_dict_arg_value_23;
        PyObject *tmp_key_value_23;
        nuitka_bool tmp_condition_result_44;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        tmp_key_value_22 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_22, tmp_key_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_value_23 = mod_consts[21];
        tmp_metaclass_value_8 = DICT_GET_ITEM0(tmp_dict_arg_value_23, tmp_key_value_23);
        if (tmp_metaclass_value_8 == NULL) {
            tmp_metaclass_value_8 = Py_None;
        }
        assert(!(tmp_metaclass_value_8 == NULL));
        Py_INCREF(tmp_metaclass_value_8);
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        tmp_condition_result_44 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_126 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[7];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_126, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_74 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_74;
    }
    {
        bool tmp_condition_result_45;
        PyObject *tmp_key_value_24;
        PyObject *tmp_dict_arg_value_24;
        tmp_key_value_24 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_value_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_24, tmp_key_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 101;

        goto try_except_handler_24;
    }
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_expression_value_127;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_127 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_127, mod_consts[22]);
        tmp_condition_result_46 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_105;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_128 = tmp_class_creation_8__metaclass;
        tmp_called_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[22]);
        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        tmp_tuple_element_30 = mod_consts[78];
        tmp_args_value_15 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_30 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_30);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 101;
        tmp_assign_source_75 = CALL_FUNCTION(tmp_called_value_105, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_105);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_75;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_129;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_129 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_129, mod_consts[24]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_left_value_8 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[26];
        tmp_getattr_default_8 = mod_consts[27];
        tmp_tuple_element_31 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        tmp_right_value_8 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_130;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_right_value_8, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_130 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_130 == NULL));
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[26]);
            Py_DECREF(tmp_expression_value_130);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_right_value_8, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_right_value_8);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_8, tmp_right_value_8);
        Py_DECREF(tmp_right_value_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_24;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 101;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_24;
    }
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = PyDict_New();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_76;
    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_106;
        PyObject *tmp_called_value_107;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_args_element_value_124;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_24;
        }
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_24;
        }
        tmp_args_element_value_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[79]);
        if (tmp_args_element_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_24;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 100;
        tmp_called_value_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_107, tmp_args_element_value_123);
        Py_DECREF(tmp_args_element_value_123);
        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_24;
        }
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_numba$core$typing$mathdecl$$$class__8_Math_isfinite_101 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__8_Math_isfinite_101, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__8_Math_isfinite_101, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_26;
        }
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto try_except_handler_26;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_32;
            } else {
                goto branch_no_32;
            }
            assert(tmp_condition_result_48 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_32:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__8_Math_isfinite_101, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_26;
        }
        branch_no_32:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_value_108;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_108 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_32 = mod_consts[78];
            tmp_args_value_16 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_32 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_numba$core$typing$mathdecl$$$class__8_Math_isfinite_101;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 101;
            tmp_assign_source_78 = CALL_FUNCTION(tmp_called_value_108, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto try_except_handler_26;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_78;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_args_element_value_124 = outline_7_var___class__;
        Py_INCREF(tmp_args_element_value_124);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__8_Math_isfinite_101);
        locals_numba$core$typing$mathdecl$$$class__8_Math_isfinite_101 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__8_Math_isfinite_101);
        locals_numba$core$typing$mathdecl$$$class__8_Math_isfinite_101 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 101;
        goto try_except_handler_24;
        outline_result_8:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 100;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_106, tmp_args_element_value_124);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_124);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_77);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_tuple_element_33;
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_33 == NULL)) {
            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        tmp_assign_source_79 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_79, 0, tmp_tuple_element_33);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_80 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = PyDict_New();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_metaclass_value_9;
        bool tmp_condition_result_49;
        PyObject *tmp_key_value_25;
        PyObject *tmp_dict_arg_value_25;
        PyObject *tmp_dict_arg_value_26;
        PyObject *tmp_key_value_26;
        nuitka_bool tmp_condition_result_50;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        tmp_key_value_25 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_25, tmp_key_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_49 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_value_26 = mod_consts[21];
        tmp_metaclass_value_9 = DICT_GET_ITEM0(tmp_dict_arg_value_26, tmp_key_value_26);
        if (tmp_metaclass_value_9 == NULL) {
            tmp_metaclass_value_9 = Py_None;
        }
        assert(!(tmp_metaclass_value_9 == NULL));
        Py_INCREF(tmp_metaclass_value_9);
        goto condexpr_end_17;
        condexpr_false_17:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        tmp_condition_result_50 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_132 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[7];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_132, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_18:;
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_82 = SELECT_METACLASS(tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_key_value_27;
        PyObject *tmp_dict_arg_value_27;
        tmp_key_value_27 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_value_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_27, tmp_key_value_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 106;

        goto try_except_handler_27;
    }
    branch_no_33:;
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_expression_value_133;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_133 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_133, mod_consts[22]);
        tmp_condition_result_52 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_109;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_134 = tmp_class_creation_9__metaclass;
        tmp_called_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[22]);
        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        tmp_tuple_element_34 = mod_consts[80];
        tmp_args_value_17 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_34 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 106;
        tmp_assign_source_83 = CALL_FUNCTION(tmp_called_value_109, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_109);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_83;
    }
    {
        bool tmp_condition_result_53;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_135;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_135 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_135, mod_consts[24]);
        tmp_operand_value_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        tmp_condition_result_53 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_left_value_9 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[26];
        tmp_getattr_default_9 = mod_consts[27];
        tmp_tuple_element_35 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        tmp_right_value_9 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_136;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_right_value_9, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_136 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_136 == NULL));
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[26]);
            Py_DECREF(tmp_expression_value_136);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_right_value_9, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_right_value_9);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_9, tmp_right_value_9);
        Py_DECREF(tmp_right_value_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_27;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 106;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_27;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = PyDict_New();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_84;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_110;
        PyObject *tmp_called_value_111;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_args_element_value_126;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_27;
        }
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_27;
        }
        tmp_args_element_value_125 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[81]);
        if (tmp_args_element_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_27;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 105;
        tmp_called_value_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_111, tmp_args_element_value_125);
        Py_DECREF(tmp_args_element_value_125);
        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_27;
        }
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_29;
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_29;
        }
        if (isFrameUnusable(cache_frame_82c9ee6b05b8c48d38d9cc800cac5c45_8)) {
            Py_XDECREF(cache_frame_82c9ee6b05b8c48d38d9cc800cac5c45_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_82c9ee6b05b8c48d38d9cc800cac5c45_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_82c9ee6b05b8c48d38d9cc800cac5c45_8 = MAKE_FUNCTION_FRAME(codeobj_82c9ee6b05b8c48d38d9cc800cac5c45, module_numba$core$typing$mathdecl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_82c9ee6b05b8c48d38d9cc800cac5c45_8->m_type_description == NULL);
        frame_82c9ee6b05b8c48d38d9cc800cac5c45_8 = cache_frame_82c9ee6b05b8c48d38d9cc800cac5c45_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_82c9ee6b05b8c48d38d9cc800cac5c45_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_82c9ee6b05b8c48d38d9cc800cac5c45_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_7;
            PyObject *tmp_called_value_112;
            PyObject *tmp_args_element_value_127;
            PyObject *tmp_expression_value_138;
            PyObject *tmp_args_element_value_128;
            PyObject *tmp_expression_value_139;
            PyObject *tmp_args_element_value_129;
            PyObject *tmp_expression_value_140;
            tmp_called_value_112 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[16]);

            if (tmp_called_value_112 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_called_value_112 == NULL)) {
                        tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_called_value_112 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 108;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_112);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_expression_value_138 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

            if (tmp_expression_value_138 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_138 == NULL)) {
                        tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_138 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_112);

                        exception_lineno = 108;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_138);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_args_element_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[56]);
            Py_DECREF(tmp_expression_value_138);
            if (tmp_args_element_value_127 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_112);

                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_expression_value_139 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

            if (tmp_expression_value_139 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_139 == NULL)) {
                        tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_139 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_112);
                        Py_DECREF(tmp_args_element_value_127);

                        exception_lineno = 108;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_139);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_args_element_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[56]);
            Py_DECREF(tmp_expression_value_139);
            if (tmp_args_element_value_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_112);
                Py_DECREF(tmp_args_element_value_127);

                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_expression_value_140 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

            if (tmp_expression_value_140 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_140 == NULL)) {
                        tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_140 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_112);
                        Py_DECREF(tmp_args_element_value_127);
                        Py_DECREF(tmp_args_element_value_128);

                        exception_lineno = 108;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_expression_value_140);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_args_element_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[57]);
            Py_DECREF(tmp_expression_value_140);
            if (tmp_args_element_value_129 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_112);
                Py_DECREF(tmp_args_element_value_127);
                Py_DECREF(tmp_args_element_value_128);

                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_82c9ee6b05b8c48d38d9cc800cac5c45_8->m_frame.f_lineno = 108;
            {
                PyObject *call_args[] = {tmp_args_element_value_127, tmp_args_element_value_128, tmp_args_element_value_129};
                tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_112, call_args);
            }

            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_element_value_127);
            Py_DECREF(tmp_args_element_value_128);
            Py_DECREF(tmp_args_element_value_129);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_dictset_value = PyList_New(4);
            {
                PyObject *tmp_called_value_113;
                PyObject *tmp_args_element_value_130;
                PyObject *tmp_expression_value_141;
                PyObject *tmp_args_element_value_131;
                PyObject *tmp_expression_value_142;
                PyObject *tmp_args_element_value_132;
                PyObject *tmp_expression_value_143;
                PyObject *tmp_called_value_114;
                PyObject *tmp_args_element_value_133;
                PyObject *tmp_expression_value_144;
                PyObject *tmp_args_element_value_134;
                PyObject *tmp_expression_value_145;
                PyObject *tmp_args_element_value_135;
                PyObject *tmp_expression_value_146;
                PyObject *tmp_called_value_115;
                PyObject *tmp_args_element_value_136;
                PyObject *tmp_expression_value_147;
                PyObject *tmp_args_element_value_137;
                PyObject *tmp_expression_value_148;
                PyObject *tmp_args_element_value_138;
                PyObject *tmp_expression_value_149;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_7);
                tmp_called_value_113 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[16]);

                if (tmp_called_value_113 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_113 == NULL)) {
                            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_113 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_113);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_expression_value_141 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

                if (tmp_expression_value_141 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_141 == NULL)) {
                            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_141 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_113);

                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_141);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_args_element_value_130 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[56]);
                Py_DECREF(tmp_expression_value_141);
                if (tmp_args_element_value_130 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_113);

                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                tmp_expression_value_142 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

                if (tmp_expression_value_142 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_142 == NULL)) {
                            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_142 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_113);
                            Py_DECREF(tmp_args_element_value_130);

                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_142);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_args_element_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[56]);
                Py_DECREF(tmp_expression_value_142);
                if (tmp_args_element_value_131 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_113);
                    Py_DECREF(tmp_args_element_value_130);

                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                tmp_expression_value_143 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

                if (tmp_expression_value_143 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_143 == NULL)) {
                            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_143 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_113);
                            Py_DECREF(tmp_args_element_value_130);
                            Py_DECREF(tmp_args_element_value_131);

                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_143);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_args_element_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[58]);
                Py_DECREF(tmp_expression_value_143);
                if (tmp_args_element_value_132 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_113);
                    Py_DECREF(tmp_args_element_value_130);
                    Py_DECREF(tmp_args_element_value_131);

                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                frame_82c9ee6b05b8c48d38d9cc800cac5c45_8->m_frame.f_lineno = 109;
                {
                    PyObject *call_args[] = {tmp_args_element_value_130, tmp_args_element_value_131, tmp_args_element_value_132};
                    tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_113, call_args);
                }

                Py_DECREF(tmp_called_value_113);
                Py_DECREF(tmp_args_element_value_130);
                Py_DECREF(tmp_args_element_value_131);
                Py_DECREF(tmp_args_element_value_132);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_7);
                tmp_called_value_114 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[16]);

                if (tmp_called_value_114 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_114 == NULL)) {
                            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_114 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 110;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_114);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_expression_value_144 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

                if (tmp_expression_value_144 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_144 == NULL)) {
                            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_144 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_114);

                            exception_lineno = 110;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_144);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_args_element_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[59]);
                Py_DECREF(tmp_expression_value_144);
                if (tmp_args_element_value_133 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_114);

                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                tmp_expression_value_145 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

                if (tmp_expression_value_145 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_145 == NULL)) {
                            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_145 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_114);
                            Py_DECREF(tmp_args_element_value_133);

                            exception_lineno = 110;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_145);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_args_element_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[59]);
                Py_DECREF(tmp_expression_value_145);
                if (tmp_args_element_value_134 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_114);
                    Py_DECREF(tmp_args_element_value_133);

                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                tmp_expression_value_146 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

                if (tmp_expression_value_146 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_146 == NULL)) {
                            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_146 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_114);
                            Py_DECREF(tmp_args_element_value_133);
                            Py_DECREF(tmp_args_element_value_134);

                            exception_lineno = 110;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_146);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_args_element_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[59]);
                Py_DECREF(tmp_expression_value_146);
                if (tmp_args_element_value_135 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_114);
                    Py_DECREF(tmp_args_element_value_133);
                    Py_DECREF(tmp_args_element_value_134);

                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                frame_82c9ee6b05b8c48d38d9cc800cac5c45_8->m_frame.f_lineno = 110;
                {
                    PyObject *call_args[] = {tmp_args_element_value_133, tmp_args_element_value_134, tmp_args_element_value_135};
                    tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_114, call_args);
                }

                Py_DECREF(tmp_called_value_114);
                Py_DECREF(tmp_args_element_value_133);
                Py_DECREF(tmp_args_element_value_134);
                Py_DECREF(tmp_args_element_value_135);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_7);
                tmp_called_value_115 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[16]);

                if (tmp_called_value_115 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_115 == NULL)) {
                            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_115 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 111;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_115);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_expression_value_147 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

                if (tmp_expression_value_147 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_147 == NULL)) {
                            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_147 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_115);

                            exception_lineno = 111;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_147);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_args_element_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[56]);
                Py_DECREF(tmp_expression_value_147);
                if (tmp_args_element_value_136 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_115);

                    exception_lineno = 111;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                tmp_expression_value_148 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

                if (tmp_expression_value_148 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_148 == NULL)) {
                            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_148 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_115);
                            Py_DECREF(tmp_args_element_value_136);

                            exception_lineno = 111;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_148);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_args_element_value_137 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[56]);
                Py_DECREF(tmp_expression_value_148);
                if (tmp_args_element_value_137 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_115);
                    Py_DECREF(tmp_args_element_value_136);

                    exception_lineno = 111;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                tmp_expression_value_149 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[10]);

                if (tmp_expression_value_149 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_149 == NULL)) {
                            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_149 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_115);
                            Py_DECREF(tmp_args_element_value_136);
                            Py_DECREF(tmp_args_element_value_137);

                            exception_lineno = 111;
                            type_description_2 = "o";
                            goto list_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_149);
                    } else {
                        goto list_build_exception_7;
                    }
                }

                tmp_args_element_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[56]);
                Py_DECREF(tmp_expression_value_149);
                if (tmp_args_element_value_138 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_115);
                    Py_DECREF(tmp_args_element_value_136);
                    Py_DECREF(tmp_args_element_value_137);

                    exception_lineno = 111;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                frame_82c9ee6b05b8c48d38d9cc800cac5c45_8->m_frame.f_lineno = 111;
                {
                    PyObject *call_args[] = {tmp_args_element_value_136, tmp_args_element_value_137, tmp_args_element_value_138};
                    tmp_list_element_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_115, call_args);
                }

                Py_DECREF(tmp_called_value_115);
                Py_DECREF(tmp_args_element_value_136);
                Py_DECREF(tmp_args_element_value_137);
                Py_DECREF(tmp_args_element_value_138);
                if (tmp_list_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_2 = "o";
                    goto list_build_exception_7;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_7);
            }
            goto list_build_noexception_7;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_8;
            // Finished with no exception for list_build:
            list_build_noexception_7:;
            tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_82c9ee6b05b8c48d38d9cc800cac5c45_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_82c9ee6b05b8c48d38d9cc800cac5c45_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_82c9ee6b05b8c48d38d9cc800cac5c45_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_82c9ee6b05b8c48d38d9cc800cac5c45_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_82c9ee6b05b8c48d38d9cc800cac5c45_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_82c9ee6b05b8c48d38d9cc800cac5c45_8,
            type_description_2,
            outline_8_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_82c9ee6b05b8c48d38d9cc800cac5c45_8 == cache_frame_82c9ee6b05b8c48d38d9cc800cac5c45_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_82c9ee6b05b8c48d38d9cc800cac5c45_8);
            cache_frame_82c9ee6b05b8c48d38d9cc800cac5c45_8 = NULL;
        }

        assertFrameObject(frame_82c9ee6b05b8c48d38d9cc800cac5c45_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_29;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_54;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_54 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_54 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_29;
            }
            if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
            assert(tmp_condition_result_54 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_36:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto try_except_handler_29;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_called_value_116;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_116 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_36 = mod_consts[80];
            tmp_args_value_18 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_36 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 106;
            tmp_assign_source_86 = CALL_FUNCTION(tmp_called_value_116, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto try_except_handler_29;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_86;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_args_element_value_126 = outline_8_var___class__;
        Py_INCREF(tmp_args_element_value_126);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106);
        locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106 = NULL;
        goto try_return_handler_28;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106);
        locals_numba$core$typing$mathdecl$$$class__9_Math_pow_106 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 106;
        goto try_except_handler_27;
        outline_result_9:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 105;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_110, tmp_args_element_value_126);
        Py_DECREF(tmp_called_value_110);
        Py_DECREF(tmp_args_element_value_126);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_85);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_tuple_element_37;
        tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_37 == NULL)) {
            tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        tmp_assign_source_87 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_37);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_88 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = PyDict_New();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_metaclass_value_10;
        bool tmp_condition_result_55;
        PyObject *tmp_key_value_28;
        PyObject *tmp_dict_arg_value_28;
        PyObject *tmp_dict_arg_value_29;
        PyObject *tmp_key_value_29;
        nuitka_bool tmp_condition_result_56;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        tmp_key_value_28 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_28, tmp_key_value_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_55 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_value_29 = mod_consts[21];
        tmp_metaclass_value_10 = DICT_GET_ITEM0(tmp_dict_arg_value_29, tmp_key_value_29);
        if (tmp_metaclass_value_10 == NULL) {
            tmp_metaclass_value_10 = Py_None;
        }
        assert(!(tmp_metaclass_value_10 == NULL));
        Py_INCREF(tmp_metaclass_value_10);
        goto condexpr_end_19;
        condexpr_false_19:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        tmp_condition_result_56 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_150 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[7];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_150, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_20:;
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_90 = SELECT_METACLASS(tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_90;
    }
    {
        bool tmp_condition_result_57;
        PyObject *tmp_key_value_30;
        PyObject *tmp_dict_arg_value_30;
        tmp_key_value_30 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_value_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_30, tmp_key_value_30);
        assert(!(tmp_res == -1));
        tmp_condition_result_57 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_57 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 116;

        goto try_except_handler_30;
    }
    branch_no_37:;
    {
        nuitka_bool tmp_condition_result_58;
        PyObject *tmp_expression_value_151;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_151 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_151, mod_consts[22]);
        tmp_condition_result_58 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_117;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_152 = tmp_class_creation_10__metaclass;
        tmp_called_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[22]);
        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        tmp_tuple_element_38 = mod_consts[82];
        tmp_args_value_19 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_38);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_38 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_38);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 116;
        tmp_assign_source_91 = CALL_FUNCTION(tmp_called_value_117, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_117);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_91;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_153;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_153 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_153, mod_consts[24]);
        tmp_operand_value_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_left_value_10 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_10 = mod_consts[26];
        tmp_getattr_default_10 = mod_consts[27];
        tmp_tuple_element_39 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
        if (tmp_tuple_element_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        tmp_right_value_10 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_154;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_right_value_10, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_154 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_154 == NULL));
            tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[26]);
            Py_DECREF(tmp_expression_value_154);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_right_value_10, 1, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_right_value_10);
        goto try_except_handler_30;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_10, tmp_right_value_10);
        Py_DECREF(tmp_right_value_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_30;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 116;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_30;
    }
    branch_no_39:;
    goto branch_end_38;
    branch_no_38:;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = PyDict_New();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_92;
    }
    branch_end_38:;
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_118;
        PyObject *tmp_called_value_119;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_args_element_value_140;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_30;
        }
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_30;
        }
        tmp_args_element_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[83]);
        if (tmp_args_element_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_30;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 115;
        tmp_called_value_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_119, tmp_args_element_value_139);
        Py_DECREF(tmp_args_element_value_139);
        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_30;
        }
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_32;
        }
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_32;
        }
        if (isFrameUnusable(cache_frame_6b067da65c6d10a814d203fa6f6fe03f_9)) {
            Py_XDECREF(cache_frame_6b067da65c6d10a814d203fa6f6fe03f_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6b067da65c6d10a814d203fa6f6fe03f_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6b067da65c6d10a814d203fa6f6fe03f_9 = MAKE_FUNCTION_FRAME(codeobj_6b067da65c6d10a814d203fa6f6fe03f, module_numba$core$typing$mathdecl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6b067da65c6d10a814d203fa6f6fe03f_9->m_type_description == NULL);
        frame_6b067da65c6d10a814d203fa6f6fe03f_9 = cache_frame_6b067da65c6d10a814d203fa6f6fe03f_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6b067da65c6d10a814d203fa6f6fe03f_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6b067da65c6d10a814d203fa6f6fe03f_9) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_8;
            PyObject *tmp_called_value_120;
            PyObject *tmp_args_element_value_141;
            PyObject *tmp_expression_value_156;
            PyObject *tmp_args_element_value_142;
            PyObject *tmp_expression_value_157;
            PyObject *tmp_args_element_value_143;
            PyObject *tmp_expression_value_158;
            tmp_called_value_120 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[16]);

            if (tmp_called_value_120 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_called_value_120 == NULL)) {
                        tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_called_value_120 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_value_120);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_expression_value_156 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

            if (tmp_expression_value_156 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_156 == NULL)) {
                        tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_156 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_120);

                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_156);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_args_element_value_141 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[57]);
            Py_DECREF(tmp_expression_value_156);
            if (tmp_args_element_value_141 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_120);

                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_expression_value_157 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

            if (tmp_expression_value_157 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_157 == NULL)) {
                        tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_157 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_120);
                        Py_DECREF(tmp_args_element_value_141);

                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_157);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_args_element_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[57]);
            Py_DECREF(tmp_expression_value_157);
            if (tmp_args_element_value_142 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_120);
                Py_DECREF(tmp_args_element_value_141);

                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_expression_value_158 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

            if (tmp_expression_value_158 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_158 == NULL)) {
                        tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_158 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_120);
                        Py_DECREF(tmp_args_element_value_141);
                        Py_DECREF(tmp_args_element_value_142);

                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_expression_value_158);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_args_element_value_143 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[57]);
            Py_DECREF(tmp_expression_value_158);
            if (tmp_args_element_value_143 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_120);
                Py_DECREF(tmp_args_element_value_141);
                Py_DECREF(tmp_args_element_value_142);

                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_6b067da65c6d10a814d203fa6f6fe03f_9->m_frame.f_lineno = 118;
            {
                PyObject *call_args[] = {tmp_args_element_value_141, tmp_args_element_value_142, tmp_args_element_value_143};
                tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_120, call_args);
            }

            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_args_element_value_141);
            Py_DECREF(tmp_args_element_value_142);
            Py_DECREF(tmp_args_element_value_143);
            if (tmp_list_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_dictset_value = PyList_New(8);
            {
                PyObject *tmp_called_value_121;
                PyObject *tmp_args_element_value_144;
                PyObject *tmp_expression_value_159;
                PyObject *tmp_args_element_value_145;
                PyObject *tmp_expression_value_160;
                PyObject *tmp_args_element_value_146;
                PyObject *tmp_expression_value_161;
                PyObject *tmp_called_value_122;
                PyObject *tmp_args_element_value_147;
                PyObject *tmp_expression_value_162;
                PyObject *tmp_args_element_value_148;
                PyObject *tmp_expression_value_163;
                PyObject *tmp_args_element_value_149;
                PyObject *tmp_expression_value_164;
                PyObject *tmp_called_value_123;
                PyObject *tmp_args_element_value_150;
                PyObject *tmp_expression_value_165;
                PyObject *tmp_args_element_value_151;
                PyObject *tmp_expression_value_166;
                PyObject *tmp_args_element_value_152;
                PyObject *tmp_expression_value_167;
                PyObject *tmp_called_value_124;
                PyObject *tmp_args_element_value_153;
                PyObject *tmp_expression_value_168;
                PyObject *tmp_args_element_value_154;
                PyObject *tmp_expression_value_169;
                PyObject *tmp_args_element_value_155;
                PyObject *tmp_expression_value_170;
                PyObject *tmp_called_value_125;
                PyObject *tmp_args_element_value_156;
                PyObject *tmp_expression_value_171;
                PyObject *tmp_args_element_value_157;
                PyObject *tmp_expression_value_172;
                PyObject *tmp_args_element_value_158;
                PyObject *tmp_expression_value_173;
                PyObject *tmp_called_value_126;
                PyObject *tmp_args_element_value_159;
                PyObject *tmp_expression_value_174;
                PyObject *tmp_args_element_value_160;
                PyObject *tmp_expression_value_175;
                PyObject *tmp_args_element_value_161;
                PyObject *tmp_expression_value_176;
                PyObject *tmp_called_value_127;
                PyObject *tmp_args_element_value_162;
                PyObject *tmp_expression_value_177;
                PyObject *tmp_args_element_value_163;
                PyObject *tmp_expression_value_178;
                PyObject *tmp_args_element_value_164;
                PyObject *tmp_expression_value_179;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_8);
                tmp_called_value_121 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[16]);

                if (tmp_called_value_121 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_121 == NULL)) {
                            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_121 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 119;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_121);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_expression_value_159 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_159 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_159 == NULL)) {
                            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_159 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_121);

                            exception_lineno = 119;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_159);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[84]);
                Py_DECREF(tmp_expression_value_159);
                if (tmp_args_element_value_144 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_121);

                    exception_lineno = 119;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_160 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_160 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_160 == NULL)) {
                            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_160 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_121);
                            Py_DECREF(tmp_args_element_value_144);

                            exception_lineno = 119;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_160);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_145 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[84]);
                Py_DECREF(tmp_expression_value_160);
                if (tmp_args_element_value_145 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_121);
                    Py_DECREF(tmp_args_element_value_144);

                    exception_lineno = 119;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_161 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_161 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_161 == NULL)) {
                            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_161 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_121);
                            Py_DECREF(tmp_args_element_value_144);
                            Py_DECREF(tmp_args_element_value_145);

                            exception_lineno = 119;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_161);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[84]);
                Py_DECREF(tmp_expression_value_161);
                if (tmp_args_element_value_146 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_121);
                    Py_DECREF(tmp_args_element_value_144);
                    Py_DECREF(tmp_args_element_value_145);

                    exception_lineno = 119;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                frame_6b067da65c6d10a814d203fa6f6fe03f_9->m_frame.f_lineno = 119;
                {
                    PyObject *call_args[] = {tmp_args_element_value_144, tmp_args_element_value_145, tmp_args_element_value_146};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_121, call_args);
                }

                Py_DECREF(tmp_called_value_121);
                Py_DECREF(tmp_args_element_value_144);
                Py_DECREF(tmp_args_element_value_145);
                Py_DECREF(tmp_args_element_value_146);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 119;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_8);
                tmp_called_value_122 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[16]);

                if (tmp_called_value_122 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_122 == NULL)) {
                            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_122 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 120;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_122);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_expression_value_162 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_162 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_162 == NULL)) {
                            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_162 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_122);

                            exception_lineno = 120;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_162);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_147 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[85]);
                Py_DECREF(tmp_expression_value_162);
                if (tmp_args_element_value_147 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_122);

                    exception_lineno = 120;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_163 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_163 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_163 == NULL)) {
                            tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_163 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_122);
                            Py_DECREF(tmp_args_element_value_147);

                            exception_lineno = 120;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_163);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[85]);
                Py_DECREF(tmp_expression_value_163);
                if (tmp_args_element_value_148 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_122);
                    Py_DECREF(tmp_args_element_value_147);

                    exception_lineno = 120;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_164 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_164 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_164 == NULL)) {
                            tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_164 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_122);
                            Py_DECREF(tmp_args_element_value_147);
                            Py_DECREF(tmp_args_element_value_148);

                            exception_lineno = 120;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_164);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[85]);
                Py_DECREF(tmp_expression_value_164);
                if (tmp_args_element_value_149 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_122);
                    Py_DECREF(tmp_args_element_value_147);
                    Py_DECREF(tmp_args_element_value_148);

                    exception_lineno = 120;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                frame_6b067da65c6d10a814d203fa6f6fe03f_9->m_frame.f_lineno = 120;
                {
                    PyObject *call_args[] = {tmp_args_element_value_147, tmp_args_element_value_148, tmp_args_element_value_149};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_122, call_args);
                }

                Py_DECREF(tmp_called_value_122);
                Py_DECREF(tmp_args_element_value_147);
                Py_DECREF(tmp_args_element_value_148);
                Py_DECREF(tmp_args_element_value_149);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 120;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_8);
                tmp_called_value_123 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[16]);

                if (tmp_called_value_123 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_123 == NULL)) {
                            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_123 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 121;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_123);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_expression_value_165 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_165 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_165 == NULL)) {
                            tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_165 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_123);

                            exception_lineno = 121;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_165);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[86]);
                Py_DECREF(tmp_expression_value_165);
                if (tmp_args_element_value_150 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_123);

                    exception_lineno = 121;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_166 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_166 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_166 == NULL)) {
                            tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_166 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_123);
                            Py_DECREF(tmp_args_element_value_150);

                            exception_lineno = 121;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_166);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[86]);
                Py_DECREF(tmp_expression_value_166);
                if (tmp_args_element_value_151 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_123);
                    Py_DECREF(tmp_args_element_value_150);

                    exception_lineno = 121;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_167 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_167 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_167 == NULL)) {
                            tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_167 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_123);
                            Py_DECREF(tmp_args_element_value_150);
                            Py_DECREF(tmp_args_element_value_151);

                            exception_lineno = 121;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_167);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_152 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[86]);
                Py_DECREF(tmp_expression_value_167);
                if (tmp_args_element_value_152 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_123);
                    Py_DECREF(tmp_args_element_value_150);
                    Py_DECREF(tmp_args_element_value_151);

                    exception_lineno = 121;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                frame_6b067da65c6d10a814d203fa6f6fe03f_9->m_frame.f_lineno = 121;
                {
                    PyObject *call_args[] = {tmp_args_element_value_150, tmp_args_element_value_151, tmp_args_element_value_152};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_123, call_args);
                }

                Py_DECREF(tmp_called_value_123);
                Py_DECREF(tmp_args_element_value_150);
                Py_DECREF(tmp_args_element_value_151);
                Py_DECREF(tmp_args_element_value_152);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 121;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_8);
                tmp_called_value_124 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[16]);

                if (tmp_called_value_124 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_124 == NULL)) {
                            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_124 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 122;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_124);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_expression_value_168 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_168 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_168 == NULL)) {
                            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_168 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_124);

                            exception_lineno = 122;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_168);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_153 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[58]);
                Py_DECREF(tmp_expression_value_168);
                if (tmp_args_element_value_153 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_124);

                    exception_lineno = 122;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_169 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_169 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_169 == NULL)) {
                            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_169 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_124);
                            Py_DECREF(tmp_args_element_value_153);

                            exception_lineno = 122;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_169);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[58]);
                Py_DECREF(tmp_expression_value_169);
                if (tmp_args_element_value_154 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_124);
                    Py_DECREF(tmp_args_element_value_153);

                    exception_lineno = 122;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_170 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_170 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_170 == NULL)) {
                            tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_170 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_124);
                            Py_DECREF(tmp_args_element_value_153);
                            Py_DECREF(tmp_args_element_value_154);

                            exception_lineno = 122;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_170);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_155 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[58]);
                Py_DECREF(tmp_expression_value_170);
                if (tmp_args_element_value_155 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_124);
                    Py_DECREF(tmp_args_element_value_153);
                    Py_DECREF(tmp_args_element_value_154);

                    exception_lineno = 122;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                frame_6b067da65c6d10a814d203fa6f6fe03f_9->m_frame.f_lineno = 122;
                {
                    PyObject *call_args[] = {tmp_args_element_value_153, tmp_args_element_value_154, tmp_args_element_value_155};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_124, call_args);
                }

                Py_DECREF(tmp_called_value_124);
                Py_DECREF(tmp_args_element_value_153);
                Py_DECREF(tmp_args_element_value_154);
                Py_DECREF(tmp_args_element_value_155);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 122;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_8);
                tmp_called_value_125 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[16]);

                if (tmp_called_value_125 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_125 == NULL)) {
                            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_125 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_125);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_expression_value_171 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_171 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_171 == NULL)) {
                            tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_171 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_125);

                            exception_lineno = 123;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_171);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[87]);
                Py_DECREF(tmp_expression_value_171);
                if (tmp_args_element_value_156 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_125);

                    exception_lineno = 123;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_172 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_172 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_172 == NULL)) {
                            tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_172 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_125);
                            Py_DECREF(tmp_args_element_value_156);

                            exception_lineno = 123;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_172);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[87]);
                Py_DECREF(tmp_expression_value_172);
                if (tmp_args_element_value_157 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_125);
                    Py_DECREF(tmp_args_element_value_156);

                    exception_lineno = 123;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_173 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_173 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_173 == NULL)) {
                            tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_173 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_125);
                            Py_DECREF(tmp_args_element_value_156);
                            Py_DECREF(tmp_args_element_value_157);

                            exception_lineno = 123;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_173);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_158 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[87]);
                Py_DECREF(tmp_expression_value_173);
                if (tmp_args_element_value_158 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_125);
                    Py_DECREF(tmp_args_element_value_156);
                    Py_DECREF(tmp_args_element_value_157);

                    exception_lineno = 123;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                frame_6b067da65c6d10a814d203fa6f6fe03f_9->m_frame.f_lineno = 123;
                {
                    PyObject *call_args[] = {tmp_args_element_value_156, tmp_args_element_value_157, tmp_args_element_value_158};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_125, call_args);
                }

                Py_DECREF(tmp_called_value_125);
                Py_DECREF(tmp_args_element_value_156);
                Py_DECREF(tmp_args_element_value_157);
                Py_DECREF(tmp_args_element_value_158);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_8);
                tmp_called_value_126 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[16]);

                if (tmp_called_value_126 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_126 == NULL)) {
                            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_126 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_126);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_expression_value_174 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_174 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_174 == NULL)) {
                            tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_174 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_126);

                            exception_lineno = 124;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_174);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_159 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[88]);
                Py_DECREF(tmp_expression_value_174);
                if (tmp_args_element_value_159 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_126);

                    exception_lineno = 124;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_175 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_175 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_175 == NULL)) {
                            tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_175 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_126);
                            Py_DECREF(tmp_args_element_value_159);

                            exception_lineno = 124;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_175);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[88]);
                Py_DECREF(tmp_expression_value_175);
                if (tmp_args_element_value_160 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_126);
                    Py_DECREF(tmp_args_element_value_159);

                    exception_lineno = 124;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_176 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_176 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_176 == NULL)) {
                            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_176 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_126);
                            Py_DECREF(tmp_args_element_value_159);
                            Py_DECREF(tmp_args_element_value_160);

                            exception_lineno = 124;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_176);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_161 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[88]);
                Py_DECREF(tmp_expression_value_176);
                if (tmp_args_element_value_161 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_126);
                    Py_DECREF(tmp_args_element_value_159);
                    Py_DECREF(tmp_args_element_value_160);

                    exception_lineno = 124;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                frame_6b067da65c6d10a814d203fa6f6fe03f_9->m_frame.f_lineno = 124;
                {
                    PyObject *call_args[] = {tmp_args_element_value_159, tmp_args_element_value_160, tmp_args_element_value_161};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_126, call_args);
                }

                Py_DECREF(tmp_called_value_126);
                Py_DECREF(tmp_args_element_value_159);
                Py_DECREF(tmp_args_element_value_160);
                Py_DECREF(tmp_args_element_value_161);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 124;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_8);
                tmp_called_value_127 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[16]);

                if (tmp_called_value_127 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_127 == NULL)) {
                            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_127 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 125;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_127);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_expression_value_177 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_177 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_177 == NULL)) {
                            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_177 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_127);

                            exception_lineno = 125;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_177);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_162 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[89]);
                Py_DECREF(tmp_expression_value_177);
                if (tmp_args_element_value_162 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_127);

                    exception_lineno = 125;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_178 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_178 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_178 == NULL)) {
                            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_178 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_127);
                            Py_DECREF(tmp_args_element_value_162);

                            exception_lineno = 125;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_178);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_163 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[89]);
                Py_DECREF(tmp_expression_value_178);
                if (tmp_args_element_value_163 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_127);
                    Py_DECREF(tmp_args_element_value_162);

                    exception_lineno = 125;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                tmp_expression_value_179 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[10]);

                if (tmp_expression_value_179 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_179 == NULL)) {
                            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_179 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_127);
                            Py_DECREF(tmp_args_element_value_162);
                            Py_DECREF(tmp_args_element_value_163);

                            exception_lineno = 125;
                            type_description_2 = "o";
                            goto list_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_179);
                    } else {
                        goto list_build_exception_8;
                    }
                }

                tmp_args_element_value_164 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[89]);
                Py_DECREF(tmp_expression_value_179);
                if (tmp_args_element_value_164 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_127);
                    Py_DECREF(tmp_args_element_value_162);
                    Py_DECREF(tmp_args_element_value_163);

                    exception_lineno = 125;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                frame_6b067da65c6d10a814d203fa6f6fe03f_9->m_frame.f_lineno = 125;
                {
                    PyObject *call_args[] = {tmp_args_element_value_162, tmp_args_element_value_163, tmp_args_element_value_164};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_127, call_args);
                }

                Py_DECREF(tmp_called_value_127);
                Py_DECREF(tmp_args_element_value_162);
                Py_DECREF(tmp_args_element_value_163);
                Py_DECREF(tmp_args_element_value_164);
                if (tmp_list_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 125;
                    type_description_2 = "o";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_8);
            }
            goto list_build_noexception_8;
            // Exception handling pass through code for list_build:
            list_build_exception_8:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_9;
            // Finished with no exception for list_build:
            list_build_noexception_8:;
            tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6b067da65c6d10a814d203fa6f6fe03f_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6b067da65c6d10a814d203fa6f6fe03f_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6b067da65c6d10a814d203fa6f6fe03f_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6b067da65c6d10a814d203fa6f6fe03f_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6b067da65c6d10a814d203fa6f6fe03f_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6b067da65c6d10a814d203fa6f6fe03f_9,
            type_description_2,
            outline_9_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6b067da65c6d10a814d203fa6f6fe03f_9 == cache_frame_6b067da65c6d10a814d203fa6f6fe03f_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6b067da65c6d10a814d203fa6f6fe03f_9);
            cache_frame_6b067da65c6d10a814d203fa6f6fe03f_9 = NULL;
        }

        assertFrameObject(frame_6b067da65c6d10a814d203fa6f6fe03f_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_32;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto try_except_handler_32;
            }
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto branch_yes_40;
            } else {
                goto branch_no_40;
            }
            assert(tmp_condition_result_60 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_40:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_32;
        }
        branch_no_40:;
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_called_value_128;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_128 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_40 = mod_consts[82];
            tmp_args_value_20 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_40 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_40);
            tmp_tuple_element_40 = locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 116;
            tmp_assign_source_94 = CALL_FUNCTION(tmp_called_value_128, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto try_except_handler_32;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_94;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_args_element_value_140 = outline_9_var___class__;
        Py_INCREF(tmp_args_element_value_140);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116);
        locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116 = NULL;
        goto try_return_handler_31;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116);
        locals_numba$core$typing$mathdecl$$$class__10_Math_gcd_116 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 116;
        goto try_except_handler_30;
        outline_result_10:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 115;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_118, tmp_args_element_value_140);
        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_args_element_value_140);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_93);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_tuple_element_41;
        tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_41 == NULL)) {
            tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        tmp_assign_source_95 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_95, 0, tmp_tuple_element_41);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_96 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = PyDict_New();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_97;
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_metaclass_value_11;
        bool tmp_condition_result_61;
        PyObject *tmp_key_value_31;
        PyObject *tmp_dict_arg_value_31;
        PyObject *tmp_dict_arg_value_32;
        PyObject *tmp_key_value_32;
        nuitka_bool tmp_condition_result_62;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        tmp_key_value_31 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_31 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_31, tmp_key_value_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_61 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_61 != false) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_32 = tmp_class_creation_11__class_decl_dict;
        tmp_key_value_32 = mod_consts[21];
        tmp_metaclass_value_11 = DICT_GET_ITEM0(tmp_dict_arg_value_32, tmp_key_value_32);
        if (tmp_metaclass_value_11 == NULL) {
            tmp_metaclass_value_11 = Py_None;
        }
        assert(!(tmp_metaclass_value_11 == NULL));
        Py_INCREF(tmp_metaclass_value_11);
        goto condexpr_end_21;
        condexpr_false_21:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        tmp_condition_result_62 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_22;
        } else {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_180 = tmp_class_creation_11__bases;
        tmp_subscript_value_11 = mod_consts[7];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_180, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_22:;
        condexpr_end_21:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_98 = SELECT_METACLASS(tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_98;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_key_value_33;
        PyObject *tmp_dict_arg_value_33;
        tmp_key_value_33 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_value_33 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_33, tmp_key_value_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_63 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 130;

        goto try_except_handler_33;
    }
    branch_no_41:;
    {
        nuitka_bool tmp_condition_result_64;
        PyObject *tmp_expression_value_181;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_181 = tmp_class_creation_11__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_181, mod_consts[22]);
        tmp_condition_result_64 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_129;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_182 = tmp_class_creation_11__metaclass;
        tmp_called_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[22]);
        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        tmp_tuple_element_42 = mod_consts[90];
        tmp_args_value_21 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_42);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_42 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_42);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 130;
        tmp_assign_source_99 = CALL_FUNCTION(tmp_called_value_129, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_129);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_99;
    }
    {
        bool tmp_condition_result_65;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_183;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_183 = tmp_class_creation_11__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_183, mod_consts[24]);
        tmp_operand_value_11 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        tmp_condition_result_65 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_65 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_11;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_getattr_target_11;
        PyObject *tmp_getattr_attr_11;
        PyObject *tmp_getattr_default_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_left_value_11 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_getattr_target_11 = tmp_class_creation_11__metaclass;
        tmp_getattr_attr_11 = mod_consts[26];
        tmp_getattr_default_11 = mod_consts[27];
        tmp_tuple_element_43 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
        if (tmp_tuple_element_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        tmp_right_value_11 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_184;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_right_value_11, 0, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_184 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_184 == NULL));
            tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[26]);
            Py_DECREF(tmp_expression_value_184);
            if (tmp_tuple_element_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_right_value_11, 1, tmp_tuple_element_43);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_right_value_11);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_11, tmp_right_value_11);
        Py_DECREF(tmp_right_value_11);
        if (tmp_raise_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_33;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 130;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_33;
    }
    branch_no_43:;
    goto branch_end_42;
    branch_no_42:;
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = PyDict_New();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_100;
    }
    branch_end_42:;
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_130;
        PyObject *tmp_called_value_131;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_args_element_value_166;
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_33;
        }
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_33;
        }
        tmp_args_element_value_165 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[91]);
        if (tmp_args_element_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_33;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 129;
        tmp_called_value_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_131, tmp_args_element_value_165);
        Py_DECREF(tmp_args_element_value_165);
        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_33;
        }
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_35;
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_35;
        }
        if (isFrameUnusable(cache_frame_356c0966168f5129932e99e45583c10f_10)) {
            Py_XDECREF(cache_frame_356c0966168f5129932e99e45583c10f_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_356c0966168f5129932e99e45583c10f_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_356c0966168f5129932e99e45583c10f_10 = MAKE_FUNCTION_FRAME(codeobj_356c0966168f5129932e99e45583c10f, module_numba$core$typing$mathdecl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_356c0966168f5129932e99e45583c10f_10->m_type_description == NULL);
        frame_356c0966168f5129932e99e45583c10f_10 = cache_frame_356c0966168f5129932e99e45583c10f_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_356c0966168f5129932e99e45583c10f_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_356c0966168f5129932e99e45583c10f_10) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_9;
            PyObject *tmp_called_value_132;
            PyObject *tmp_args_element_value_167;
            PyObject *tmp_called_value_133;
            PyObject *tmp_expression_value_186;
            PyObject *tmp_args_element_value_168;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_expression_value_187;
            PyObject *tmp_args_element_value_169;
            PyObject *tmp_expression_value_189;
            tmp_called_value_132 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[16]);

            if (tmp_called_value_132 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_called_value_132 == NULL)) {
                        tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_called_value_132 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 132;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_value_132);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_expression_value_186 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[10]);

            if (tmp_expression_value_186 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_186 == NULL)) {
                        tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_186 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_132);

                        exception_lineno = 132;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_186);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_called_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[92]);
            Py_DECREF(tmp_expression_value_186);
            if (tmp_called_value_133 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_132);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_expression_value_187 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[10]);

            if (tmp_expression_value_187 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_187 == NULL)) {
                        tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_187 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_132);
                        Py_DECREF(tmp_called_value_133);

                        exception_lineno = 132;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_187);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[56]);
            Py_DECREF(tmp_expression_value_187);
            if (tmp_tuple_element_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_132);
                Py_DECREF(tmp_called_value_133);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_args_element_value_168 = PyTuple_New(2);
            {
                PyObject *tmp_expression_value_188;
                PyTuple_SET_ITEM(tmp_args_element_value_168, 0, tmp_tuple_element_44);
                tmp_expression_value_188 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[10]);

                if (tmp_expression_value_188 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_188 == NULL)) {
                            tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_188 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 132;
                            type_description_2 = "o";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_188);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[93]);
                Py_DECREF(tmp_expression_value_188);
                if (tmp_tuple_element_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 132;
                    type_description_2 = "o";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_168, 1, tmp_tuple_element_44);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_168);
            goto frame_exception_exit_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            frame_356c0966168f5129932e99e45583c10f_10->m_frame.f_lineno = 132;
            tmp_args_element_value_167 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_133, tmp_args_element_value_168);
            Py_DECREF(tmp_called_value_133);
            Py_DECREF(tmp_args_element_value_168);
            if (tmp_args_element_value_167 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_132);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_expression_value_189 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[10]);

            if (tmp_expression_value_189 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_189 == NULL)) {
                        tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_189 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_132);
                        Py_DECREF(tmp_args_element_value_167);

                        exception_lineno = 132;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_expression_value_189);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_args_element_value_169 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[56]);
            Py_DECREF(tmp_expression_value_189);
            if (tmp_args_element_value_169 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_132);
                Py_DECREF(tmp_args_element_value_167);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            frame_356c0966168f5129932e99e45583c10f_10->m_frame.f_lineno = 132;
            {
                PyObject *call_args[] = {tmp_args_element_value_167, tmp_args_element_value_169};
                tmp_list_element_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_132, call_args);
            }

            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_args_element_value_167);
            Py_DECREF(tmp_args_element_value_169);
            if (tmp_list_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_dictset_value = PyList_New(2);
            {
                PyObject *tmp_called_value_134;
                PyObject *tmp_args_element_value_170;
                PyObject *tmp_called_value_135;
                PyObject *tmp_expression_value_190;
                PyObject *tmp_args_element_value_171;
                PyObject *tmp_tuple_element_45;
                PyObject *tmp_expression_value_191;
                PyObject *tmp_args_element_value_172;
                PyObject *tmp_expression_value_193;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_9);
                tmp_called_value_134 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[16]);

                if (tmp_called_value_134 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_134 == NULL)) {
                            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_134 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 133;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_134);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_expression_value_190 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[10]);

                if (tmp_expression_value_190 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_190 == NULL)) {
                            tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_190 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_134);

                            exception_lineno = 133;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_190);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_called_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[92]);
                Py_DECREF(tmp_expression_value_190);
                if (tmp_called_value_135 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_134);

                    exception_lineno = 133;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_191 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[10]);

                if (tmp_expression_value_191 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_191 == NULL)) {
                            tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_191 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_134);
                            Py_DECREF(tmp_called_value_135);

                            exception_lineno = 133;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_191);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[59]);
                Py_DECREF(tmp_expression_value_191);
                if (tmp_tuple_element_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_134);
                    Py_DECREF(tmp_called_value_135);

                    exception_lineno = 133;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_args_element_value_171 = PyTuple_New(2);
                {
                    PyObject *tmp_expression_value_192;
                    PyTuple_SET_ITEM(tmp_args_element_value_171, 0, tmp_tuple_element_45);
                    tmp_expression_value_192 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[10]);

                    if (tmp_expression_value_192 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                            if (unlikely(tmp_expression_value_192 == NULL)) {
                                tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                            }

                            if (tmp_expression_value_192 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 133;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_expression_value_192);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[93]);
                    Py_DECREF(tmp_expression_value_192);
                    if (tmp_tuple_element_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 133;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_171, 1, tmp_tuple_element_45);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_called_value_134);
                Py_DECREF(tmp_called_value_135);
                Py_DECREF(tmp_args_element_value_171);
                goto list_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                frame_356c0966168f5129932e99e45583c10f_10->m_frame.f_lineno = 133;
                tmp_args_element_value_170 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_135, tmp_args_element_value_171);
                Py_DECREF(tmp_called_value_135);
                Py_DECREF(tmp_args_element_value_171);
                if (tmp_args_element_value_170 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_134);

                    exception_lineno = 133;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                tmp_expression_value_193 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[10]);

                if (tmp_expression_value_193 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_193 == NULL)) {
                            tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_193 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_134);
                            Py_DECREF(tmp_args_element_value_170);

                            exception_lineno = 133;
                            type_description_2 = "o";
                            goto list_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_193);
                    } else {
                        goto list_build_exception_9;
                    }
                }

                tmp_args_element_value_172 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[59]);
                Py_DECREF(tmp_expression_value_193);
                if (tmp_args_element_value_172 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_134);
                    Py_DECREF(tmp_args_element_value_170);

                    exception_lineno = 133;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                frame_356c0966168f5129932e99e45583c10f_10->m_frame.f_lineno = 133;
                {
                    PyObject *call_args[] = {tmp_args_element_value_170, tmp_args_element_value_172};
                    tmp_list_element_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_134, call_args);
                }

                Py_DECREF(tmp_called_value_134);
                Py_DECREF(tmp_args_element_value_170);
                Py_DECREF(tmp_args_element_value_172);
                if (tmp_list_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 133;
                    type_description_2 = "o";
                    goto list_build_exception_9;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_9);
            }
            goto list_build_noexception_9;
            // Exception handling pass through code for list_build:
            list_build_exception_9:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_10;
            // Finished with no exception for list_build:
            list_build_noexception_9:;
            tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_356c0966168f5129932e99e45583c10f_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_356c0966168f5129932e99e45583c10f_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_356c0966168f5129932e99e45583c10f_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_356c0966168f5129932e99e45583c10f_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_356c0966168f5129932e99e45583c10f_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_356c0966168f5129932e99e45583c10f_10,
            type_description_2,
            outline_10_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_356c0966168f5129932e99e45583c10f_10 == cache_frame_356c0966168f5129932e99e45583c10f_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_356c0966168f5129932e99e45583c10f_10);
            cache_frame_356c0966168f5129932e99e45583c10f_10 = NULL;
        }

        assertFrameObject(frame_356c0966168f5129932e99e45583c10f_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_35;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_66;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_66 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_66 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto try_except_handler_35;
            }
            if (tmp_condition_result_66 == NUITKA_BOOL_TRUE) {
                goto branch_yes_44;
            } else {
                goto branch_no_44;
            }
            assert(tmp_condition_result_66 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_44:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto try_except_handler_35;
        }
        branch_no_44:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_called_value_136;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_136 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_46 = mod_consts[90];
            tmp_args_value_22 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_46 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 130;
            tmp_assign_source_102 = CALL_FUNCTION(tmp_called_value_136, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto try_except_handler_35;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_102;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_args_element_value_166 = outline_10_var___class__;
        Py_INCREF(tmp_args_element_value_166);
        goto try_return_handler_35;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130);
        locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130 = NULL;
        goto try_return_handler_34;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130);
        locals_numba$core$typing$mathdecl$$$class__11_Math_frexp_130 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto try_except_handler_34;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 130;
        goto try_except_handler_33;
        outline_result_11:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 129;
        tmp_assign_source_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_130, tmp_args_element_value_166);
        Py_DECREF(tmp_called_value_130);
        Py_DECREF(tmp_args_element_value_166);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_33;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_101);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_tuple_element_47;
        tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_47 == NULL)) {
            tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        tmp_assign_source_103 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_103, 0, tmp_tuple_element_47);
        assert(tmp_class_creation_12__bases_orig == NULL);
        tmp_class_creation_12__bases_orig = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_dircall_arg1_12;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dircall_arg1_12 = tmp_class_creation_12__bases_orig;
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_104 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = PyDict_New();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_metaclass_value_12;
        bool tmp_condition_result_67;
        PyObject *tmp_key_value_34;
        PyObject *tmp_dict_arg_value_34;
        PyObject *tmp_dict_arg_value_35;
        PyObject *tmp_key_value_35;
        nuitka_bool tmp_condition_result_68;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_12;
        tmp_key_value_34 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_34 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_34, tmp_key_value_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_67 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_35 = tmp_class_creation_12__class_decl_dict;
        tmp_key_value_35 = mod_consts[21];
        tmp_metaclass_value_12 = DICT_GET_ITEM0(tmp_dict_arg_value_35, tmp_key_value_35);
        if (tmp_metaclass_value_12 == NULL) {
            tmp_metaclass_value_12 = Py_None;
        }
        assert(!(tmp_metaclass_value_12 == NULL));
        Py_INCREF(tmp_metaclass_value_12);
        goto condexpr_end_23;
        condexpr_false_23:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        tmp_condition_result_68 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_194 = tmp_class_creation_12__bases;
        tmp_subscript_value_12 = mod_consts[7];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_194, tmp_subscript_value_12, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_24:;
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_12 = tmp_class_creation_12__bases;
        tmp_assign_source_106 = SELECT_METACLASS(tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_106;
    }
    {
        bool tmp_condition_result_69;
        PyObject *tmp_key_value_36;
        PyObject *tmp_dict_arg_value_36;
        tmp_key_value_36 = mod_consts[21];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_value_36 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_36, tmp_key_value_36);
        assert(!(tmp_res == -1));
        tmp_condition_result_69 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_69 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;
    tmp_dictdel_key = mod_consts[21];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 137;

        goto try_except_handler_36;
    }
    branch_no_45:;
    {
        nuitka_bool tmp_condition_result_70;
        PyObject *tmp_expression_value_195;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_195 = tmp_class_creation_12__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_195, mod_consts[22]);
        tmp_condition_result_70 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_kwargs_value_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_196 = tmp_class_creation_12__metaclass;
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[22]);
        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        tmp_tuple_element_48 = mod_consts[94];
        tmp_args_value_23 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_48 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 137;
        tmp_assign_source_107 = CALL_FUNCTION(tmp_called_value_137, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_137);
        Py_DECREF(tmp_args_value_23);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_107;
    }
    {
        bool tmp_condition_result_71;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_197;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_197 = tmp_class_creation_12__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_197, mod_consts[24]);
        tmp_operand_value_12 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        tmp_condition_result_71 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_71 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_12;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_getattr_target_12;
        PyObject *tmp_getattr_attr_12;
        PyObject *tmp_getattr_default_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_left_value_12 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_getattr_target_12 = tmp_class_creation_12__metaclass;
        tmp_getattr_attr_12 = mod_consts[26];
        tmp_getattr_default_12 = mod_consts[27];
        tmp_tuple_element_49 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12);
        if (tmp_tuple_element_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        tmp_right_value_12 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_198;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_right_value_12, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_24 = tmp_class_creation_12__prepared;
            tmp_expression_value_198 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_198 == NULL));
            tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[26]);
            Py_DECREF(tmp_expression_value_198);
            if (tmp_tuple_element_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_right_value_12, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_right_value_12);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_12, tmp_right_value_12);
        Py_DECREF(tmp_right_value_12);
        if (tmp_raise_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_36;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 137;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_36;
    }
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = PyDict_New();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_108;
    }
    branch_end_46:;
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_138;
        PyObject *tmp_called_value_139;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_args_element_value_174;
        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_139 == NULL)) {
            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_36;
        }
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_36;
        }
        tmp_args_element_value_173 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[95]);
        if (tmp_args_element_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_36;
        }
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 136;
        tmp_called_value_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_139, tmp_args_element_value_173);
        Py_DECREF(tmp_args_element_value_173);
        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_36;
        }
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_38;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[55], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_38;
        }
        if (isFrameUnusable(cache_frame_b9dc39e8ca354af918f9fecebc663da3_11)) {
            Py_XDECREF(cache_frame_b9dc39e8ca354af918f9fecebc663da3_11);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b9dc39e8ca354af918f9fecebc663da3_11 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b9dc39e8ca354af918f9fecebc663da3_11 = MAKE_FUNCTION_FRAME(codeobj_b9dc39e8ca354af918f9fecebc663da3, module_numba$core$typing$mathdecl, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b9dc39e8ca354af918f9fecebc663da3_11->m_type_description == NULL);
        frame_b9dc39e8ca354af918f9fecebc663da3_11 = cache_frame_b9dc39e8ca354af918f9fecebc663da3_11;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_b9dc39e8ca354af918f9fecebc663da3_11);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b9dc39e8ca354af918f9fecebc663da3_11) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_list_element_10;
            PyObject *tmp_called_value_140;
            PyObject *tmp_args_element_value_175;
            PyObject *tmp_expression_value_200;
            PyObject *tmp_args_element_value_176;
            PyObject *tmp_expression_value_201;
            PyObject *tmp_args_element_value_177;
            PyObject *tmp_expression_value_202;
            tmp_called_value_140 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[16]);

            if (tmp_called_value_140 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_called_value_140 == NULL)) {
                        tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_called_value_140 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 139;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_value_140);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_expression_value_200 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[10]);

            if (tmp_expression_value_200 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_200 == NULL)) {
                        tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_200 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_140);

                        exception_lineno = 139;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_expression_value_200);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_args_element_value_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[56]);
            Py_DECREF(tmp_expression_value_200);
            if (tmp_args_element_value_175 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_140);

                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_expression_value_201 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[10]);

            if (tmp_expression_value_201 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_201 == NULL)) {
                        tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_201 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_140);
                        Py_DECREF(tmp_args_element_value_175);

                        exception_lineno = 139;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_expression_value_201);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_args_element_value_176 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[56]);
            Py_DECREF(tmp_expression_value_201);
            if (tmp_args_element_value_176 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_140);
                Py_DECREF(tmp_args_element_value_175);

                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_expression_value_202 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[10]);

            if (tmp_expression_value_202 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_202 == NULL)) {
                        tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_202 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_140);
                        Py_DECREF(tmp_args_element_value_175);
                        Py_DECREF(tmp_args_element_value_176);

                        exception_lineno = 139;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_expression_value_202);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_args_element_value_177 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[93]);
            Py_DECREF(tmp_expression_value_202);
            if (tmp_args_element_value_177 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_140);
                Py_DECREF(tmp_args_element_value_175);
                Py_DECREF(tmp_args_element_value_176);

                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            frame_b9dc39e8ca354af918f9fecebc663da3_11->m_frame.f_lineno = 139;
            {
                PyObject *call_args[] = {tmp_args_element_value_175, tmp_args_element_value_176, tmp_args_element_value_177};
                tmp_list_element_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_140, call_args);
            }

            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_args_element_value_175);
            Py_DECREF(tmp_args_element_value_176);
            Py_DECREF(tmp_args_element_value_177);
            if (tmp_list_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_dictset_value = PyList_New(2);
            {
                PyObject *tmp_called_value_141;
                PyObject *tmp_args_element_value_178;
                PyObject *tmp_expression_value_203;
                PyObject *tmp_args_element_value_179;
                PyObject *tmp_expression_value_204;
                PyObject *tmp_args_element_value_180;
                PyObject *tmp_expression_value_205;
                PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_10);
                tmp_called_value_141 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[16]);

                if (tmp_called_value_141 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[16]);

                        if (unlikely(tmp_called_value_141 == NULL)) {
                            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                        }

                        if (tmp_called_value_141 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto list_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_141);
                    } else {
                        goto list_build_exception_10;
                    }
                }

                tmp_expression_value_203 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[10]);

                if (tmp_expression_value_203 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_203 == NULL)) {
                            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_203 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_141);

                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto list_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_203);
                    } else {
                        goto list_build_exception_10;
                    }
                }

                tmp_args_element_value_178 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[59]);
                Py_DECREF(tmp_expression_value_203);
                if (tmp_args_element_value_178 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_141);

                    exception_lineno = 140;
                    type_description_2 = "o";
                    goto list_build_exception_10;
                }
                tmp_expression_value_204 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[10]);

                if (tmp_expression_value_204 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_204 == NULL)) {
                            tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_204 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_141);
                            Py_DECREF(tmp_args_element_value_178);

                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto list_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_204);
                    } else {
                        goto list_build_exception_10;
                    }
                }

                tmp_args_element_value_179 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[59]);
                Py_DECREF(tmp_expression_value_204);
                if (tmp_args_element_value_179 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_141);
                    Py_DECREF(tmp_args_element_value_178);

                    exception_lineno = 140;
                    type_description_2 = "o";
                    goto list_build_exception_10;
                }
                tmp_expression_value_205 = PyObject_GetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[10]);

                if (tmp_expression_value_205 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_205 == NULL)) {
                            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_205 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_141);
                            Py_DECREF(tmp_args_element_value_178);
                            Py_DECREF(tmp_args_element_value_179);

                            exception_lineno = 140;
                            type_description_2 = "o";
                            goto list_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_205);
                    } else {
                        goto list_build_exception_10;
                    }
                }

                tmp_args_element_value_180 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[93]);
                Py_DECREF(tmp_expression_value_205);
                if (tmp_args_element_value_180 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_141);
                    Py_DECREF(tmp_args_element_value_178);
                    Py_DECREF(tmp_args_element_value_179);

                    exception_lineno = 140;
                    type_description_2 = "o";
                    goto list_build_exception_10;
                }
                frame_b9dc39e8ca354af918f9fecebc663da3_11->m_frame.f_lineno = 140;
                {
                    PyObject *call_args[] = {tmp_args_element_value_178, tmp_args_element_value_179, tmp_args_element_value_180};
                    tmp_list_element_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_141, call_args);
                }

                Py_DECREF(tmp_called_value_141);
                Py_DECREF(tmp_args_element_value_178);
                Py_DECREF(tmp_args_element_value_179);
                Py_DECREF(tmp_args_element_value_180);
                if (tmp_list_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 140;
                    type_description_2 = "o";
                    goto list_build_exception_10;
                }
                PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_10);
            }
            goto list_build_noexception_10;
            // Exception handling pass through code for list_build:
            list_build_exception_10:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_11;
            // Finished with no exception for list_build:
            list_build_noexception_10:;
            tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b9dc39e8ca354af918f9fecebc663da3_11);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b9dc39e8ca354af918f9fecebc663da3_11);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b9dc39e8ca354af918f9fecebc663da3_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b9dc39e8ca354af918f9fecebc663da3_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b9dc39e8ca354af918f9fecebc663da3_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b9dc39e8ca354af918f9fecebc663da3_11,
            type_description_2,
            outline_11_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_b9dc39e8ca354af918f9fecebc663da3_11 == cache_frame_b9dc39e8ca354af918f9fecebc663da3_11) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b9dc39e8ca354af918f9fecebc663da3_11);
            cache_frame_b9dc39e8ca354af918f9fecebc663da3_11 = NULL;
        }

        assertFrameObject(frame_b9dc39e8ca354af918f9fecebc663da3_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;

        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_38;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_72;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_12 = tmp_class_creation_12__bases;
            CHECK_OBJECT(tmp_class_creation_12__bases_orig);
            tmp_cmp_expr_right_12 = tmp_class_creation_12__bases_orig;
            tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto try_except_handler_38;
            }
            if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
            assert(tmp_condition_result_72 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_48:;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dictset_value = tmp_class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_38;
        }
        branch_no_48:;
        {
            PyObject *tmp_assign_source_110;
            PyObject *tmp_called_value_142;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_142 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_50 = mod_consts[94];
            tmp_args_value_24 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_50 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_50);
            tmp_tuple_element_50 = locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
            frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 137;
            tmp_assign_source_110 = CALL_FUNCTION(tmp_called_value_142, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto try_except_handler_38;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_110;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_args_element_value_174 = outline_11_var___class__;
        Py_INCREF(tmp_args_element_value_174);
        goto try_return_handler_38;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137);
        locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137 = NULL;
        goto try_return_handler_37;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137);
        locals_numba$core$typing$mathdecl$$$class__12_Math_ldexp_137 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto try_except_handler_37;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 137;
        goto try_except_handler_36;
        outline_result_12:;
        frame_872a253c114ae100433f0ef54a9dfb12->m_frame.f_lineno = 136;
        tmp_assign_source_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_138, tmp_args_element_value_174);
        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_args_element_value_174);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_36;
        }
        UPDATE_STRING_DICT1(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_109);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_872a253c114ae100433f0ef54a9dfb12);
#endif
    popFrameStack();

    assertFrameObject(frame_872a253c114ae100433f0ef54a9dfb12);

    goto frame_no_exception_11;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_872a253c114ae100433f0ef54a9dfb12);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_872a253c114ae100433f0ef54a9dfb12, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_872a253c114ae100433f0ef54a9dfb12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_872a253c114ae100433f0ef54a9dfb12, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_11:;
    CHECK_OBJECT(tmp_class_creation_12__bases_orig);
    Py_DECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numba.core.typing.mathdecl", false);

    Py_INCREF(module_numba$core$typing$mathdecl);
    return module_numba$core$typing$mathdecl;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numba$core$typing$mathdecl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("numba$core$typing$mathdecl", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
