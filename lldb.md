## Docs

### to run:
```
lldb build/src/chess
```
this way we can map the source files correctly



### run program
```
r
```

### set breakpoint
```
br s {path_to_file}:{line}
or
br s -f {path_to_file} -l {line}
```

### conditional breakpoint
```
br s -f {path_to_file} -l {line} -c 'var == 0'
```

### inspect vals
```
fr v -a
```

### next
```
n
```