#ifndef BDS_SYMBOLS_PROFILE_H
#define BDS_SYMBOLS_PROFILE_H

namespace Core {
    class Profiler {

        class CPUProfileToken {
        public:
            CPUProfileToken(unsigned long, char const *, char const *, unsigned int);

            CPUProfileToken();

            bool isValid();
        };

        class CounterToken {
        public:
            CounterToken(unsigned long);

            CounterToken();
        };

        class ProfileMultiSectionCPU {
            ProfileMultiSectionCPU(CPUProfileToken);

            ProfileMultiSectionCPU();

            ~ProfileMultiSectionCPU();

            void begin();

            void end();

            void suspend();

            class ProfileSectionSuspend {
                ProfileSectionSuspend(ProfileMultiSectionCPU &);

                ~ProfileSectionSuspend();
            };
        };

        class ProfileSectionCPU {
            ProfileSectionCPU(CPUProfileToken const &);

            ~ProfileSectionCPU();
        };

        class ProfileThread {
            ProfileThread(char const *);

            ~ProfileThread();
        };

//        void counterAdd(CounterToken, long);
//        void counterAdd(char const*, long);
//        void counterSet(CounterToken, long);
//        void counterSet(char const*, long);
//        void dumpFile(char const*, Core::Profile::FileExtension)
//        void enterCPUProfile(CPUProfileToken const&);
//        void findCPUProfileToken(char const*, char const*);
//        void generateCPUProfileToken(char const*, char const*, unsigned int);
    };
}


#endif //BDS_SYMBOLS_PROFILE_H