# Numbers

## Creating `numpy` arrays

- Creating an array from a list
- Properties: `shape`, `size`, `dtype`, `stride`
- `fromstring`, `fromregex`, `fromfunc`
- `arange`, `empty`, `zeros`, `ones`
- `eye`, `diag`
- `empty_like`, `zeros_like`, `ones_like`
- `linspace`, `logspace`
- `meshgrid`, `mgrid`
- Changing order and dtype with `astype`

## Creating random arrays

- `np.choice`
- Discrete distributions
- Continuous distributions
- `shuffle` and `permutation`

## Indexing, reshaping and concatenation

- Simple, boolean and fancy indexing
- `ix_`
- `reshape` and `transpose`
- A 1D-array is neither a row nor a column vector!
- `concat`, `stack`, `split``
- `r_`, `c_`

## Vectorization and universal functions (ufuncs)

- unary and binary `ufucns`
- `cumsum` and `cumprod`
- `vectorize`
- `dot`, `@`, `kron`

## Array reductions

- Global reductions
- Using `axis`

## Broadcasting rules

- Compatible shapes for broadcasting
- Using `newaxis` to enable broadcasting
- Examples: multiplication table, normalization and distance matrix

## Miscellaneous

- `set_printoptions`
- I/O with `save`, `load`, `savetxt`, `loadtxt`
