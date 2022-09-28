#include <vector>
#include <iostream>

// Usage:
//  1) Include this file.
//  2) Use: LU_TEST(identifier) to declare a test case.
//  3) Use: LU_ASSERT(whatever-bool-expression) in your test case.
//  4) Use: LU_ASSERT_EQUAL(a,b) in your test case.
//  5) Compile with the target code; run resulting program.

// No secrets here, but also not necessarily instructive to read futher. Good luck!

#define LU_TEST(x) void x(); static lu::Test test_##x(#x,&x); void x()
#define LU_ASSERT(a) lu::Test::assertion(a,#a,__FILE__,__LINE__)
#define LU_ASSERT_EQUAL(a,b) lu::Test::assertEqual(a,b,__FILE__,__LINE__)

namespace lu {
    struct Test {
        static std::vector<Test *> tests;
        static int asserts;
        Test(const char *n,void (*t)()) : name(n), test(t) { tests.push_back(this); }
        const char *name;
        void (*test)();

        static void run(int argc,const char *argv[]) 
        {
            bool verbose = false;
            bool help = false;
            for (int i=1; i<argc; i++) {
                if (std::string(argv[i]) == "-v")
                    verbose = true;
                else if (std::string(argv[i]) == "-h")
                    help = true;
                else
                    help = true;
            }
            if (help) {
                std::cout << "usage: " << argv[0] << " [-v|-h]" << std::endl;
                exit(0);
            }

            if (verbose) {
                std::cout << "Running " << tests.size() << " tests." << std::endl;
                for (auto t:tests) {
                    std::cout << "  " << t->name << ": ";
                    t->test();
                    std::cout << "passed" << std::endl;
                }
                std::cout << "Passed all " << tests.size() << " tests! (" << asserts << " assertions)" << std::endl;
            }
            else {
                for (auto t:tests)
                    t->test();
            }
        }

        static void assertion(bool a,const char *s,const char *file,int line)
        {
            if (!a) {
                std::cout << "failed, " << s << " is false at " << file << ":" << line << std::endl;
                exit(1);
            }
            asserts++;
        }

        template <typename T> static void assertEqual(T a,T b,const char *file,int line)
        {
            if (a != b) {
                std::cout << "failed, " << a << " does not equal " << b << " at " << file << ":" << line << std::endl;
                exit(1);
            }
            asserts++;
        }
    };
    std::vector<Test *> Test::tests;
    int Test::asserts = 0;
};

int main(int argc,const char *argv[])
{
    lu::Test::run(argc,argv);
}
