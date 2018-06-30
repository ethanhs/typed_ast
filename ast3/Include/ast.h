#ifndef Ta3_AST_H
#define Ta3_AST_H
#ifdef __cplusplus
extern "C" {
#endif

PyAPI_FUNC(int) Ta3AST_Validate(mod_ty);
PyAPI_FUNC(mod_ty) Ta3AST_FromNode(
    const node *n,
    PyCompilerFlags *flags,
    const char *filename,       /* decoded from the filesystem encoding */
    PyArena *arena);
PyAPI_FUNC(mod_ty) Ta3AST_FromNodeObject(
    const node *n,
    PyCompilerFlags *flags,
    PyObject *filename,
    PyArena *arena);

#ifndef Py_LIMITED_API

/* _Ta3AST_ExprAsUnicode is defined in ast_unparse.c */
PyAPI_FUNC(PyObject *) _Ta3AST_ExprAsUnicode(expr_ty);

#endif /* !Py_LIMITED_API */

#ifdef __cplusplus
}
#endif
#endif /* !Ta3_AST_H */
