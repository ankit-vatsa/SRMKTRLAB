def unify(var, x, substitution):
    if var in substitution:
        return unify(substitution[var], x, substitution)
    elif x in substitution:
        return unify(var, substitution[x], substitution)
    elif isinstance(var, str) and var.islower():
        substitution[var] = x
        return substitution
    elif isinstance(x, str) and x.islower():
        substitution[x] = var
        return substitution
    elif isinstance(var, tuple) and isinstance(x, tuple) and len(var) == len(x):
        for v, y in zip(var, x):
            substitution = unify(v, y, substitution)
        return substitution
    else:
        return None

# Example usage
substitution = {}
print(unify('x', 'y', substitution))  # {'x': 'y'}
print(unify('x', 'a', substitution))  # {'x': 'a'}
print(unify(('x', 'y'), ('a', 'b'), substitution))  # {'x': 'a', 'y': 'b'}
print(unify(('x', 'y'), ('a', 'b', 'c'), substitution))  # None
