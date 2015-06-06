
#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x302
#error This file was generated by a newer version of Bond compiler
#error and is incompatible with your version Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x303
#error This file was generated by an older version of Bond compiler
#error and is incompatible with your version Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>
#include <bond/core/nullable.h>


namespace test
{
    struct bar;

    
    struct foo
    {
        std::string a;
        int16_t b;
        int16_t c;
        std::map<std::string, bool> m;
        std::list<bond::nullable< ::test::bar> > n;
        std::list<std::set<float> > l;
        
        foo()
          : a("re"),
            b(10),
            c()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        foo(const foo& other) = default;
#endif
        
#ifndef BOND_NO_CXX11_RVALUE_REFERENCES
        foo(foo&& other)
          : a(std::move(other.a)),
            b(std::move(other.b)),
            c(std::move(other.c)),
            m(std::move(other.m)),
            n(std::move(other.n)),
            l(std::move(other.l))
        {
        }
#endif
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        foo& operator=(const foo& other) = default;
#endif

        bool operator==(const foo& other) const
        {
            return true
                && (a == other.a)
                && (b == other.b)
                && (c == other.c)
                && (m == other.m)
                && (n == other.n)
                && (l == other.l);
        }

        bool operator!=(const foo& other) const
        {
            return !(*this == other);
        }

        void swap(foo& other)
        {
            using std::swap;
            swap(a, other.a);
            swap(b, other.b);
            swap(c, other.c);
            swap(m, other.m);
            swap(n, other.n);
            swap(l, other.l);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(foo& left, foo& right)
    {
        left.swap(right);
    }
} // namespace test
