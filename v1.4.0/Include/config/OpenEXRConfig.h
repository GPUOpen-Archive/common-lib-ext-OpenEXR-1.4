/* config/OpenEXRConfig.h.  Generated from OpenEXRConfig.h.in by configure.  */
//
// Define and set to 1 if the target system has POSIX thread support
// and you want OpenEXR to use it for multithreaded file I/O.
//

#define HAVE_PTHREAD 1

//
// Define and set to 1 if the target system supports POSIX semaphores
// and you want OpenEXR to use them; otherwise, OpenEXR will use its
// own semaphore implementation.
//

#define HAVE_POSIX_SEMAPHORES 1

//
// Define and set to 1 if the target system is a Darwin-based system
// (e.g., OS X).
//

/* #undef HAVE_DARWIN */

//
// Define and set to 1 if the target system supports a proc filesystem
// compatible with the Linux kernel's proc filesystem.  Note that this
// is only used by a program in the IlmImfTest test suite, it's not
// used by any OpenEXR library or application code.
//

#define HAVE_LINUX_PROCFS 1

//
// Define and set to 1 if the target system includes the NVIDIA Cg
// runtime.  The exrdisplay program will use a fragment shader to
// accelerate the display of OpenEXR images.
//

/* #undef HAVE_FRAGMENT_SHADERS */

//
// Define and set to 1 if the target system has a complete <iomanip>
// implementation, specifically if it supports the std::right
// formatter.
//

#define HAVE_COMPLETE_IOMANIP 1
