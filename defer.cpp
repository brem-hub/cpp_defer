template <typename F>
struct defer_struct{
    F* function;
    
    defer_struct(F& func)
    : function(&func) {
    }

    ~defer_struct(){
        function();
    }
};

#ifndef defer
    #define defer(function) defer_struct<decltype(function)> defer_var(function);
#endif
