/* Auto-generated from STABS debug symbols */
/* FWOnline Zoneserver Structure Definitions */
#ifndef _FWONLINE_STRUCTS_H_
#define _FWONLINE_STRUCTS_H_

#include <stdint.h>
#pragma pack(push, 1)

/* Size: 4 bytes */
typedef struct __sched_param {
    uint32_t __sched_priority;  /* offset: 0 */
} _sched_param;

/* Size: 8 bytes */
typedef struct _pthread_fastlock {
    uint32_t __status;  /* offset: 0 */
    uint32_t __spinlock;  /* offset: 4 */
} pthread_fastlock;

/* Size: 36 bytes */
typedef struct __pthread_attr_s {
    uint32_t __detachstate;  /* offset: 0 */
    uint32_t __schedpolicy;  /* offset: 4 */
    uint32_t __schedparam;  /* offset: 8 */
    uint32_t __inheritsched;  /* offset: 12 */
    uint32_t __scope;  /* offset: 16 */
    uint32_t __guardsize;  /* offset: 20 */
    uint32_t __stackaddr_set;  /* offset: 24 */
    uint32_t __stacksize;  /* offset: 32 */
} _pthread_attr_s;

/* Size: 32 bytes */
typedef struct _pthread_rwlock_t {
    uint64_t __rw_lock;  /* offset: 0 */
    uint32_t __rw_readers;  /* offset: 8 */
    uint32_t __rw_writer;  /* offset: 12 */
    uint32_t __rw_read_waiting;  /* offset: 16 */
    uint32_t __rw_write_waiting;  /* offset: 20 */
    uint32_t __rw_kind;  /* offset: 24 */
    uint32_t __rw_pshared;  /* offset: 28 */
} pthread_rwlock_t;

/* Size: 20 bytes */
typedef struct __gconv_trans_data {
    uint32_t __trans_fct;  /* offset: 0 */
    uint32_t __trans_context_fct;  /* offset: 4 */
    uint32_t __trans_end_fct;  /* offset: 8 */
    uint32_t __data;  /* offset: 12 */
} _gconv_trans_data;

/* Size: 56 bytes */
typedef struct __gconv_step {
    uint32_t __counter;  /* offset: 8 */
    uint32_t __from_name;  /* offset: 12 */
    uint32_t __to_name;  /* offset: 16 */
    uint32_t __fct;  /* offset: 20 */
    uint32_t __init_fct;  /* offset: 24 */
    uint32_t __end_fct;  /* offset: 28 */
    uint32_t __min_needed_from;  /* offset: 32 */
    uint32_t __max_needed_from;  /* offset: 36 */
    uint32_t __min_needed_to;  /* offset: 40 */
    uint32_t __max_needed_to;  /* offset: 44 */
    uint32_t __stateful;  /* offset: 48 */
    uint32_t __data;  /* offset: 52 */
} _gconv_step;

/* Size: 36 bytes */
typedef struct __gconv_step_data {
    uint32_t __outbufend;  /* offset: 4 */
    uint32_t __flags;  /* offset: 8 */
    uint32_t __invocation_counter;  /* offset: 12 */
    uint32_t __internal_use;  /* offset: 16 */
    uint32_t __statep;  /* offset: 20 */
    uint64_t __state;  /* offset: 24 */
    uint32_t __trans;  /* offset: 32 */
} _gconv_step_data;

/* Size: 8 bytes */
typedef struct __gconv_info {
    uint32_t __nsteps;  /* offset: 0 */
    uint32_t __steps;  /* offset: 4 */
} _gconv_info;

/* Size: 12 bytes */
typedef struct _IO_marker {
    uint32_t _pos;  /* offset: 8 */
} IO_marker;

/* Size: 148 bytes */
typedef struct _IO_FILE {
    uint32_t _flags;  /* offset: 0 */
    uint32_t _IO_read_ptr;  /* offset: 4 */
    uint32_t _IO_read_end;  /* offset: 8 */
    uint32_t _IO_read_base;  /* offset: 12 */
    uint32_t _IO_write_base;  /* offset: 16 */
    uint32_t _IO_write_ptr;  /* offset: 20 */
    uint32_t _IO_write_end;  /* offset: 24 */
    uint32_t _IO_buf_base;  /* offset: 28 */
    uint32_t _IO_buf_end;  /* offset: 32 */
    uint32_t _IO_save_base;  /* offset: 36 */
    uint32_t _IO_backup_base;  /* offset: 40 */
    uint32_t _IO_save_end;  /* offset: 44 */
    uint32_t _markers;  /* offset: 48 */
    uint32_t _chain;  /* offset: 52 */
    uint32_t _fileno;  /* offset: 56 */
    uint32_t _blksize;  /* offset: 60 */
    uint32_t _old_offset;  /* offset: 64 */
    uint16_t _cur_column;  /* offset: 68 */
    uint8_t _vtable_offset;  /* offset: 70 */
    uint64_t _offset;  /* offset: 76 */
    uint32_t __pad1;  /* offset: 84 */
    uint32_t __pad2;  /* offset: 88 */
    uint32_t _mode;  /* offset: 92 */
} IO_FILE;

/* Size: 64 bytes */
typedef struct __locale_struct {
    uint32_t __ctype_toupper;  /* offset: 60 */
} _locale_struct;

/* Size: 8 bytes */
typedef struct _timespec {
    uint32_t tv_sec;  /* offset: 0 */
    uint32_t tv_nsec;  /* offset: 4 */
} timespec;

/* Size: 128 bytes */
typedef struct _siginfo {
    uint32_t s8_timer1;  /* offset: 0 */
    uint32_t s4si_addr;  /* offset: 0 */
    uint32_t s20si_pid;  /* offset: 0 */
    uint32_t s12si_pid;  /* offset: 0 */
    uint32_t si_signo;  /* offset: 0 */
    uint32_t s8si_band;  /* offset: 0 */
    uint32_t s8si_pid;  /* offset: 0 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_fd;  /* offset: 4 */
    uint32_t _timer2;  /* offset: 4 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_errno;  /* offset: 4 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_code;  /* offset: 8 */
    uint32_t si_status;  /* offset: 8 */
    uint32_t si_sigval;  /* offset: 8 */
    uint32_t si_utime;  /* offset: 12 */
    uint32_t si_stime;  /* offset: 16 */
} siginfo;

/* Size: 64 bytes */
typedef struct _sigevent {
    uint32_t sigev_value;  /* offset: 0 */
    uint32_t _attribute;  /* offset: 4 */
    uint32_t sigev_signo;  /* offset: 4 */
    uint32_t sigev_notify;  /* offset: 8 */
} sigevent;

/* Size: 140 bytes */
typedef struct _sigaction {
    uint32_t u4sa_handler;  /* offset: 0 */
    uint8_t sa_mask;  /* offset: 4 */
    uint32_t sa_flags;  /* offset: 132 */
} sigaction;

/* Size: 12 bytes */
typedef struct _sigvec {
    uint32_t sv_handler;  /* offset: 0 */
    uint32_t sv_mask;  /* offset: 4 */
    uint32_t sv_flags;  /* offset: 8 */
} sigvec;

/* Size: 10 bytes */
typedef struct _fpreg {
    uint16_t exponent;  /* offset: 8 */
} fpreg;

/* Size: 16 bytes */
typedef struct _fpxreg {
    uint64_t significand;  /* offset: 0 */
    uint16_t exponent;  /* offset: 8 */
} fpxreg;

/* Size: 624 bytes */
typedef struct _fpstate {
    uint32_t cw;  /* offset: 0 */
    uint32_t sw;  /* offset: 4 */
    uint32_t tag;  /* offset: 8 */
    uint32_t ipoff;  /* offset: 12 */
    uint32_t cssel;  /* offset: 16 */
    uint32_t dataoff;  /* offset: 20 */
    uint32_t datasel;  /* offset: 24 */
    int16_t status;  /* offset: 108 */
    uint16_t magic;  /* offset: 110 */
    uint32_t mxcsr;  /* offset: 136 */
    uint32_t reserved;  /* offset: 140 */
} fpstate;

/* Size: 88 bytes */
typedef struct _sigcontext {
    uint16_t gs;  /* offset: 0 */
    uint16_t __gsh;  /* offset: 2 */
    uint16_t fs;  /* offset: 4 */
    uint16_t __fsh;  /* offset: 6 */
    uint16_t es;  /* offset: 8 */
    uint16_t __esh;  /* offset: 10 */
    uint16_t ds;  /* offset: 12 */
    uint16_t __dsh;  /* offset: 14 */
    uint32_t edi;  /* offset: 16 */
    uint32_t esi;  /* offset: 20 */
    uint32_t ebp;  /* offset: 24 */
    uint32_t esp;  /* offset: 28 */
    uint32_t ebx;  /* offset: 32 */
    uint32_t edx;  /* offset: 36 */
    uint32_t ecx;  /* offset: 40 */
    uint32_t eax;  /* offset: 44 */
    uint32_t trapno;  /* offset: 48 */
    uint32_t err;  /* offset: 52 */
    uint32_t eip;  /* offset: 56 */
    uint16_t cs;  /* offset: 60 */
    uint16_t __csh;  /* offset: 62 */
    uint32_t eflags;  /* offset: 64 */
    uint32_t esp_at_signal;  /* offset: 68 */
    int16_t ss;  /* offset: 72 */
    uint16_t __ssh;  /* offset: 74 */
    uint32_t fpstate;  /* offset: 76 */
    uint32_t oldmask;  /* offset: 80 */
    uint32_t cr2;  /* offset: 84 */
} sigcontext;

/* Size: 8 bytes */
typedef struct _sigstack {
    uint32_t ss_sp;  /* offset: 0 */
    uint32_t ss_onstack;  /* offset: 4 */
} sigstack;

/* Size: 12 bytes */
typedef struct _sigaltstack {
    uint32_t ss_sp;  /* offset: 0 */
    uint32_t ss_flags;  /* offset: 4 */
    uint32_t ss_size;  /* offset: 8 */
} sigaltstack;

/* Size: 10 bytes */
typedef struct _libc_fpreg {
    uint64_t significand;  /* offset: 0 */
    uint16_t exponent;  /* offset: 8 */
} libc_fpreg;

/* Size: 112 bytes */
typedef struct _libc_fpstate {
    uint32_t cw;  /* offset: 0 */
    uint32_t sw;  /* offset: 4 */
    uint32_t tag;  /* offset: 8 */
    uint32_t ipoff;  /* offset: 12 */
    uint32_t cssel;  /* offset: 16 */
    uint32_t dataoff;  /* offset: 20 */
    uint32_t datasel;  /* offset: 24 */
    uint32_t status;  /* offset: 108 */
} libc_fpstate;

/* Size: 348 bytes */
typedef struct _ucontext {
    uint32_t uc_flags;  /* offset: 0 */
    uint8_t uc_stack;  /* offset: 8 */
    uint8_t uc_mcontext;  /* offset: 20 */
    uint8_t uc_sigmask;  /* offset: 108 */
    uint8_t __fpregs_mem;  /* offset: 236 */
} ucontext;

/* Size: 8 bytes */
typedef struct _timeval {
    uint32_t tv_sec;  /* offset: 0 */
    uint32_t tv_usec;  /* offset: 4 */
} timeval;

/* Size: 28 bytes */
typedef struct _random_data {
    uint32_t rptr;  /* offset: 4 */
    uint32_t state;  /* offset: 8 */
    uint32_t rand_type;  /* offset: 12 */
    uint32_t rand_deg;  /* offset: 16 */
    uint32_t rand_sep;  /* offset: 20 */
    uint32_t end_ptr;  /* offset: 24 */
} random_data;

/* Size: 24 bytes */
typedef struct _drand48_data {
    uint8_t __x;  /* offset: 0 */
    uint8_t __old_x;  /* offset: 6 */
    uint16_t __c;  /* offset: 12 */
    uint16_t __init;  /* offset: 14 */
    uint64_t __a;  /* offset: 16 */
} drand48_data;

/* Size: 4 bytes */
typedef struct _in_addr {
    uint32_t s_addr;  /* offset: 0 */
} in_addr;

/* Size: 16 bytes */
typedef struct _sockaddr {
    int16_t sa_family;  /* offset: 0 */
} sockaddr;

/* Size: 128 bytes */
typedef struct _sockaddr_storage {
    int16_t ss_family;  /* offset: 0 */
    uint32_t __ss_align;  /* offset: 4 */
} sockaddr_storage;

/* Size: 28 bytes */
typedef struct _msghdr {
    uint32_t msg_name;  /* offset: 0 */
    uint32_t msg_namelen;  /* offset: 4 */
    uint32_t msg_iovlen;  /* offset: 12 */
    uint32_t msg_control;  /* offset: 16 */
    uint32_t msg_controllen;  /* offset: 20 */
    uint32_t msg_flags;  /* offset: 24 */
} msghdr;

/* Size: 12 bytes */
typedef struct _cmsghdr {
    uint32_t cmsg_len;  /* offset: 0 */
    uint32_t cmsg_level;  /* offset: 4 */
    uint32_t cmsg_type;  /* offset: 8 */
} cmsghdr;

/* Size: 12 bytes */
typedef struct _ucred {
    void* pid;  /* offset: 0 */
    uint32_t uid;  /* offset: 4 */
    uint32_t gid;  /* offset: 8 */
} ucred;

/* Size: 8 bytes */
typedef struct _linger {
    uint32_t l_onoff;  /* offset: 0 */
    uint32_t l_linger;  /* offset: 4 */
} linger;

/* Size: 16 bytes */
typedef struct _sockaddr_in {
    int16_t sin_family;  /* offset: 0 */
    int16_t sin_port;  /* offset: 2 */
    uint32_t sin_addr;  /* offset: 4 */
} sockaddr_in;

/* Size: 28 bytes */
typedef struct _sockaddr_in6 {
    int16_t sin6_family;  /* offset: 0 */
    int16_t sin6_port;  /* offset: 2 */
    uint32_t sin6_flowinfo;  /* offset: 4 */
    uint8_t sin6_addr;  /* offset: 8 */
    uint32_t sin6_scope_id;  /* offset: 24 */
} sockaddr_in6;

/* Size: 20 bytes */
typedef struct _ipv6_mreq {
    uint8_t ipv6mr_multiaddr;  /* offset: 0 */
    uint32_t ipv6mr_interface;  /* offset: 16 */
} ipv6_mreq;

/* Size: 44 bytes */
typedef struct _ip_opts {
    uint32_t ip_dst;  /* offset: 0 */
} ip_opts;

/* Size: 8 bytes */
typedef struct _ip_mreq {
    uint32_t imr_multiaddr;  /* offset: 0 */
    uint32_t imr_interface;  /* offset: 4 */
} ip_mreq;

/* Size: 12 bytes */
typedef struct _ip_mreqn {
    uint32_t imr_multiaddr;  /* offset: 0 */
    uint32_t imr_address;  /* offset: 4 */
    uint32_t imr_ifindex;  /* offset: 8 */
} ip_mreqn;

/* Size: 12 bytes */
typedef struct _in_pktinfo {
    uint32_t ipi_ifindex;  /* offset: 0 */
    uint32_t ipi_spec_dst;  /* offset: 4 */
    uint32_t ipi_addr;  /* offset: 8 */
} in_pktinfo;

/* Size: 20 bytes */
typedef struct _in6_pktinfo {
    uint8_t ipi6_addr;  /* offset: 0 */
    uint32_t ipi6_ifindex;  /* offset: 16 */
} in6_pktinfo;

/* Size: 8 bytes */
typedef struct _timezone {
    uint32_t tz_minuteswest;  /* offset: 0 */
    uint32_t tz_dsttime;  /* offset: 4 */
} timezone;

/* Size: 16 bytes */
typedef struct _itimerval {
    uint64_t it_interval;  /* offset: 0 */
    uint64_t it_value;  /* offset: 8 */
} itimerval;

/* Size: 12 bytes */
typedef struct _timeb {
    uint32_t time;  /* offset: 0 */
    uint16_t millitm;  /* offset: 4 */
    uint16_t timezone;  /* offset: 6 */
    uint16_t dstflag;  /* offset: 8 */
} timeb;

/* Size: 8 bytes */
typedef struct _rlimit {
    uint32_t rlim_cur;  /* offset: 0 */
    uint32_t rlim_max;  /* offset: 4 */
} rlimit;

/* Size: 16 bytes */
typedef struct _rlimit64 {
    uint64_t rlim_cur;  /* offset: 0 */
    uint64_t rlim_max;  /* offset: 8 */
} rlimit64;

/* Size: 72 bytes */
typedef struct _rusage {
    uint64_t ru_utime;  /* offset: 0 */
    uint64_t ru_stime;  /* offset: 8 */
    uint32_t ru_maxrss;  /* offset: 16 */
    uint32_t ru_ixrss;  /* offset: 20 */
    uint32_t ru_idrss;  /* offset: 24 */
    uint32_t ru_isrss;  /* offset: 28 */
    uint32_t ru_minflt;  /* offset: 32 */
    uint32_t ru_majflt;  /* offset: 36 */
    uint32_t ru_nswap;  /* offset: 40 */
    uint32_t ru_inblock;  /* offset: 44 */
    uint32_t ru_oublock;  /* offset: 48 */
    uint32_t ru_msgsnd;  /* offset: 52 */
    uint32_t ru_msgrcv;  /* offset: 56 */
    uint32_t ru_nsignals;  /* offset: 60 */
    uint32_t ru_nvcsw;  /* offset: 64 */
    uint32_t ru_nivcsw;  /* offset: 68 */
} rusage;

/* Size: 8 bytes */
typedef struct _iovec {
    uint32_t iov_base;  /* offset: 0 */
    uint32_t iov_len;  /* offset: 4 */
} iovec;

/* Size: 16 bytes */
typedef struct _osockaddr {
    int16_t sa_family;  /* offset: 0 */
} osockaddr;

/* Size: 36 bytes */
typedef struct _ipc_perm {
    uint32_t __key;  /* offset: 0 */
    uint32_t uid;  /* offset: 4 */
    uint32_t gid;  /* offset: 8 */
    uint32_t cuid;  /* offset: 12 */
    uint32_t cgid;  /* offset: 16 */
    uint16_t mode;  /* offset: 20 */
    uint16_t __pad1;  /* offset: 22 */
    uint16_t __seq;  /* offset: 24 */
    uint16_t __pad2;  /* offset: 26 */
    uint32_t __unused1;  /* offset: 28 */
    uint32_t __unused2;  /* offset: 32 */
} ipc_perm;

/* Size: 64 bytes */
typedef struct _semid_ds {
    uint8_t sem_perm;  /* offset: 0 */
    uint32_t sem_otime;  /* offset: 36 */
    uint32_t __unused1;  /* offset: 40 */
    uint32_t sem_ctime;  /* offset: 44 */
    uint32_t __unused2;  /* offset: 48 */
    uint32_t sem_nsems;  /* offset: 52 */
    uint32_t __unused3;  /* offset: 56 */
    uint32_t __unused4;  /* offset: 60 */
} semid_ds;

/* Size: 40 bytes */
typedef struct _seminfo {
    uint32_t semmap;  /* offset: 0 */
    uint32_t semmni;  /* offset: 4 */
    uint32_t semmns;  /* offset: 8 */
    uint32_t semmnu;  /* offset: 12 */
    uint32_t semmsl;  /* offset: 16 */
    uint32_t semopm;  /* offset: 20 */
    uint32_t semume;  /* offset: 24 */
    uint32_t semusz;  /* offset: 28 */
    uint32_t semvmx;  /* offset: 32 */
    uint32_t semaem;  /* offset: 36 */
} seminfo;

/* Size: 6 bytes */
typedef struct _sembuf {
    int16_t sem_num;  /* offset: 0 */
    int16_t sem_op;  /* offset: 2 */
    int16_t sem_flg;  /* offset: 4 */
} sembuf;

/* Size: 84 bytes */
typedef struct _shmid_ds {
    uint8_t shm_perm;  /* offset: 0 */
    uint32_t shm_segsz;  /* offset: 36 */
    uint32_t shm_atime;  /* offset: 40 */
    uint32_t __unused1;  /* offset: 44 */
    uint32_t shm_dtime;  /* offset: 48 */
    uint32_t __unused2;  /* offset: 52 */
    uint32_t shm_ctime;  /* offset: 56 */
    uint32_t __unused3;  /* offset: 60 */
    uint32_t shm_cpid;  /* offset: 64 */
    uint32_t shm_lpid;  /* offset: 68 */
    uint32_t shm_nattch;  /* offset: 72 */
    uint32_t __unused4;  /* offset: 76 */
    uint32_t __unused5;  /* offset: 80 */
} shmid_ds;

/* Size: 36 bytes */
typedef struct _shminfo {
    uint32_t shmmax;  /* offset: 0 */
    uint32_t shmmin;  /* offset: 4 */
    uint32_t shmmni;  /* offset: 8 */
    uint32_t shmseg;  /* offset: 12 */
    uint32_t shmall;  /* offset: 16 */
    uint32_t __unused1;  /* offset: 20 */
    uint32_t __unused2;  /* offset: 24 */
    uint32_t __unused3;  /* offset: 28 */
    uint32_t __unused4;  /* offset: 32 */
} shminfo;

/* Size: 24 bytes */
typedef struct _shm_info {
    uint32_t used_ids;  /* offset: 0 */
    uint32_t shm_tot;  /* offset: 4 */
    uint32_t shm_rss;  /* offset: 8 */
    uint32_t shm_swp;  /* offset: 12 */
    uint32_t swap_attempts;  /* offset: 16 */
    uint32_t swap_successes;  /* offset: 20 */
} shm_info;

/* Size: 8 bytes */
typedef struct _pollfd {
    uint32_t fd;  /* offset: 0 */
    uint16_t events;  /* offset: 4 */
    uint16_t revents;  /* offset: 6 */
} pollfd;

/* Size: 16 bytes */
typedef struct _flock {
    uint16_t l_type;  /* offset: 0 */
    uint16_t l_whence;  /* offset: 2 */
    uint32_t l_start;  /* offset: 4 */
    uint32_t l_len;  /* offset: 8 */
    uint32_t l_pid;  /* offset: 12 */
} flock;

/* Size: 24 bytes */
typedef struct _flock64 {
    uint16_t l_type;  /* offset: 0 */
    uint16_t l_whence;  /* offset: 2 */
    uint64_t l_start;  /* offset: 4 */
    uint64_t l_len;  /* offset: 12 */
    uint32_t l_pid;  /* offset: 20 */
} flock64;

/* Size: 88 bytes */
typedef struct _stat {
    uint64_t st_dev;  /* offset: 0 */
    uint16_t __pad1;  /* offset: 8 */
    uint32_t st_ino;  /* offset: 12 */
    uint32_t st_mode;  /* offset: 16 */
    uint32_t st_nlink;  /* offset: 20 */
    uint32_t st_uid;  /* offset: 24 */
    uint32_t st_gid;  /* offset: 28 */
    uint64_t st_rdev;  /* offset: 32 */
    uint16_t __pad2;  /* offset: 40 */
    uint32_t st_size;  /* offset: 44 */
    uint32_t st_blksize;  /* offset: 48 */
    uint32_t st_blocks;  /* offset: 52 */
    uint32_t st_atime;  /* offset: 56 */
    uint32_t __unused1;  /* offset: 60 */
    uint32_t st_mtime;  /* offset: 64 */
    uint32_t __unused2;  /* offset: 68 */
    uint32_t st_ctime;  /* offset: 72 */
    uint32_t __unused3;  /* offset: 76 */
    uint32_t __unused4;  /* offset: 80 */
    uint32_t __unused5;  /* offset: 84 */
} stat;

/* Size: 96 bytes */
typedef struct _stat64 {
    uint64_t st_dev;  /* offset: 0 */
    uint32_t __pad1;  /* offset: 8 */
    uint32_t __st_ino;  /* offset: 12 */
    uint32_t st_mode;  /* offset: 16 */
    uint32_t st_nlink;  /* offset: 20 */
    uint32_t st_uid;  /* offset: 24 */
    uint32_t st_gid;  /* offset: 28 */
    uint64_t st_rdev;  /* offset: 32 */
    uint32_t __pad2;  /* offset: 40 */
    uint64_t st_size;  /* offset: 44 */
    uint32_t st_blksize;  /* offset: 52 */
    uint64_t st_blocks;  /* offset: 56 */
    uint32_t st_atime;  /* offset: 64 */
    uint32_t __unused1;  /* offset: 68 */
    uint32_t st_mtime;  /* offset: 72 */
    uint32_t __unused2;  /* offset: 76 */
    uint32_t st_ctime;  /* offset: 80 */
    uint32_t __unused3;  /* offset: 84 */
    uint64_t st_ino;  /* offset: 88 */
} stat64;

/* Size: 4 bytes */
typedef struct _sched_param {
    uint32_t __sched_priority;  /* offset: 0 */
} sched_param;

/* Size: 44 bytes */
typedef struct _tm {
    uint32_t tm_sec;  /* offset: 0 */
    uint32_t tm_min;  /* offset: 4 */
    uint32_t tm_hour;  /* offset: 8 */
    uint32_t tm_mday;  /* offset: 12 */
    uint32_t tm_mon;  /* offset: 16 */
    uint32_t tm_year;  /* offset: 20 */
    uint32_t tm_wday;  /* offset: 24 */
    uint32_t tm_yday;  /* offset: 28 */
    uint32_t tm_isdst;  /* offset: 32 */
    uint32_t tm_gmtoff;  /* offset: 36 */
    uint32_t tm_zone;  /* offset: 40 */
} tm;

/* Size: 16 bytes */
typedef struct _itimerspec {
    uint64_t it_interval;  /* offset: 0 */
    uint64_t it_value;  /* offset: 8 */
} itimerspec;

/* Size: 16 bytes */
typedef struct _pthread_cleanup_buffer {
    uint32_t __routine;  /* offset: 0 */
    uint32_t __arg;  /* offset: 4 */
    uint32_t __canceltype;  /* offset: 8 */
} pthread_cleanup_buffer;

/* Size: 8 bytes */
typedef struct _GCheader {
    uint8_t tt;  /* offset: 4 */
    uint8_t marked;  /* offset: 5 */
} GCheader;

/* Size: 12 bytes */
typedef struct _lua_TObject {
    uint32_t tt;  /* offset: 0 */
    uint64_t value;  /* offset: 4 */
} lua_TObject;

/* Size: 72 bytes */
typedef struct _Proto {
    uint32_t next;  /* offset: 0 */
    uint8_t tt;  /* offset: 4 */
    uint8_t marked;  /* offset: 5 */
    uint32_t k;  /* offset: 8 */
    uint32_t source;  /* offset: 32 */
    uint32_t sizeupvalues;  /* offset: 36 */
    uint32_t sizek;  /* offset: 40 */
    uint32_t sizecode;  /* offset: 44 */
    uint32_t sizelineinfo;  /* offset: 48 */
    uint32_t sizep;  /* offset: 52 */
    uint32_t sizelocvars;  /* offset: 56 */
    uint32_t lineDefined;  /* offset: 60 */
    uint32_t gclist;  /* offset: 64 */
    uint8_t nups;  /* offset: 68 */
    uint8_t numparams;  /* offset: 69 */
    uint8_t is_vararg;  /* offset: 70 */
    uint8_t maxstacksize;  /* offset: 71 */
} Proto;

/* Size: 12 bytes */
typedef struct _LocVar {
    uint32_t varname;  /* offset: 0 */
    uint32_t startpc;  /* offset: 4 */
    uint32_t endpc;  /* offset: 8 */
} LocVar;

/* Size: 24 bytes */
typedef struct _UpVal {
    uint32_t next;  /* offset: 0 */
    uint8_t tt;  /* offset: 4 */
    uint8_t marked;  /* offset: 5 */
    uint32_t v;  /* offset: 8 */
    uint8_t value;  /* offset: 12 */
} UpVal;

/* Size: 28 bytes */
typedef struct _CClosure {
    uint32_t next;  /* offset: 0 */
    uint8_t tt;  /* offset: 4 */
    uint8_t marked;  /* offset: 5 */
    uint8_t isC;  /* offset: 6 */
    uint8_t nupvalues;  /* offset: 7 */
    uint32_t gclist;  /* offset: 8 */
    uint32_t f;  /* offset: 12 */
} CClosure;

/* Size: 32 bytes */
typedef struct _LClosure {
    uint32_t next;  /* offset: 0 */
    uint8_t tt;  /* offset: 4 */
    uint8_t marked;  /* offset: 5 */
    uint8_t isC;  /* offset: 6 */
    uint8_t nupvalues;  /* offset: 7 */
    uint32_t gclist;  /* offset: 8 */
    uint32_t p;  /* offset: 12 */
    uint8_t g;  /* offset: 16 */
} LClosure;

/* Size: 28 bytes */
typedef struct _Node {
    uint8_t i_key;  /* offset: 0 */
    uint8_t i_val;  /* offset: 12 */
} Node;

/* Size: 32 bytes */
typedef struct _Table {
    uint32_t next;  /* offset: 0 */
    uint8_t tt;  /* offset: 4 */
    uint8_t marked;  /* offset: 5 */
    uint8_t flags;  /* offset: 6 */
    uint8_t lsizenode;  /* offset: 7 */
    uint32_t metatable;  /* offset: 8 */
    uint32_t array;  /* offset: 12 */
    uint32_t node;  /* offset: 16 */
    uint32_t firstfree;  /* offset: 20 */
    uint32_t gclist;  /* offset: 24 */
    uint32_t sizearray;  /* offset: 28 */
} Table;

/* Size: 8 bytes */
typedef struct _Mbuffer {
    uint32_t buffer;  /* offset: 0 */
    uint32_t buffsize;  /* offset: 4 */
} Mbuffer;

/* Size: 20 bytes */
typedef struct _Zio {
    uint32_t n;  /* offset: 0 */
    uint32_t p;  /* offset: 4 */
    uint32_t reader;  /* offset: 8 */
    uint32_t data;  /* offset: 12 */
    uint32_t name;  /* offset: 16 */
} Zio;

/* Size: 12 bytes */
typedef struct _stringtable {
    uint32_t nuse;  /* offset: 4 */
    uint32_t size;  /* offset: 8 */
} stringtable;

/* Size: 24 bytes */
typedef struct _CallInfo {
    uint32_t s4dummy;  /* offset: 0 */
    uint32_t base;  /* offset: 0 */
    uint32_t top;  /* offset: 4 */
    uint32_t state;  /* offset: 8 */
    uint32_t tailcalls;  /* offset: 8 */
} CallInfo;

/* Size: 160 bytes */
typedef struct _global_State {
    uint8_t strt;  /* offset: 0 */
    uint32_t rootgc;  /* offset: 12 */
    uint32_t rootudata;  /* offset: 16 */
    uint32_t tmudata;  /* offset: 20 */
    uint64_t buff;  /* offset: 24 */
    uint32_t GCthreshold;  /* offset: 32 */
    uint32_t nblocks;  /* offset: 36 */
    void* panic;  /* offset: 40 */
    uint8_t _registry;  /* offset: 44 */
    uint8_t _defaultmeta;  /* offset: 56 */
} global_State;

/* Size: 8 bytes */
typedef struct _luaL_reg {
    uint32_t name;  /* offset: 0 */
    uint32_t func;  /* offset: 4 */
} luaL_reg;

/* Size: 8204 bytes */
typedef struct _luaL_Buffer {
    uint32_t p;  /* offset: 0 */
    uint32_t lvl;  /* offset: 4 */
    uint32_t L;  /* offset: 8 */
} luaL_Buffer;

/* Size: 12 bytes */
typedef struct _st_used_mem {
    uint32_t left;  /* offset: 4 */
    uint32_t size;  /* offset: 8 */
} st_used_mem;

/* Size: 24 bytes */
typedef struct _st_mem_root {
    uint32_t used;  /* offset: 4 */
    void* pre_alloc;  /* offset: 8 */
    uint32_t min_malloc;  /* offset: 12 */
    uint32_t block_size;  /* offset: 16 */
    uint32_t error_handler;  /* offset: 20 */
} st_mem_root;

/* Size: 272 bytes */
typedef struct _st_net {
    uint32_t fd;  /* offset: 4 */
    uint32_t fcntl;  /* offset: 8 */
    uint32_t buff;  /* offset: 12 */
    uint32_t buff_end;  /* offset: 16 */
    uint32_t write_pos;  /* offset: 20 */
    uint32_t read_pos;  /* offset: 24 */
    uint32_t last_errno;  /* offset: 228 */
    uint32_t max_packet;  /* offset: 232 */
    uint32_t timeout;  /* offset: 236 */
    void* pkt_nr;  /* offset: 240 */
    uint8_t error;  /* offset: 244 */
    uint8_t return_errno;  /* offset: 245 */
    uint8_t compress;  /* offset: 246 */
    uint8_t no_send_ok;  /* offset: 247 */
    uint32_t remain_in_buf;  /* offset: 248 */
    uint32_t length;  /* offset: 252 */
    uint32_t buf_length;  /* offset: 256 */
    uint32_t where_b;  /* offset: 260 */
    uint8_t reading_or_writing;  /* offset: 268 */
    uint8_t save_char;  /* offset: 269 */
} st_net;

/* Size: 20 bytes */
typedef struct _rand_struct {
    uint32_t seed1;  /* offset: 0 */
    uint32_t seed2;  /* offset: 4 */
    uint32_t max_value;  /* offset: 8 */
    uint64_t max_value_dbl;  /* offset: 12 */
} rand_struct;

/* Size: 20 bytes */
typedef struct _st_udf_args {
    uint32_t arg_count;  /* offset: 0 */
    uint32_t lengths;  /* offset: 12 */
    uint32_t maybe_null;  /* offset: 16 */
} st_udf_args;

/* Size: 20 bytes */
typedef struct _st_udf_init {
    uint8_t maybe_null;  /* offset: 0 */
    uint32_t decimals;  /* offset: 4 */
    uint32_t max_length;  /* offset: 8 */
    void* ptr;  /* offset: 12 */
    uint8_t const_item;  /* offset: 16 */
} st_udf_init;

/* Size: 32 bytes */
typedef struct _st_mysql_field {
    uint32_t name;  /* offset: 0 */
    uint32_t table;  /* offset: 4 */
    uint32_t def;  /* offset: 8 */
    uint32_t type;  /* offset: 12 */
    uint32_t length;  /* offset: 16 */
    uint32_t max_length;  /* offset: 20 */
    uint32_t flags;  /* offset: 24 */
    uint32_t decimals;  /* offset: 28 */
} st_mysql_field;

/* Size: 8 bytes */
typedef struct _st_mysql_rows {
    uint32_t data;  /* offset: 4 */
} st_mysql_rows;

/* Size: 40 bytes */
typedef struct _st_mysql_data {
    uint64_t rows;  /* offset: 0 */
    uint32_t fields;  /* offset: 8 */
    uint32_t data;  /* offset: 12 */
    uint8_t alloc;  /* offset: 16 */
} st_mysql_data;

/* Size: 76 bytes */
typedef struct _st_mysql_options {
    uint32_t connect_timeout;  /* offset: 0 */
    uint32_t client_flag;  /* offset: 4 */
    uint8_t compress;  /* offset: 8 */
    uint8_t named_pipe;  /* offset: 9 */
    void* port;  /* offset: 12 */
    uint32_t host;  /* offset: 16 */
    uint32_t init_command;  /* offset: 20 */
    uint32_t user;  /* offset: 24 */
    void* password;  /* offset: 28 */
    uint32_t unix_socket;  /* offset: 32 */
    uint32_t db;  /* offset: 36 */
    uint32_t my_cnf_file;  /* offset: 40 */
    uint32_t my_cnf_group;  /* offset: 44 */
    uint32_t charset_dir;  /* offset: 48 */
    uint32_t charset_name;  /* offset: 52 */
    uint8_t use_ssl;  /* offset: 56 */
    uint32_t ssl_key;  /* offset: 60 */
    uint32_t ssl_cert;  /* offset: 64 */
    uint32_t ssl_ca;  /* offset: 68 */
    uint32_t ssl_capath;  /* offset: 72 */
} st_mysql_options;

/* Size: 496 bytes */
typedef struct _st_mysql {
    uint8_t net;  /* offset: 0 */
    uint32_t connector_fd;  /* offset: 272 */
    uint32_t host;  /* offset: 276 */
    uint32_t user;  /* offset: 280 */
    void* passwd;  /* offset: 284 */
    uint32_t unix_socket;  /* offset: 288 */
    uint32_t server_version;  /* offset: 292 */
    uint32_t host_info;  /* offset: 296 */
    uint32_t info;  /* offset: 300 */
    uint32_t db;  /* offset: 304 */
    void* port;  /* offset: 308 */
    uint32_t client_flag;  /* offset: 312 */
    uint32_t server_capabilities;  /* offset: 316 */
    void* protocol_version;  /* offset: 320 */
    uint32_t field_count;  /* offset: 324 */
    uint32_t server_status;  /* offset: 328 */
    uint32_t thread_id;  /* offset: 332 */
    uint64_t affected_rows;  /* offset: 336 */
    uint64_t insert_id;  /* offset: 344 */
    uint64_t extra_info;  /* offset: 352 */
    void* packet_length;  /* offset: 360 */
    uint32_t status;  /* offset: 364 */
    uint8_t field_alloc;  /* offset: 372 */
    uint8_t free_me;  /* offset: 396 */
    uint8_t reconnect;  /* offset: 397 */
    uint8_t options;  /* offset: 400 */
    uint32_t server_language;  /* offset: 492 */
} st_mysql;

/* Size: 72 bytes */
typedef struct _st_mysql_res {
    uint64_t row_count;  /* offset: 0 */
    uint32_t field_count;  /* offset: 8 */
    uint32_t current_field;  /* offset: 12 */
    uint32_t fields;  /* offset: 16 */
    uint32_t data_cursor;  /* offset: 24 */
    uint8_t field_alloc;  /* offset: 28 */
    uint32_t row;  /* offset: 52 */
    uint32_t current_row;  /* offset: 56 */
    uint32_t lengths;  /* offset: 60 */
    uint8_t eof;  /* offset: 68 */
} st_mysql_res;

/* Size: 1132 bytes */
typedef struct _BlobDef {
    uint8_t szField;  /* offset: 80 */
    uint8_t szAddFieldsData;  /* offset: 560 */
    void* pData;  /* offset: 1120 */
    uint32_t iSize;  /* offset: 1124 */
    uint32_t iNumAddFields;  /* offset: 1128 */
} BlobDef;

/* Size: 33559396 bytes */
typedef struct _CDBAccess {
    uint32_t row;  /* offset: 33559392 */
} CDBAccess;

/* Size: 36 bytes */
typedef struct _CLogFilter {
    uint32_t iID;  /* offset: 4 */
    uint32_t iFlags;  /* offset: 8 */
} CLogFilter;

/* Size: 104 bytes */
typedef struct _CLog {
    uint32_t m_iActiveFlag;  /* offset: 100 */
} CLog;

/* Size: 2 bytes */
typedef struct _OKMsg {
    uint16_t wPortNum;  /* offset: 0 */
} OKMsg;

/* Size: 50 bytes */
typedef struct _WorldServer {
    uint8_t chAddress;  /* offset: 24 */
    uint16_t wNumPlayers;  /* offset: 48 */
} WorldServer;

/* Size: 56 bytes */
typedef struct _StartGameDataNetMsg {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwModelType;  /* offset: 8 */
    uint32_t x;  /* offset: 12 */
    uint32_t y;  /* offset: 16 */
    uint32_t z;  /* offset: 20 */
    uint32_t fFacing;  /* offset: 24 */
    uint32_t fGameTime;  /* offset: 28 */
    uint8_t chAddress;  /* offset: 32 */
} StartGameDataNetMsg;

/* Size: 24 bytes */
typedef struct _EchoNetMsg {
    uint8_t chMesg;  /* offset: 0 */
} EchoNetMsg;

/* Size: 264 bytes */
typedef struct _EndOfZoneMsg {
    uint32_t dwMapID;  /* offset: 0 */
    uint8_t byNumScenes;  /* offset: 260 */
} EndOfZoneMsg;

/* Size: 4 bytes */
typedef struct _TransferZoneMsg {
    uint32_t dwSceneID;  /* offset: 0 */
} TransferZoneMsg;

/* Size: 24 bytes */
typedef struct _ZoneDataMsg {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fFacing;  /* offset: 16 */
    uint32_t fGameTime;  /* offset: 20 */
} ZoneDataMsg;

/* Size: 8 bytes */
typedef struct _QueryIDDataMsg {
    uint8_t byType;  /* offset: 0 */
    uint32_t dwID;  /* offset: 4 */
} QueryIDDataMsg;

/* Size: 4 bytes */
typedef struct _ChangeChatBarMsg {
    uint32_t dwHash;  /* offset: 0 */
} ChangeChatBarMsg;

/* Size: 168 bytes */
typedef struct _ChatMsg {
    uint32_t dwParam;  /* offset: 0 */
    uint16_t wLen;  /* offset: 164 */
    uint8_t byType;  /* offset: 166 */
} ChatMsg;

/* Size: 164 bytes */
typedef struct _LeaveMsg {
    uint32_t dwHash;  /* offset: 0 */
    uint8_t wMesgA;  /* offset: 4 */
} LeaveMsg;

/* Size: 1 bytes */
typedef struct _MOTDEmailRequest {
    uint8_t bySelected;  /* offset: 0 */
} MOTDEmailRequest;

/* Size: 4 bytes */
typedef struct _IDResp1Msg {
    uint32_t dwAddr;  /* offset: 0 */
} IDResp1Msg;

/* Size: 20 bytes */
typedef struct _BroadcastMsg {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint32_t dwTypeParam1;  /* offset: 16 */
} BroadcastMsg;

/* Size: 4 bytes */
typedef struct _DataMsg {
    uint16_t wEventID;  /* offset: 0 */
    uint16_t wSize;  /* offset: 2 */
} DataMsg;

/* Size: 4 bytes */
typedef struct _PartyUpdateMsg {
    uint32_t dwPartyID;  /* offset: 0 */
} PartyUpdateMsg;

/* Size: 4 bytes */
typedef struct _DropConnectionMsg {
    uint32_t dwCharID;  /* offset: 0 */
} DropConnectionMsg;

/* Size: 8 bytes */
typedef struct _GameEventsMsg {
    uint8_t byCmd;  /* offset: 0 */
    uint16_t wEventID;  /* offset: 2 */
    uint32_t dwServerID;  /* offset: 4 */
} GameEventsMsg;

/* Size: 20 bytes */
typedef struct _SysServicesMsg {
    uint16_t wEventID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint32_t dwParam3;  /* offset: 12 */
    uint32_t dwServerID;  /* offset: 16 */
} SysServicesMsg;

/* Size: 4 bytes */
typedef struct _ScenePopMsg {
    uint32_t dwSceneID;  /* offset: 0 */
} ScenePopMsg;

/* Size: 2 bytes */
typedef struct _PopMsg {
    uint16_t wPopCount;  /* offset: 0 */
} PopMsg;

/* Size: 1 bytes */
typedef struct _MOTDRequest1Msg {
    uint8_t byID;  /* offset: 0 */
} MOTDRequest1Msg;

/* Size: 2 bytes */
typedef struct _MOTDRequestMsg {
    uint8_t byID;  /* offset: 0 */
    uint8_t byMsgID;  /* offset: 1 */
} MOTDRequestMsg;

/* Size: 21 bytes */
typedef struct _DropUserMsg {
    uint8_t chUsername;  /* offset: 0 */
} DropUserMsg;

/* Size: 4 bytes */
typedef struct _ValidateCreditMsg {
    uint32_t dwID;  /* offset: 0 */
} ValidateCreditMsg;

/* Size: 4 bytes */
typedef struct _CreditRemainingMsg {
    uint32_t dwCredits;  /* offset: 0 */
} CreditRemainingMsg;

/* Size: 8 bytes */
typedef struct _MuteMsg {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t iMutedFlag;  /* offset: 4 */
} MuteMsg;

/* Size: 8 bytes */
typedef struct _NetObject {
    uint16_t wEventID;  /* offset: 0 */
    uint16_t wSize;  /* offset: 2 */
    void* pData;  /* offset: 4 */
} NetObject;

/* Size: 1536 bytes */
typedef struct __PacketData {
    uint8_t byMsgID;  /* offset: 0 */
    uint8_t byUID;  /* offset: 1 */
    uint8_t byFlags;  /* offset: 2 */
    uint8_t bySData;  /* offset: 3 */
} _PacketData;

/* Size: 1540 bytes */
typedef struct __IntraData {
    uint32_t dwID;  /* offset: 0 */
    uint8_t PData;  /* offset: 4 */
} _IntraData;

/* Size: 1564 bytes */
typedef struct _PacketSInfo {
    uint32_t iSize;  /* offset: 0 */
    uint32_t iType;  /* offset: 4 */
    uint32_t dwSentTime;  /* offset: 8 */
    uint32_t iDeleteTag;  /* offset: 12 */
    uint32_t dwLastInterval;  /* offset: 16 */
    uint8_t Packet;  /* offset: 20 */
    void* pPrev;  /* offset: 1560 */
} PacketSInfo;

/* Size: 8 bytes */
typedef struct _AckPkts {
    uint8_t byUID;  /* offset: 0 */
} AckPkts;

/* Size: 328 bytes */
typedef struct _CSndPkt {
    uint32_t m_iAckPkts;  /* offset: 324 */
} CSndPkt;

/* Size: 1560 bytes */
typedef struct _PacketRInfo {
    uint32_t iSize;  /* offset: 0 */
    uint32_t recvtime;  /* offset: 4 */
    uint32_t iType;  /* offset: 8 */
    uint32_t iOffset;  /* offset: 12 */
    uint8_t Packet;  /* offset: 16 */
    void* pPrev;  /* offset: 1556 */
} PacketRInfo;

/* Size: 8 bytes */
typedef struct _PacketRChain {
    uint32_t iNumPackets;  /* offset: 0 */
    void* pPackets;  /* offset: 4 */
} PacketRChain;

/* Size: 8 bytes */
typedef struct _DropList {
    uint8_t byUID;  /* offset: 0 */
} DropList;

/* Size: 108 bytes */
typedef struct _CRcvPkt {
    uint32_t m_pFreePacket;  /* offset: 100 */
    uint32_t m_iPktCount;  /* offset: 104 */
} CRcvPkt;

/* Size: 2052 bytes */
typedef struct _TCPNetMesg {
    uint8_t byMsgID;  /* offset: 0 */
    uint16_t wMesgLen;  /* offset: 2 */
    uint8_t chSendMesg;  /* offset: 1028 */
} TCPNetMesg;

/* Size: 404 bytes */
typedef struct _UsedWarID {
    uint32_t iCount;  /* offset: 400 */
} UsedWarID;

/* Size: 12 bytes */
typedef struct _FW_DATA_OBJ_TARGET {
    uint8_t byConfirmFlag;  /* offset: 0 */
    uint8_t byReserved1;  /* offset: 1 */
    uint8_t byReserved2;  /* offset: 2 */
    uint8_t byReserved3;  /* offset: 3 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwTargetID;  /* offset: 8 */
} FW_DATA_OBJ_TARGET;

/* Size: 28 bytes */
typedef struct _FW_DATA_OBJ_SPAWN {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t dwID;  /* offset: 4 */
    uint32_t dwLabel;  /* offset: 8 */
    uint32_t dwType;  /* offset: 12 */
    uint32_t x;  /* offset: 16 */
    uint32_t y;  /* offset: 20 */
    uint32_t z;  /* offset: 24 */
} FW_DATA_OBJ_SPAWN;

/* Size: 12 bytes */
typedef struct _FW_DATA_OBJ_STATE {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t dwID;  /* offset: 4 */
    uint8_t byState;  /* offset: 8 */
} FW_DATA_OBJ_STATE;

/* Size: 8 bytes */
typedef struct _FW_DATA_OBJ_REMOVE {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t dwID;  /* offset: 4 */
} FW_DATA_OBJ_REMOVE;

/* Size: 12 bytes */
typedef struct _FW_DATA_OBJ_MODEL {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t dwEntityID;  /* offset: 4 */
    uint32_t dwModelID;  /* offset: 8 */
} FW_DATA_OBJ_MODEL;

/* Size: 8 bytes */
typedef struct _FW_DATA_OBJ_ATTACHMENT {
    uint32_t dwID;  /* offset: 0 */
    uint16_t wModelID;  /* offset: 4 */
    uint8_t byLocation;  /* offset: 6 */
} FW_DATA_OBJ_ATTACHMENT;

/* Size: 8 bytes */
typedef struct _FW_DATA_CHAR_STATISTIC {
    uint32_t lValue;  /* offset: 0 */
    uint32_t lValue2;  /* offset: 4 */
} FW_DATA_CHAR_STATISTIC;

/* Size: 10 bytes */
typedef struct _FW_DATA_CHAR_ALLPRIMATTR {
    uint16_t wStr;  /* offset: 0 */
    uint16_t wAgl;  /* offset: 2 */
    uint16_t wCon;  /* offset: 4 */
    uint16_t wMnd;  /* offset: 6 */
    uint16_t wPer;  /* offset: 8 */
} FW_DATA_CHAR_ALLPRIMATTR;

/* Size: 40 bytes */
typedef struct _FW_DATA_CHAR_ALLSECSTAT {
    uint8_t byPrestige;  /* offset: 0 */
    uint8_t byClan;  /* offset: 1 */
    uint8_t byMovement;  /* offset: 2 */
    uint32_t lFire;  /* offset: 4 */
    uint32_t lCold;  /* offset: 8 */
    uint32_t lPoison;  /* offset: 12 */
    uint32_t lLightning;  /* offset: 16 */
    uint32_t lPhysical;  /* offset: 20 */
    uint16_t wLevel;  /* offset: 24 */
    uint16_t wAttack;  /* offset: 26 */
    uint16_t wDefense;  /* offset: 28 */
    uint16_t wMinDmg;  /* offset: 30 */
    uint16_t wMaxDmg;  /* offset: 32 */
    uint16_t wWeightAll;  /* offset: 34 */
    uint32_t dwXP;  /* offset: 36 */
} FW_DATA_CHAR_ALLSECSTAT;

/* Size: 4 bytes */
typedef struct _FW_DATA_CHAR_DAMAGE {
    uint16_t wMinDmg;  /* offset: 0 */
    uint16_t wMaxDmg;  /* offset: 2 */
} FW_DATA_CHAR_DAMAGE;

/* Size: 20 bytes */
typedef struct _FW_DATA_CHAR_RESPAWN {
    uint16_t wSceneID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fGameTime;  /* offset: 16 */
} FW_DATA_CHAR_RESPAWN;

/* Size: 2 bytes */
typedef struct _FW_DATA_CHAR_NEW {
    uint8_t bySlot;  /* offset: 0 */
    uint8_t byLanguage;  /* offset: 1 */
} FW_DATA_CHAR_NEW;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_DELETE {
    uint8_t bySlotID;  /* offset: 0 */
} FW_DATA_CHAR_DELETE;

/* Size: 64 bytes */
typedef struct _FW_DATA_CHAR_CREATE {
    uint8_t bySlotID;  /* offset: 0 */
    uint32_t dwModelID;  /* offset: 4 */
    uint8_t byStance;  /* offset: 54 */
    uint8_t byLocation;  /* offset: 55 */
    uint8_t byStrength;  /* offset: 56 */
    uint8_t byConstitution;  /* offset: 57 */
    uint8_t byAgility;  /* offset: 58 */
    uint8_t byMind;  /* offset: 59 */
    uint8_t byPerception;  /* offset: 60 */
    uint8_t byGender;  /* offset: 61 */
    uint8_t byElementalAdv;  /* offset: 62 */
    uint8_t byTemplateID;  /* offset: 63 */
} FW_DATA_CHAR_CREATE;

/* Size: 660 bytes */
typedef struct _FW_DATA_CHAR_NEWDATA {
    uint8_t dwElement;  /* offset: 0 */
    uint8_t dwElementDesc;  /* offset: 20 */
    uint8_t byAttrPoints;  /* offset: 40 */
    uint8_t byStrength;  /* offset: 41 */
    uint8_t byMinStrength;  /* offset: 42 */
    uint8_t byMaxStrength;  /* offset: 43 */
    uint8_t byConstitution;  /* offset: 44 */
    uint8_t byMinConstitution;  /* offset: 45 */
    uint8_t byMaxConstitution;  /* offset: 46 */
    uint8_t byAgility;  /* offset: 47 */
    uint8_t byMinAgility;  /* offset: 48 */
    uint8_t byMaxAgility;  /* offset: 49 */
    uint8_t byMind;  /* offset: 50 */
    uint8_t byMinMind;  /* offset: 51 */
    uint8_t byMaxMind;  /* offset: 52 */
    uint8_t byPerception;  /* offset: 53 */
    uint8_t byMinPerception;  /* offset: 54 */
    uint8_t byMaxPerception;  /* offset: 55 */
    uint8_t dwTemplate;  /* offset: 56 */
    uint8_t dwTemplateDesc;  /* offset: 96 */
    uint8_t dwStance;  /* offset: 136 */
    uint8_t dwStanceDesc;  /* offset: 176 */
    uint8_t dwStanceID;  /* offset: 216 */
    uint8_t dwWeaponID;  /* offset: 256 */
    uint8_t bySkillPoints;  /* offset: 296 */
    uint8_t dwSkill;  /* offset: 300 */
    uint8_t dwSkillDesc;  /* offset: 380 */
    uint8_t dwLocation;  /* offset: 460 */
    uint8_t dwLocationDesc;  /* offset: 540 */
    uint8_t wSkillID;  /* offset: 620 */
} FW_DATA_CHAR_NEWDATA;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_REQTEMPLATE {
    uint8_t byTemplateID;  /* offset: 0 */
} FW_DATA_CHAR_REQTEMPLATE;

/* Size: 20 bytes */
typedef struct _FW_DATA_CHAR_TEMPLATEDATA {
    uint32_t dwModelID;  /* offset: 0 */
    uint8_t byStrength;  /* offset: 4 */
    uint8_t byConstitution;  /* offset: 5 */
    uint8_t byAgility;  /* offset: 6 */
    uint8_t byMind;  /* offset: 7 */
    uint8_t byPerception;  /* offset: 8 */
    uint8_t bySkills;  /* offset: 9 */
    uint8_t byStance;  /* offset: 15 */
    uint8_t byElementalAdv;  /* offset: 16 */
} FW_DATA_CHAR_TEMPLATEDATA;

/* Size: 2 bytes */
typedef struct _FW_DATA_CHAR_STATUS {
    uint16_t dwIndex;  /* offset: 0 */
} FW_DATA_CHAR_STATUS;

/* Size: 296 bytes */
typedef struct _FW_DATA_CHAR_LIST {
    uint8_t byCount;  /* offset: 0 */
    uint8_t byMaxChars;  /* offset: 1 */
    uint8_t wLevelA;  /* offset: 122 */
    uint8_t wClanString;  /* offset: 128 */
    uint8_t wLocationString;  /* offset: 134 */
    uint8_t dwStanceA;  /* offset: 272 */
    uint8_t dwWeaponA;  /* offset: 284 */
} FW_DATA_CHAR_LIST;

/* Size: 4 bytes */
typedef struct _FW_DATA_CHAR_ABILITYUP {
    uint32_t dwAbilityID;  /* offset: 0 */
} FW_DATA_CHAR_ABILITYUP;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_TEMPLATE {
    uint8_t byOn;  /* offset: 0 */
} FW_DATA_CHAR_TEMPLATE;

/* Size: 8 bytes */
typedef struct _FW_DATA_CHAR_FLAG {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwFlags;  /* offset: 4 */
} FW_DATA_CHAR_FLAG;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_LEVEL_GAUGE {
    uint8_t byPercent;  /* offset: 0 */
} FW_DATA_CHAR_LEVEL_GAUGE;

/* Size: 8 bytes */
typedef struct _FW_DATA_CHAR_MODEL {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwModelID;  /* offset: 4 */
} FW_DATA_CHAR_MODEL;

/* Size: 32 bytes */
typedef struct _FW_DATA_COMMS_PLAYING {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwModelType;  /* offset: 8 */
    uint32_t x;  /* offset: 12 */
    uint32_t y;  /* offset: 16 */
    uint32_t z;  /* offset: 20 */
    uint32_t fFacing;  /* offset: 24 */
    uint32_t fGameTime;  /* offset: 28 */
} FW_DATA_COMMS_PLAYING;

/* Size: 264 bytes */
typedef struct _FW_DATA_COMMS_END_OF_ZONE {
    uint32_t dwMapID;  /* offset: 0 */
    uint8_t dwSceneID;  /* offset: 4 */
    uint8_t byNumOfScenes;  /* offset: 260 */
} FW_DATA_COMMS_END_OF_ZONE;

/* Size: 24 bytes */
typedef struct _FW_DATA_COMMS_ZONE_DATA {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fFacing;  /* offset: 16 */
    uint32_t fGameTime;  /* offset: 20 */
} FW_DATA_COMMS_ZONE_DATA;

/* Size: 104 bytes */
typedef struct _FW_DATA_COMMS_MOTD_REPLY {
    uint8_t byRemaining;  /* offset: 20 */
    uint8_t dwParam1;  /* offset: 24 */
    uint8_t dwParam2;  /* offset: 64 */
} FW_DATA_COMMS_MOTD_REPLY;

/* Size: 202 bytes */
typedef struct _FW_DATA_COMMS_EMAIL_REPLY {
    uint8_t wNameA;  /* offset: 0 */
    uint8_t wMesgA;  /* offset: 40 */
    uint8_t byRemaining;  /* offset: 200 */
} FW_DATA_COMMS_EMAIL_REPLY;

/* Size: 1 bytes */
typedef struct __FW_DATA_COMMS_LOADING_PROGRESS {
    uint8_t byProgress;  /* offset: 0 */
} _FW_DATA_COMMS_LOADING_PROGRESS;

/* Size: 1 bytes */
typedef struct _FW_DATA_COMMS_MOTD_REQUEST_1 {
    uint8_t byID;  /* offset: 0 */
} FW_DATA_COMMS_MOTD_REQUEST_1;

/* Size: 12 bytes */
typedef struct _FW_DATA_COMMS_MOTD_VER {
    uint32_t dwVersion;  /* offset: 0 */
    uint8_t byNumMsgs;  /* offset: 4 */
    uint32_t dwCharIDCacheVersion;  /* offset: 8 */
} FW_DATA_COMMS_MOTD_VER;

/* Size: 2 bytes */
typedef struct _FW_DATA_COMMS_MOTD_REQUEST_MSG {
    uint8_t byID;  /* offset: 0 */
    uint8_t byMsgID;  /* offset: 1 */
} FW_DATA_COMMS_MOTD_REQUEST_MSG;

/* Size: 502 bytes */
typedef struct _FW_DATA_COMMS_MOTD_MSG {
    uint8_t byMsgID;  /* offset: 0 */
} FW_DATA_COMMS_MOTD_MSG;

/* Size: 24 bytes */
typedef struct _FW_DATA_MOVE_VECPOS {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwTime;  /* offset: 4 */
    uint32_t x;  /* offset: 8 */
    uint32_t y;  /* offset: 12 */
    uint32_t z;  /* offset: 16 */
    uint8_t byDir;  /* offset: 20 */
    uint8_t bySpeed;  /* offset: 21 */
    uint8_t byActionFlag;  /* offset: 22 */
} FW_DATA_MOVE_VECPOS;

/* Size: 28 bytes */
typedef struct _FW_DATA_MOVE_JUMP {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwTime;  /* offset: 4 */
    uint32_t x;  /* offset: 8 */
    uint32_t y;  /* offset: 12 */
    uint32_t z;  /* offset: 16 */
    uint32_t fDir;  /* offset: 20 */
    uint8_t bySpeed;  /* offset: 24 */
    uint8_t byJumpType;  /* offset: 25 */
} FW_DATA_MOVE_JUMP;

/* Size: 16 bytes */
typedef struct _FW_DATA_MOVE_ANIMATION {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint32_t dwTime;  /* offset: 8 */
    uint16_t wAnimID;  /* offset: 12 */
} FW_DATA_MOVE_ANIMATION;

/* Size: 1 bytes */
typedef struct _FW_DATA_MOVE_SPEED {
    uint8_t bySpeed;  /* offset: 0 */
} FW_DATA_MOVE_SPEED;

/* Size: 8 bytes */
typedef struct _FW_DATA_MOVE_ZONEOUT {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwMapID;  /* offset: 4 */
} FW_DATA_MOVE_ZONEOUT;

/* Size: 20 bytes */
typedef struct _FW_DATA_MOVE_MARK {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint8_t byDir;  /* offset: 16 */
    uint8_t bySpeed;  /* offset: 17 */
} FW_DATA_MOVE_MARK;

/* Size: 16 bytes */
typedef struct _FW_DATA_MOVE_OFFSET {
    uint32_t dwID;  /* offset: 0 */
    uint16_t x;  /* offset: 4 */
    uint16_t y;  /* offset: 6 */
    uint16_t z;  /* offset: 8 */
    uint8_t byDir;  /* offset: 10 */
    uint8_t bySpeed;  /* offset: 11 */
    uint8_t byActionFlag;  /* offset: 12 */
} FW_DATA_MOVE_OFFSET;

/* Size: 16 bytes */
typedef struct _FW_DATA_MOVE_RELIC {
    uint32_t dwID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
} FW_DATA_MOVE_RELIC;

/* Size: 1 bytes */
typedef struct _FW_DATA_MOVE_SPRINT {
    uint8_t byMoveRate;  /* offset: 0 */
} FW_DATA_MOVE_SPRINT;

/* Size: 20 bytes */
typedef struct _FW_DATA_MOVE_ANIMQUEUE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint32_t fAnimFactor;  /* offset: 8 */
    uint8_t wAnimA;  /* offset: 12 */
    uint8_t byCount;  /* offset: 18 */
} FW_DATA_MOVE_ANIMQUEUE;

/* Size: 8 bytes */
typedef struct _FW_DATA_COMBAT_COOLDOWN {
    uint16_t wID;  /* offset: 0 */
    uint32_t dwCooldown;  /* offset: 4 */
} FW_DATA_COMBAT_COOLDOWN;

/* Size: 12 bytes */
typedef struct _FW_DATA_COMBAT_ATTACK {
    uint8_t byForceAttack;  /* offset: 0 */
    uint8_t byReserved1;  /* offset: 1 */
    uint8_t byReserved2;  /* offset: 2 */
    uint8_t byReserved3;  /* offset: 3 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwTargetID;  /* offset: 8 */
} FW_DATA_COMBAT_ATTACK;

/* Size: 12 bytes */
typedef struct _FW_DATA_COMBAT_RANGE_CHECK {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint32_t dwRange;  /* offset: 8 */
} FW_DATA_COMBAT_RANGE_CHECK;

/* Size: 1 bytes */
typedef struct _FW_DATA_COMBAT_ATTACKMODE {
    uint8_t byAttackMode;  /* offset: 0 */
} FW_DATA_COMBAT_ATTACKMODE;

/* Size: 16 bytes */
typedef struct _FW_DATA_COMBAT_FEEDBACK {
    uint32_t dwAttID;  /* offset: 0 */
    uint32_t dwTarID;  /* offset: 4 */
    uint32_t lResult;  /* offset: 8 */
    uint8_t byTarHPPerc;  /* offset: 12 */
    uint8_t byFlags;  /* offset: 13 */
} FW_DATA_COMBAT_FEEDBACK;

/* Size: 20 bytes */
typedef struct _FW_DATA_COMBAT_STANCE {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwWeaponID;  /* offset: 8 */
    uint16_t wStanceID;  /* offset: 12 */
    uint16_t wWeaponRange;  /* offset: 14 */
    uint8_t byLocation;  /* offset: 16 */
} FW_DATA_COMBAT_STANCE;

/* Size: 16 bytes */
typedef struct _FW_DATA_COMBAT_WEAPON {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwWeaponID;  /* offset: 8 */
    uint8_t byLocation;  /* offset: 12 */
} FW_DATA_COMBAT_WEAPON;

/* Size: 28 bytes */
typedef struct _FW_DATA_COMBAT_POWER {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t dwPowerID;  /* offset: 4 */
    uint32_t dwTargetID;  /* offset: 8 */
    uint32_t fX;  /* offset: 12 */
    uint32_t fY;  /* offset: 16 */
    uint32_t fZ;  /* offset: 20 */
    uint8_t byFlag;  /* offset: 24 */
    uint8_t byActivating;  /* offset: 25 */
    uint16_t wReserved;  /* offset: 26 */
} FW_DATA_COMBAT_POWER;

/* Size: 8 bytes */
typedef struct _FW_DATA_COMBAT_READYWEAPON {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwWeaponID;  /* offset: 4 */
} FW_DATA_COMBAT_READYWEAPON;

/* Size: 8 bytes */
typedef struct _FW_DATA_COMBAT_ACTIVATECHAINPOWER {
    uint32_t dwTargetID;  /* offset: 0 */
    uint32_t dwChainPower;  /* offset: 4 */
} FW_DATA_COMBAT_ACTIVATECHAINPOWER;

/* Size: 8 bytes */
typedef struct _FW_DATA_COMBAT_SETCHAINPOWERSLOT {
    uint32_t dwSlotID;  /* offset: 0 */
    uint32_t dwPowerID;  /* offset: 4 */
} FW_DATA_COMBAT_SETCHAINPOWERSLOT;

/* Size: 1 bytes */
typedef struct _FW_DATA_UI_GENERIC {
    uint8_t byOpen;  /* offset: 0 */
} FW_DATA_UI_GENERIC;

/* Size: 3 bytes */
typedef struct _FW_DATA_UI_INVENTORY {
    uint8_t byOpen;  /* offset: 0 */
    uint8_t byGroup;  /* offset: 1 */
    uint8_t byGetAll;  /* offset: 2 */
} FW_DATA_UI_INVENTORY;

/* Size: 1 bytes */
typedef struct _FW_DATA_UI_STASH {
    uint8_t byTab;  /* offset: 0 */
} FW_DATA_UI_STASH;

/* Size: 2 bytes */
typedef struct _FW_DATA_UI_ICON {
    uint16_t wEffectID;  /* offset: 0 */
} FW_DATA_UI_ICON;

/* Size: 180 bytes */
typedef struct _FW_DATA_UI_CHAT {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 168 */
    uint32_t dwParam2;  /* offset: 172 */
    uint32_t dwParam3;  /* offset: 176 */
} FW_DATA_UI_CHAT;

/* Size: 168 bytes */
typedef struct _FW_DATA_UI_LEAVE_MESSAGE {
    uint32_t dwHash;  /* offset: 0 */
    uint8_t wMesg;  /* offset: 4 */
    uint16_t wLen;  /* offset: 164 */
} FW_DATA_UI_LEAVE_MESSAGE;

/* Size: 8 bytes */
typedef struct _FW_DATA_UI_WINDOW {
    uint8_t byCmd;  /* offset: 0 */
    uint16_t wWindowID;  /* offset: 2 */
    uint32_t dwParam1;  /* offset: 4 */
} FW_DATA_UI_WINDOW;

/* Size: 4 bytes */
typedef struct _FW_DATA_UI_OPTIONS {
    uint32_t dwOptions;  /* offset: 0 */
} FW_DATA_UI_OPTIONS;

/* Size: 1 bytes */
typedef struct _FW_DATA_UI_TUTORIALTRADE_WINDOW {
    uint8_t byFlag;  /* offset: 0 */
} FW_DATA_UI_TUTORIALTRADE_WINDOW;

/* Size: 8 bytes */
typedef struct _FW_DATA_UI_TUTORIALTRADE_SLOT {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t bySlot;  /* offset: 4 */
    uint8_t byQuantity;  /* offset: 5 */
} FW_DATA_UI_TUTORIALTRADE_SLOT;

/* Size: 8 bytes */
typedef struct _FW_DATA_UI_TUTORIALTRADE_GOLD {
    uint32_t dwGold;  /* offset: 0 */
    uint8_t bySlot;  /* offset: 4 */
} FW_DATA_UI_TUTORIALTRADE_GOLD;

/* Size: 2 bytes */
typedef struct _FW_DATA_UI_TUTORIALTRADE_CHECK {
    uint8_t byFlag;  /* offset: 0 */
    uint8_t bySlot;  /* offset: 1 */
} FW_DATA_UI_TUTORIALTRADE_CHECK;

/* Size: 8 bytes */
typedef struct _FW_DATA_UI_CAMERA_COMMAND {
    uint8_t byCmd;  /* offset: 0 */
    uint32_t fParam1;  /* offset: 4 */
} FW_DATA_UI_CAMERA_COMMAND;

/* Size: 4 bytes */
typedef struct _FW_DATA_UI_TUTORIALBUY_ITEM {
    uint32_t dwItemID;  /* offset: 0 */
} FW_DATA_UI_TUTORIALBUY_ITEM;

/* Size: 48 bytes */
typedef struct _FW_DATA_UI_TUTORIALBUY_DATA {
    uint8_t dwItemA;  /* offset: 0 */
    uint8_t dwPriceA;  /* offset: 24 */
} FW_DATA_UI_TUTORIALBUY_DATA;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_AUCTION_REQ {
    uint32_t dwSetID;  /* offset: 0 */
} FW_DATA_ITEM_AUCTION_REQ;

/* Size: 168 bytes */
typedef struct _FW_DATA_ITEM_AUCTION_LIST {
    uint32_t dwSetID;  /* offset: 0 */
    uint8_t byCount;  /* offset: 4 */
    uint8_t byClear;  /* offset: 5 */
    uint64_t dwItemID;  /* offset: 96 */
    uint64_t dwIdx;  /* offset: 144 */
    uint32_t wHardnessString;  /* offset: 156 */
    uint64_t dwHardnessStringParam;  /* offset: 160 */
} FW_DATA_ITEM_AUCTION_LIST;

/* Size: 16 bytes */
typedef struct _FW_DATA_ITEM_AUCTION_BID {
    uint32_t dwSetID;  /* offset: 0 */
    uint32_t dwIndex;  /* offset: 4 */
    uint32_t dwItemID;  /* offset: 8 */
    uint32_t dwGold;  /* offset: 12 */
} FW_DATA_ITEM_AUCTION_BID;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_AUCTION_AUCTION {
    uint32_t dwSetID;  /* offset: 0 */
    uint32_t dwGold;  /* offset: 4 */
} FW_DATA_ITEM_AUCTION_AUCTION;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_AUCTION_COLLECT {
    uint32_t dwSetID;  /* offset: 0 */
} FW_DATA_ITEM_AUCTION_COLLECT;

/* Size: 24 bytes */
typedef struct _FW_DATA_ITEM_MANIPULATE {
    uint32_t dwEntityID;  /* offset: 0 */
    uint32_t dwFromID;  /* offset: 4 */
    uint32_t dwItemID;  /* offset: 8 */
    uint16_t wQuantity;  /* offset: 12 */
    uint8_t byLocationTo;  /* offset: 14 */
    uint8_t byLocationFrom;  /* offset: 15 */
    uint8_t byIdentified;  /* offset: 16 */
    uint16_t wReserved;  /* offset: 18 */
    uint8_t byReserved;  /* offset: 20 */
} FW_DATA_ITEM_MANIPULATE;

/* Size: 12 bytes */
typedef struct _FW_DATA_ITEM_ACTIVATE {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint8_t byLocation;  /* offset: 8 */
} FW_DATA_ITEM_ACTIVATE;

/* Size: 16 bytes */
typedef struct _FW_DATA_ITEM_GOLD {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwFromID;  /* offset: 4 */
    uint32_t dwQuantity;  /* offset: 8 */
    uint8_t byLocationTo;  /* offset: 12 */
    uint8_t byLocationFrom;  /* offset: 13 */
} FW_DATA_ITEM_GOLD;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_TRADE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
} FW_DATA_ITEM_TRADE;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_TRADEAGREE {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byAgree;  /* offset: 4 */
} FW_DATA_ITEM_TRADEAGREE;

/* Size: 40 bytes */
typedef struct _FW_DATA_ITEM_BUYLIST {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint8_t dwItemA;  /* offset: 8 */
    uint8_t byItemQuantityA;  /* offset: 32 */
    uint8_t byCount;  /* offset: 38 */
    uint8_t byReserved;  /* offset: 39 */
} FW_DATA_ITEM_BUYLIST;

/* Size: 64 bytes */
typedef struct _FW_DATA_ITEM_SELLLIST {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint8_t dwItemA;  /* offset: 8 */
    uint8_t dwItemLocationA;  /* offset: 32 */
    uint8_t byItemQuantityA;  /* offset: 56 */
    uint8_t byCount;  /* offset: 62 */
    uint8_t byReserved;  /* offset: 63 */
} FW_DATA_ITEM_SELLLIST;

/* Size: 56 bytes */
typedef struct _FW_DATA_ITEM_CRAFTLIST {
    uint8_t dwItemA;  /* offset: 0 */
    uint8_t dwItemLocationA;  /* offset: 24 */
    uint8_t byItemQuantityA;  /* offset: 48 */
    uint8_t byCount;  /* offset: 54 */
    uint8_t byReserved;  /* offset: 55 */
} FW_DATA_ITEM_CRAFTLIST;

/* Size: 84 bytes */
typedef struct _FW_DATA_ITEM_IDENTIFYLIST {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint8_t dwItemA;  /* offset: 8 */
    uint8_t dwItemLocationA;  /* offset: 32 */
    uint8_t byItemQuantityA;  /* offset: 56 */
    uint8_t byCount;  /* offset: 80 */
    uint8_t byReserved;  /* offset: 81 */
} FW_DATA_ITEM_IDENTIFYLIST;

/* Size: 456 bytes */
typedef struct _FW_DATA_ITEM_MERCHANTINV {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t dwPriceA;  /* offset: 204 */
} FW_DATA_ITEM_MERCHANTINV;

/* Size: 12 bytes */
typedef struct _FW_DATA_ITEM_TAGITEM {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint8_t byCount;  /* offset: 8 */
    uint8_t byLocation;  /* offset: 9 */
    uint16_t wReserved;  /* offset: 10 */
} FW_DATA_ITEM_TAGITEM;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_TAGGOLD {
    uint32_t dwTargetID;  /* offset: 0 */
    uint32_t dwGold;  /* offset: 4 */
} FW_DATA_ITEM_TAGGOLD;

/* Size: 88 bytes */
typedef struct _FW_DATA_ITEM_TAGLIST {
    uint32_t dwCharID1;  /* offset: 0 */
    uint32_t dwCharID2;  /* offset: 4 */
    uint32_t dwGold1;  /* offset: 8 */
    uint32_t dwGold2;  /* offset: 12 */
    uint8_t dwItem1A;  /* offset: 16 */
    uint8_t dwItem2A;  /* offset: 40 */
    uint8_t byQuantity1A;  /* offset: 64 */
    uint8_t byQuantity2A;  /* offset: 70 */
    uint8_t byLocation1A;  /* offset: 76 */
    uint8_t byLocation2A;  /* offset: 82 */
} FW_DATA_ITEM_TAGLIST;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_MOUSESLOT {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t byQuantity;  /* offset: 4 */
    uint8_t byIdentified;  /* offset: 5 */
} FW_DATA_ITEM_MOUSESLOT;

/* Size: 108 bytes */
typedef struct _FW_DATA_ITEM_CONTAINER {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byQuantity;  /* offset: 68 */
    uint8_t byIdentified;  /* offset: 84 */
    uint8_t byCloseFlag;  /* offset: 100 */
    uint8_t byTab;  /* offset: 101 */
    uint32_t dwGold;  /* offset: 104 */
} FW_DATA_ITEM_CONTAINER;

/* Size: 36 bytes */
typedef struct _FW_DATA_ITEM_SIDEPOCKET {
    uint8_t dwItemID;  /* offset: 0 */
    uint8_t byQuantity;  /* offset: 24 */
    uint8_t byIdentified;  /* offset: 30 */
} FW_DATA_ITEM_SIDEPOCKET;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_GENERATE_TREASURE {
    uint32_t dwObjID;  /* offset: 0 */
    uint16_t wTreasureID;  /* offset: 4 */
    uint8_t byFlag;  /* offset: 6 */
} FW_DATA_ITEM_GENERATE_TREASURE;

/* Size: 12 bytes */
typedef struct _FW_DATA_ITEM_BUY {
    uint32_t dwMerchantID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint8_t byReserved;  /* offset: 8 */
} FW_DATA_ITEM_BUY;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_SELL {
    uint32_t dwMerchantID;  /* offset: 0 */
} FW_DATA_ITEM_SELL;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_APPRAISE {
    uint32_t dwMerchantID;  /* offset: 0 */
} FW_DATA_ITEM_APPRAISE;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_IDENTIFY {
    uint32_t dwMerchantID;  /* offset: 0 */
} FW_DATA_ITEM_IDENTIFY;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_CRAFTING {
    uint32_t dwItemID;  /* offset: 0 */
} FW_DATA_ITEM_CRAFTING;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_EVALUATE {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t byLocation;  /* offset: 4 */
} FW_DATA_ITEM_EVALUATE;

/* Size: 48 bytes */
typedef struct _FW_DATA_ITEM_EVALUATED {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t dwComponentIDA;  /* offset: 4 */
    uint16_t wDurabilityString;  /* offset: 24 */
    uint16_t wHardnessString;  /* offset: 26 */
    uint32_t dwDurabilityStringParam;  /* offset: 28 */
    uint32_t dwHardnessStringParam;  /* offset: 32 */
    uint8_t byComponentCount;  /* offset: 36 */
    uint8_t byIdentified;  /* offset: 37 */
    uint32_t dwSetID;  /* offset: 40 */
    uint8_t byLevel;  /* offset: 44 */
    uint8_t byMaxLevel;  /* offset: 45 */
    uint16_t wDecayString;  /* offset: 46 */
} FW_DATA_ITEM_EVALUATED;

/* Size: 48 bytes */
typedef struct _FW_DATA_ITEM_TRADEDATA {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t dwItemA;  /* offset: 4 */
    uint32_t dwTradeGold;  /* offset: 28 */
    uint8_t byQuantityA;  /* offset: 32 */
    uint8_t byIdentifiedA;  /* offset: 38 */
    uint8_t byTradeAgree;  /* offset: 44 */
} FW_DATA_ITEM_TRADEDATA;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_CURRENT_WEIGHT {
    uint16_t wCurWeight;  /* offset: 0 */
    uint16_t wMaxWeight;  /* offset: 2 */
} FW_DATA_ITEM_CURRENT_WEIGHT;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_SETITEM {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t byQuantity;  /* offset: 4 */
    uint8_t byLocation;  /* offset: 5 */
    uint8_t byFlags;  /* offset: 6 */
} FW_DATA_ITEM_SETITEM;

/* Size: 16 bytes */
typedef struct _FW_DATA_ITEM_SETITEM2 {
    uint64_t dwItemIDA;  /* offset: 0 */
    uint16_t byLocationA;  /* offset: 10 */
    uint16_t byFlagsA;  /* offset: 12 */
} FW_DATA_ITEM_SETITEM2;

/* Size: 2 bytes */
typedef struct _FW_DATA_ITEM_SLOTCLICKED {
    uint8_t byLocation;  /* offset: 0 */
    uint8_t byFlags;  /* offset: 1 */
} FW_DATA_ITEM_SLOTCLICKED;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_IDENTIFYPRICE {
    uint32_t dwGold;  /* offset: 0 */
} FW_DATA_ITEM_IDENTIFYPRICE;

/* Size: 12 bytes */
typedef struct _FW_DATA_ITEM_BREAK {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint32_t bySlotNum;  /* offset: 8 */
} FW_DATA_ITEM_BREAK;

/* Size: 2 bytes */
typedef struct _FW_DATA_ITEM_BREAKICON {
    uint8_t byItemType;  /* offset: 0 */
    uint8_t byOn;  /* offset: 1 */
} FW_DATA_ITEM_BREAKICON;

/* Size: 464 bytes */
typedef struct _FW_DATA_ITEM_CLANUPGRADEINV {
    uint32_t dwType;  /* offset: 456 */
    uint32_t dwLocID;  /* offset: 460 */
} FW_DATA_ITEM_CLANUPGRADEINV;

/* Size: 12 bytes */
typedef struct _FW_DATA_ITEM_BUYCLANUPGRADE {
    uint32_t dwType;  /* offset: 0 */
    uint32_t dwLocID;  /* offset: 4 */
    uint32_t dwUpgradeID;  /* offset: 8 */
} FW_DATA_ITEM_BUYCLANUPGRADE;

/* Size: 20 bytes */
typedef struct _FW_DATA_GEN_EFFECT {
    uint32_t dwEffectID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint32_t x;  /* offset: 8 */
    uint32_t y;  /* offset: 12 */
    uint32_t z;  /* offset: 16 */
} FW_DATA_GEN_EFFECT;

/* Size: 4 bytes */
typedef struct _FW_DATA_GEN_EFFECTID {
    uint32_t dwEffectID;  /* offset: 0 */
} FW_DATA_GEN_EFFECTID;

/* Size: 16 bytes */
typedef struct _FW_DATA_GEN_STRING {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
} FW_DATA_GEN_STRING;

/* Size: 144 bytes */
typedef struct _FW_DATA_GEN_NPCMESSAGE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwLabel;  /* offset: 4 */
    uint8_t wMsgStrID;  /* offset: 8 */
    uint8_t dwVar1;  /* offset: 28 */
    uint8_t dwVar2;  /* offset: 68 */
    uint8_t wOptID;  /* offset: 126 */
} FW_DATA_GEN_NPCMESSAGE;

/* Size: 216 bytes */
typedef struct _FW_DATA_GEN_NPCMESSAGE_1 {
    uint8_t dwOptVar2;  /* offset: 180 */
} FW_DATA_GEN_NPCMESSAGE_1;

/* Size: 1 bytes */
typedef struct _FW_DATA_GEN_WEATHER {
    uint8_t byWeatherID;  /* offset: 0 */
} FW_DATA_GEN_WEATHER;

/* Size: 8 bytes */
typedef struct _FW_DATA_GEN_GAMETIME {
    uint32_t fGameTime;  /* offset: 0 */
    uint32_t fTimeSpeed;  /* offset: 4 */
} FW_DATA_GEN_GAMETIME;

/* Size: 1 bytes */
typedef struct _FW_DATA_GEN_ACTION {
    uint8_t byAction;  /* offset: 0 */
} FW_DATA_GEN_ACTION;

/* Size: 4 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR0 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 2 */
} FW_DATA_GEN_STRING_VAR0;

/* Size: 12 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR1 {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam;  /* offset: 4 */
    uint8_t byType;  /* offset: 8 */
} FW_DATA_GEN_STRING_VAR1;

/* Size: 16 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR2 {
    uint16_t wStringID;  /* offset: 0 */
    uint64_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 12 */
} FW_DATA_GEN_STRING_VAR2;

/* Size: 20 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR3 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 16 */
} FW_DATA_GEN_STRING_VAR3;

/* Size: 24 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR4 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 20 */
} FW_DATA_GEN_STRING_VAR4;

/* Size: 28 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR5 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 24 */
} FW_DATA_GEN_STRING_VAR5;

/* Size: 32 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR6 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 28 */
} FW_DATA_GEN_STRING_VAR6;

/* Size: 36 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR7 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 32 */
} FW_DATA_GEN_STRING_VAR7;

/* Size: 40 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR8 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 36 */
} FW_DATA_GEN_STRING_VAR8;

/* Size: 44 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR9 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 40 */
} FW_DATA_GEN_STRING_VAR9;

/* Size: 48 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR10 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 44 */
} FW_DATA_GEN_STRING_VAR10;

/* Size: 52 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR11 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 48 */
} FW_DATA_GEN_STRING_VAR11;

/* Size: 56 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR12 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 52 */
} FW_DATA_GEN_STRING_VAR12;

/* Size: 60 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR13 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 56 */
} FW_DATA_GEN_STRING_VAR13;

/* Size: 64 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR14 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 60 */
} FW_DATA_GEN_STRING_VAR14;

/* Size: 68 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR15 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 64 */
} FW_DATA_GEN_STRING_VAR15;

/* Size: 72 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR16 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 68 */
} FW_DATA_GEN_STRING_VAR16;

/* Size: 8 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI3 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 6 */
} FW_DATA_GEN_STRINGS_MULTI3;

/* Size: 10 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI4 {
    uint64_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 8 */
} FW_DATA_GEN_STRINGS_MULTI4;

/* Size: 12 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI5 {
    uint8_t byType;  /* offset: 10 */
} FW_DATA_GEN_STRINGS_MULTI5;

/* Size: 14 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI6 {
    uint8_t byType;  /* offset: 12 */
} FW_DATA_GEN_STRINGS_MULTI6;

/* Size: 16 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI7 {
    uint8_t byType;  /* offset: 14 */
} FW_DATA_GEN_STRINGS_MULTI7;

/* Size: 18 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI8 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 16 */
} FW_DATA_GEN_STRINGS_MULTI8;

/* Size: 20 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI9 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 18 */
} FW_DATA_GEN_STRINGS_MULTI9;

/* Size: 22 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI10 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 20 */
} FW_DATA_GEN_STRINGS_MULTI10;

/* Size: 56 bytes */
typedef struct _FW_DATA_GEN_BUFFERSTRING {
    uint8_t wBufferA;  /* offset: 0 */
    uint16_t wStringID;  /* offset: 40 */
    uint32_t dwParam1;  /* offset: 44 */
    uint32_t dwParam2;  /* offset: 48 */
    uint8_t byType;  /* offset: 52 */
} FW_DATA_GEN_BUFFERSTRING;

/* Size: 12 bytes */
typedef struct _FW_DATA_GEN_EMOTE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint16_t wEmote;  /* offset: 8 */
} FW_DATA_GEN_EMOTE;

/* Size: 8 bytes */
typedef struct _FW_DATA_GEN_CONSTEFFECTS {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwEffects;  /* offset: 4 */
} FW_DATA_GEN_CONSTEFFECTS;

/* Size: 4 bytes */
typedef struct _FW_DATA_SKILL_ACTIVATE {
    uint32_t dwTargetID;  /* offset: 0 */
} FW_DATA_SKILL_ACTIVATE;

/* Size: 8 bytes */
typedef struct _FW_DATA_SKILL_RANK {
    uint32_t dwPlayerID;  /* offset: 0 */
    uint8_t bySkill;  /* offset: 4 */
    uint8_t byRank;  /* offset: 5 */
} FW_DATA_SKILL_RANK;

/* Size: 36 bytes */
typedef struct _FW_DATA_SKILL_ITEMCRAFT {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t dwComponentsA;  /* offset: 4 */
    uint16_t wCurSkillRank;  /* offset: 28 */
    uint16_t wReqSkillRank;  /* offset: 30 */
    uint8_t byMaxComponents;  /* offset: 32 */
} FW_DATA_SKILL_ITEMCRAFT;

/* Size: 40 bytes */
typedef struct _FW_DATA_SKILL_WEAPONCRAFT {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwWeaponID;  /* offset: 4 */
    uint8_t dwComponentsA;  /* offset: 8 */
    uint16_t wCurSkillRank;  /* offset: 32 */
    uint16_t wReqSkillRank;  /* offset: 34 */
    uint8_t byMaxComponents;  /* offset: 36 */
} FW_DATA_SKILL_WEAPONCRAFT;

/* Size: 4 bytes */
typedef struct _FW_DATA_SKILL_RESUSCITATE {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_SKILL_RESUSCITATE;

/* Size: 1 bytes */
typedef struct _FW_DATA_SKILL_REPAIRITEMS {
    uint8_t bySlotID;  /* offset: 0 */
} FW_DATA_SKILL_REPAIRITEMS;

/* Size: 16 bytes */
typedef struct _FW_DATA_SKILL_GUARDOFFER {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wLevel;  /* offset: 4 */
    uint16_t wRank;  /* offset: 6 */
    uint32_t dwOldCharID;  /* offset: 8 */
    uint16_t wOldLevel;  /* offset: 12 */
    uint16_t wOldRank;  /* offset: 14 */
} FW_DATA_SKILL_GUARDOFFER;

/* Size: 8 bytes */
typedef struct _FW_DATA_SKILL_GUARDRANGE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwRange;  /* offset: 4 */
} FW_DATA_SKILL_GUARDRANGE;

/* Size: 8 bytes */
typedef struct _FW_DATA_SKILL_GUARDACCEPTREJECT {
    uint32_t dwGuardID;  /* offset: 0 */
    uint32_t dwGuardedID;  /* offset: 4 */
} FW_DATA_SKILL_GUARDACCEPTREJECT;

/* Size: 364 bytes */
typedef struct _FW_DATA_RELATION_CLANACTIVITY_LOG {
    uint32_t dwClanID;  /* offset: 0 */
    uint8_t dwTime;  /* offset: 4 */
    uint8_t wStringID;  /* offset: 84 */
    uint8_t dwData1;  /* offset: 124 */
    uint8_t dwData2;  /* offset: 204 */
    uint8_t dwData3;  /* offset: 284 */
} FW_DATA_RELATION_CLANACTIVITY_LOG;

/* Size: 344 bytes */
typedef struct _FW_DATA_RELATION_PRESTIGE_LOG {
    uint32_t dwClanID;  /* offset: 0 */
    uint8_t dwEntityID;  /* offset: 4 */
    uint8_t wReason;  /* offset: 84 */
    uint8_t dwTime;  /* offset: 164 */
    uint8_t dwData;  /* offset: 244 */
} FW_DATA_RELATION_PRESTIGE_LOG;

/* Size: 84 bytes */
typedef struct _FW_DATA_RELATION_HALL_TOPPK {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t dwRedPointsA;  /* offset: 40 */
    uint8_t byCount;  /* offset: 80 */
} FW_DATA_RELATION_HALL_TOPPK;

/* Size: 84 bytes */
typedef struct _FW_DATA_RELATION_WARDECLARE {
    uint8_t dwID;  /* offset: 0 */
    uint8_t byData;  /* offset: 80 */
    uint8_t byCount;  /* offset: 81 */
} FW_DATA_RELATION_WARDECLARE;

/* Size: 348 bytes */
typedef struct _FW_DATA_RELATION_WARLIST {
    uint8_t dwWarEventID;  /* offset: 0 */
    uint8_t dwAttID;  /* offset: 80 */
    uint8_t dwDefID;  /* offset: 160 */
    uint8_t dwResData;  /* offset: 240 */
    uint8_t byType;  /* offset: 320 */
    uint32_t dwData;  /* offset: 340 */
    uint8_t byCount;  /* offset: 344 */
} FW_DATA_RELATION_WARLIST;

/* Size: 16 bytes */
typedef struct _FW_DATA_RELATION_GENERIC {
    uint32_t dwInviterID;  /* offset: 0 */
    uint32_t dwInviteeID;  /* offset: 4 */
    uint32_t dwRelationID;  /* offset: 8 */
    uint8_t byMsgType;  /* offset: 12 */
} FW_DATA_RELATION_GENERIC;

/* Size: 2 bytes */
typedef struct _FW_DATA_RELATION_CLAN_BOUNTY {
    uint16_t wGold;  /* offset: 0 */
} FW_DATA_RELATION_CLAN_BOUNTY;

/* Size: 4 bytes */
typedef struct _FW_DATA_RELATION_CLAN_GENERIC {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_RELATION_CLAN_GENERIC;

/* Size: 2 bytes */
typedef struct _FW_DATA_RELATION_CLAN_VOTE {
    uint8_t byVoteID;  /* offset: 0 */
    uint8_t byVote;  /* offset: 1 */
} FW_DATA_RELATION_CLAN_VOTE;

/* Size: 476 bytes */
typedef struct _FW_DATA_RELATION_CLAN_MEMBERLIST {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t wRankA;  /* offset: 440 */
    uint8_t byCount;  /* offset: 470 */
    uint16_t wIndex;  /* offset: 472 */
    uint16_t wTotal;  /* offset: 474 */
} FW_DATA_RELATION_CLAN_MEMBERLIST;

/* Size: 484 bytes */
typedef struct _FW_DATA_RELATION_CLAN_MEMBERLIST_INITIAL {
    uint16_t wClanName;  /* offset: 476 */
    uint32_t dwPrestige;  /* offset: 480 */
} FW_DATA_RELATION_CLAN_MEMBERLIST_INITIAL;

/* Size: 140 bytes */
typedef struct _FW_DATA_RELATION_GUILD_LIST {
    uint8_t byCount;  /* offset: 132 */
    uint16_t wIndex;  /* offset: 134 */
    uint16_t wTotal;  /* offset: 136 */
} FW_DATA_RELATION_GUILD_LIST;

/* Size: 160 bytes */
typedef struct _FW_DATA_GUILD_LIST_INITIAL {
    uint16_t wClanName;  /* offset: 140 */
    uint32_t dwPrestige;  /* offset: 144 */
    uint16_t wJobStr;  /* offset: 148 */
    uint32_t dwMyGuildID;  /* offset: 152 */
    uint16_t wMyNameStr;  /* offset: 156 */
} FW_DATA_GUILD_LIST_INITIAL;

/* Size: 76 bytes */
typedef struct _FW_DATA_RELATION_GUILD_MEMBERLIST {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t wRankA;  /* offset: 40 */
    uint8_t byStatus;  /* offset: 60 */
    uint8_t byCount;  /* offset: 70 */
    uint16_t wIndex;  /* offset: 72 */
    uint16_t wTotal;  /* offset: 74 */
} FW_DATA_RELATION_GUILD_MEMBERLIST;

/* Size: 88 bytes */
typedef struct _FW_DATA_RELATION_GUILD_MEMBERLIST_INITIAL {
    uint32_t dwGuildID;  /* offset: 76 */
    uint16_t wNameStr;  /* offset: 80 */
    uint32_t dwPrestige;  /* offset: 84 */
} FW_DATA_RELATION_GUILD_MEMBERLIST_INITIAL;

/* Size: 140 bytes */
typedef struct _FW_DATA_RELATION_GUILD_OFFICERLIST {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t wRankA;  /* offset: 40 */
    uint8_t byStatus;  /* offset: 60 */
    uint8_t wNameStr;  /* offset: 70 */
    uint8_t dwGuildID;  /* offset: 92 */
    uint8_t byCount;  /* offset: 132 */
    uint16_t wIndex;  /* offset: 134 */
    uint16_t wTotal;  /* offset: 136 */
} FW_DATA_RELATION_GUILD_OFFICERLIST;

/* Size: 152 bytes */
typedef struct _FW_DATA_RELATION_GUILD_OFFICERLIST_INITIAL {
    uint32_t dwMyGuildID;  /* offset: 140 */
    uint16_t wMyNameStr;  /* offset: 144 */
    uint32_t dwPrestige;  /* offset: 148 */
} FW_DATA_RELATION_GUILD_OFFICERLIST_INITIAL;

/* Size: 48 bytes */
typedef struct _FW_DATA_RELATION_CLAN_VOTELIST {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wIssueTopicString;  /* offset: 4 */
    uint8_t wCharNameA;  /* offset: 6 */
    uint8_t byIssueID;  /* offset: 46 */
    uint8_t byTotalVotes;  /* offset: 47 */
} FW_DATA_RELATION_CLAN_VOTELIST;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_CLAN_GENERIC_NEW {
    uint8_t byCmdType;  /* offset: 0 */
    uint32_t dwData;  /* offset: 4 */
} FW_DATA_RELATION_CLAN_GENERIC_NEW;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_CLAN_RANK {
    uint8_t byCmdType;  /* offset: 0 */
    uint8_t byRank;  /* offset: 1 */
    uint32_t dwData;  /* offset: 4 */
} FW_DATA_RELATION_CLAN_RANK;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_CLAN_BOUNTY_NEW {
    uint8_t byCmdType;  /* offset: 0 */
    uint16_t wGold;  /* offset: 2 */
    uint32_t dwData;  /* offset: 4 */
} FW_DATA_RELATION_CLAN_BOUNTY_NEW;

/* Size: 448 bytes */
typedef struct _FW_DATA_RELATION_CLAN_BARLIST {
    uint8_t wNameA;  /* offset: 0 */
    uint8_t dwID;  /* offset: 400 */
    uint8_t byCount;  /* offset: 440 */
    uint16_t wIndex;  /* offset: 442 */
    uint16_t wTotal;  /* offset: 444 */
} FW_DATA_RELATION_CLAN_BARLIST;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_BROTHERKICK {
    uint32_t dwID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
} FW_DATA_RELATION_BROTHERKICK;

/* Size: 16 bytes */
typedef struct _FW_DATA_RELATION_CLAN_UPDATE {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwGuildID;  /* offset: 4 */
    uint16_t wClanStrID;  /* offset: 8 */
    uint16_t wJobStrID;  /* offset: 10 */
    uint8_t byFlags;  /* offset: 12 */
} FW_DATA_RELATION_CLAN_UPDATE;

/* Size: 44 bytes */
typedef struct _FW_DATA_RELATION_GUILDNAME {
    uint32_t dwGuildID;  /* offset: 0 */
    uint8_t wNameA;  /* offset: 4 */
} FW_DATA_RELATION_GUILDNAME;

/* Size: 40 bytes */
typedef struct _FW_DATA_RELATION_GUILD_CREATE {
    uint8_t wNameA;  /* offset: 0 */
} FW_DATA_RELATION_GUILD_CREATE;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_TRANSFERHALL {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwHallID;  /* offset: 4 */
} FW_DATA_RELATION_TRANSFERHALL;

/* Size: 12 bytes */
typedef struct _FW_DATA_RELATION_TRANSFEROFFER {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwHallID;  /* offset: 4 */
    uint16_t wNameStr;  /* offset: 8 */
} FW_DATA_RELATION_TRANSFEROFFER;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_TRANSFERACCEPT {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwHallID;  /* offset: 4 */
} FW_DATA_RELATION_TRANSFERACCEPT;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_CLAN_TREASURY {
    uint32_t dwAmount;  /* offset: 0 */
    uint8_t byFlag;  /* offset: 4 */
} FW_DATA_RELATION_CLAN_TREASURY;

/* Size: 12 bytes */
typedef struct _FW_DATA_SCRIPT_GEN_DATA {
    uint32_t dwLabel;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwObjID;  /* offset: 8 */
} FW_DATA_SCRIPT_GEN_DATA;

/* Size: 12 bytes */
typedef struct _FW_DATA_SCRIPT_USE {
    uint32_t dwLabel;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwObjID;  /* offset: 8 */
} FW_DATA_SCRIPT_USE;

/* Size: 4 bytes */
typedef struct _FW_DATA_SCRIPT_COLLISION_BOX {
    uint32_t dwLabel;  /* offset: 0 */
} FW_DATA_SCRIPT_COLLISION_BOX;

/* Size: 16 bytes */
typedef struct _FW_DATA_SCRIPT_TALK {
    uint32_t dwLabel;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwObjID;  /* offset: 8 */
    uint16_t wIndex;  /* offset: 12 */
    uint16_t wReserved;  /* offset: 14 */
} FW_DATA_SCRIPT_TALK;

/* Size: 12 bytes */
typedef struct _FW_DATA_CLIENTREC_GUILD_INFO {
    uint16_t wClanID;  /* offset: 0 */
    uint32_t dwPrestige;  /* offset: 4 */
    uint32_t dwGuildID;  /* offset: 8 */
} FW_DATA_CLIENTREC_GUILD_INFO;

/* Size: 16 bytes */
typedef struct _FW_DATA_CLIENTREC_WHOIS {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wNameStr;  /* offset: 4 */
    uint32_t dwPKPoints;  /* offset: 8 */
    uint16_t wJob;  /* offset: 12 */
} FW_DATA_CLIENTREC_WHOIS;

/* Size: 372 bytes */
typedef struct _FW_DATA_CLIENTREC_CLAN_INFO {
    uint16_t wClanID;  /* offset: 0 */
    uint32_t dwPrestige;  /* offset: 4 */
    uint32_t dwGold;  /* offset: 8 */
    uint8_t byWarStatus;  /* offset: 12 */
    uint8_t bySecStatus;  /* offset: 32 */
    uint8_t dwStartTime;  /* offset: 52 */
    uint8_t dwTimeToStart;  /* offset: 132 */
    uint8_t dwEndTime;  /* offset: 212 */
    uint8_t dwTimeToEnd;  /* offset: 292 */
} FW_DATA_CLIENTREC_CLAN_INFO;

/* Size: 148 bytes */
typedef struct _FW_DATA_CLIENTREC_WAR_EVENTS {
    uint8_t byNumEvents;  /* offset: 0 */
    uint8_t dwAID;  /* offset: 4 */
    uint8_t dwDID;  /* offset: 44 */
    uint8_t dwTime;  /* offset: 84 */
    uint8_t byType;  /* offset: 124 */
    uint8_t byState;  /* offset: 134 */
    uint8_t byClanFlag;  /* offset: 144 */
} FW_DATA_CLIENTREC_WAR_EVENTS;

/* Size: 102 bytes */
typedef struct _FW_DATA_CLIENTREC_CHAIN_POWERS {
    uint8_t byNumChainPowers;  /* offset: 0 */
} FW_DATA_CLIENTREC_CHAIN_POWERS;

/* Size: 4 bytes */
typedef struct _FW_DATA_CLIENTREQ_CHAR {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_CLIENTREQ_CHAR;

/* Size: 52 bytes */
typedef struct _FW_DATA_CLIENTREC_CHAR {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wHitPoints;  /* offset: 4 */
    uint8_t wNameA;  /* offset: 6 */
    uint8_t byClanID;  /* offset: 46 */
    uint8_t byClanStatus;  /* offset: 47 */
    uint16_t wLevel;  /* offset: 48 */
} FW_DATA_CLIENTREC_CHAR;

/* Size: 188 bytes */
typedef struct _FW_DATA_CLIENTREC_VOTES {
    uint32_t dwClanID;  /* offset: 0 */
    uint32_t dwSubject;  /* offset: 4 */
    uint32_t dwVote1;  /* offset: 8 */
    uint32_t dwVote2;  /* offset: 12 */
    uint32_t dwVote3;  /* offset: 16 */
    uint32_t dwVote4;  /* offset: 20 */
    uint8_t wName1;  /* offset: 24 */
    uint8_t wName2;  /* offset: 64 */
    uint8_t wName3;  /* offset: 104 */
    uint8_t wName4;  /* offset: 144 */
    uint8_t byAction;  /* offset: 184 */
} FW_DATA_CLIENTREC_VOTES;

/* Size: 44 bytes */
typedef struct _FW_DATA_CLIENTREC_NAME {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t wNameA;  /* offset: 4 */
} FW_DATA_CLIENTREC_NAME;

/* Size: 8 bytes */
typedef struct _FW_DATA_CLIENTREQ_CONTAINER {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwContainerID;  /* offset: 4 */
} FW_DATA_CLIENTREQ_CONTAINER;

/* Size: 8 bytes */
typedef struct _FW_DATA_CLIENTREC_HITPOINTS {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wCurHitPoints;  /* offset: 4 */
    uint16_t wMaxHitPoints;  /* offset: 6 */
} FW_DATA_CLIENTREC_HITPOINTS;

/* Size: 52 bytes */
typedef struct _FW_DATA_CLIENTREC_PLAYERINFO_1 {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwModelID;  /* offset: 4 */
    uint32_t dwFlags;  /* offset: 8 */
    uint32_t dwStanceID;  /* offset: 12 */
    uint32_t dwWeaponID;  /* offset: 16 */
    uint32_t dwReadyWeapon;  /* offset: 20 */
    uint32_t dwGuildID;  /* offset: 24 */
    uint8_t wAttachmentsA;  /* offset: 28 */
    uint16_t wClanID;  /* offset: 48 */
    uint8_t byState;  /* offset: 50 */
} FW_DATA_CLIENTREC_PLAYERINFO_1;

/* Size: 92 bytes */
typedef struct _FW_DATA_CLIENTREC_PLAYERINFO {
    uint8_t wNameA;  /* offset: 52 */
} FW_DATA_CLIENTREC_PLAYERINFO;

/* Size: 36 bytes */
typedef struct _FW_DATA_CLIENTREC_NPCINFO {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTypeID;  /* offset: 4 */
    uint32_t dwCategory;  /* offset: 8 */
    uint32_t dwStanceID;  /* offset: 12 */
    uint32_t dwWeaponID;  /* offset: 16 */
    uint32_t dwLabel;  /* offset: 20 */
    uint32_t dwNameID;  /* offset: 24 */
    uint16_t wClanID;  /* offset: 28 */
    uint8_t byMoveRate;  /* offset: 30 */
    uint8_t byState;  /* offset: 31 */
    uint8_t byHalfMoveRate;  /* offset: 32 */
} FW_DATA_CLIENTREC_NPCINFO;

/* Size: 12 bytes */
typedef struct _FW_DATA_CLIENTREC_OBJINFO {
    uint32_t dwObjID;  /* offset: 0 */
    uint32_t dwTypeID;  /* offset: 4 */
    uint32_t dwLabel;  /* offset: 8 */
} FW_DATA_CLIENTREC_OBJINFO;

/* Size: 60 bytes */
typedef struct _FW_DATA_CLIENTREC_SPECIALOBJINFO {
    uint32_t dwObjID;  /* offset: 0 */
    uint32_t dwTypeID;  /* offset: 4 */
    uint32_t dwLabel;  /* offset: 8 */
    uint32_t dwFlags;  /* offset: 12 */
    uint32_t dwAnimation;  /* offset: 16 */
    uint8_t dwReserved;  /* offset: 20 */
} FW_DATA_CLIENTREC_SPECIALOBJINFO;

/* Size: 252 bytes */
typedef struct _FW_DATA_CLIENTREC_PCDATA {
    uint16_t wCurHitPoints;  /* offset: 0 */
    uint16_t wMaxHitPoints;  /* offset: 2 */
    uint16_t wCurChiPoints;  /* offset: 4 */
    uint16_t wMaxChiPoints;  /* offset: 6 */
    uint32_t dwFlags;  /* offset: 8 */
    uint32_t dwMouseSlot;  /* offset: 12 */
    uint32_t dwReadyWeapon;  /* offset: 16 */
    uint8_t wAttachmentsA;  /* offset: 220 */
    uint8_t byMouseSlotQuantity;  /* offset: 240 */
    uint8_t byMouseSlotIdent;  /* offset: 241 */
    uint8_t byAttackMode;  /* offset: 242 */
    uint8_t byMovementMode;  /* offset: 243 */
    uint8_t byWeather;  /* offset: 244 */
    uint8_t byXPPercent;  /* offset: 245 */
    uint32_t fGameTime;  /* offset: 248 */
} FW_DATA_CLIENTREC_PCDATA;

/* Size: 124 bytes */
typedef struct _FW_DATA_CLIENTREC_ATTRIBUTES {
    uint32_t dwXP;  /* offset: 0 */
    int16_t sFireResist;  /* offset: 4 */
    int16_t sColdResist;  /* offset: 6 */
    int16_t sPoisonResist;  /* offset: 8 */
    int16_t sLightnResist;  /* offset: 10 */
    int16_t sPhysResist;  /* offset: 12 */
    uint8_t wNameA;  /* offset: 14 */
    uint8_t byStr;  /* offset: 54 */
    uint8_t byBaseStr;  /* offset: 55 */
    uint8_t byPer;  /* offset: 56 */
    uint8_t byBasePer;  /* offset: 57 */
    uint8_t byAgl;  /* offset: 58 */
    uint8_t byBaseAgl;  /* offset: 59 */
    uint8_t byMin;  /* offset: 60 */
    uint8_t byBaseMin;  /* offset: 61 */
    uint8_t byCon;  /* offset: 62 */
    uint8_t byBaseCon;  /* offset: 63 */
    uint16_t wMaxChi;  /* offset: 64 */
    uint16_t wCurChi;  /* offset: 66 */
    uint16_t wMaxHP;  /* offset: 68 */
    uint16_t wCurHP;  /* offset: 70 */
    uint16_t wMinDmg;  /* offset: 72 */
    uint16_t wMaxDmg;  /* offset: 74 */
    uint16_t wMinFireDmg;  /* offset: 76 */
    uint16_t wMaxFireDmg;  /* offset: 78 */
    uint16_t wMinColdDmg;  /* offset: 80 */
    uint16_t wMaxColdDmg;  /* offset: 82 */
    uint16_t wMinPoisonDmg;  /* offset: 84 */
    uint16_t wMaxPoisonDmg;  /* offset: 86 */
    uint16_t wMinLightningDmg;  /* offset: 88 */
    uint16_t wMaxLightningDmg;  /* offset: 90 */
    uint16_t wAtt;  /* offset: 92 */
    uint16_t wDef;  /* offset: 94 */
    int16_t sPrestige;  /* offset: 96 */
    uint16_t wWeightAll;  /* offset: 98 */
    uint8_t wLevel;  /* offset: 100 */
    uint16_t wClanID;  /* offset: 102 */
    uint16_t wClanStatus;  /* offset: 104 */
    uint16_t wAttPoints;  /* offset: 106 */
    uint8_t byTemplate;  /* offset: 108 */
    uint32_t dwDuelScore;  /* offset: 112 */
    uint32_t dwHeroPoints;  /* offset: 116 */
    uint32_t dwRedPoints;  /* offset: 120 */
} FW_DATA_CLIENTREC_ATTRIBUTES;

/* Size: 116 bytes */
typedef struct _FW_DATA_CLIENTREC_INVENTORY {
    uint8_t byTab;  /* offset: 0 */
    uint8_t dwInvItemsA;  /* offset: 4 */
    uint8_t byInvIdentA;  /* offset: 100 */
} FW_DATA_CLIENTREC_INVENTORY;

/* Size: 164 bytes */
typedef struct _FW_DATA_CLIENTREC_INVENTORY_1 {
    uint32_t dwTorsoItem;  /* offset: 116 */
    uint32_t dwNeckItem;  /* offset: 120 */
    uint32_t dwArmItem;  /* offset: 124 */
    uint32_t dwFeetItem;  /* offset: 128 */
    uint32_t dwShoulderItem;  /* offset: 132 */
    uint32_t dwHeadItem;  /* offset: 136 */
    uint64_t dwRingItemA;  /* offset: 140 */
    uint32_t dwGold;  /* offset: 148 */
    uint32_t dwStashGold;  /* offset: 152 */
    uint16_t wCurWeight;  /* offset: 156 */
    uint16_t wMaxWeight;  /* offset: 158 */
    uint32_t dwReadyWeapon;  /* offset: 160 */
} FW_DATA_CLIENTREC_INVENTORY_1;

/* Size: 60 bytes */
typedef struct _FW_DATA_CLIENTREC_ABILITY {
    uint16_t wNum;  /* offset: 0 */
    uint16_t wCurIndex;  /* offset: 2 */
    uint16_t wPoints;  /* offset: 4 */
    uint8_t dwID;  /* offset: 8 */
    uint8_t byRank;  /* offset: 48 */
} FW_DATA_CLIENTREC_ABILITY;

/* Size: 8 bytes */
typedef struct _FW_DATA_CLIENTREC_TARGETDATA {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byHitPoints;  /* offset: 4 */
    uint8_t byClanRating;  /* offset: 5 */
} FW_DATA_CLIENTREC_TARGETDATA;

/* Size: 144 bytes */
typedef struct _FW_DATA_CLIENTREC_PARTYUPDATE {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t byHitPointsA;  /* offset: 40 */
    uint8_t byChiPointsA;  /* offset: 50 */
    uint8_t byCount;  /* offset: 140 */
} FW_DATA_CLIENTREC_PARTYUPDATE;

/* Size: 44 bytes */
typedef struct _FW_DATA_CLIENTREC_PARTY {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t byCount;  /* offset: 40 */
} FW_DATA_CLIENTREC_PARTY;

/* Size: 52 bytes */
typedef struct _FW_DATA_CLIENTREC_YOUNGERBROTHERS {
    uint8_t dwID;  /* offset: 0 */
    uint8_t byStatus;  /* offset: 40 */
    uint8_t byCount;  /* offset: 50 */
    uint8_t byTotal;  /* offset: 51 */
} FW_DATA_CLIENTREC_YOUNGERBROTHERS;

/* Size: 60 bytes */
typedef struct _FW_DATA_CLIENTREC_BROTHERHOOD {
    uint32_t dwElderBID;  /* offset: 52 */
    uint8_t byElderStatus;  /* offset: 56 */
} FW_DATA_CLIENTREC_BROTHERHOOD;

/* Size: 4 bytes */
typedef struct _FW_DATA_CLIENTREC_CLAN {
    uint32_t dwTemp;  /* offset: 0 */
} FW_DATA_CLIENTREC_CLAN;

/* Size: 156 bytes */
typedef struct _FW_DATA_CLIENTREC_QUEST {
    uint8_t wQuestString;  /* offset: 0 */
} FW_DATA_CLIENTREC_QUEST;

/* Size: 114 bytes */
typedef struct _FW_DATA_CLIENTREC_QUEST_STORY {
    uint16_t wNum;  /* offset: 0 */
    uint16_t wCurIndex;  /* offset: 2 */
    uint8_t wID;  /* offset: 4 */
    uint8_t wStringID;  /* offset: 48 */
} FW_DATA_CLIENTREC_QUEST_STORY;

/* Size: 448 bytes */
typedef struct _FW_DATA_CLIENTREC_IGNORELIST {
    uint8_t wNameA;  /* offset: 0 */
    uint8_t dwID;  /* offset: 400 */
    uint8_t byCount;  /* offset: 440 */
    uint16_t wIndex;  /* offset: 442 */
    uint16_t wTotal;  /* offset: 444 */
} FW_DATA_CLIENTREC_IGNORELIST;

/* Size: 60 bytes */
typedef struct _FW_DATA_CLIENTREC_FRIENDLIST {
    uint8_t byStatus;  /* offset: 0 */
    uint8_t dwID;  /* offset: 12 */
    uint8_t byCount;  /* offset: 52 */
    uint16_t wIndex;  /* offset: 54 */
    uint16_t wTotal;  /* offset: 56 */
} FW_DATA_CLIENTREC_FRIENDLIST;

/* Size: 68 bytes */
typedef struct _FW_DATA_CLIENTREC_WHO {
    uint8_t wLevel;  /* offset: 0 */
    uint8_t dwID;  /* offset: 20 */
    uint8_t byCount;  /* offset: 60 */
    uint16_t wIndex;  /* offset: 62 */
    uint16_t wTotal;  /* offset: 64 */
} FW_DATA_CLIENTREC_WHO;

/* Size: 408 bytes */
typedef struct _FW_DATA_CLIENTREC_PARTYFIND {
    uint8_t wLevel;  /* offset: 320 */
    uint8_t wStance;  /* offset: 336 */
    uint8_t wClan;  /* offset: 352 */
    uint8_t dwID;  /* offset: 368 */
    uint8_t byCount;  /* offset: 400 */
    uint16_t wIndex;  /* offset: 402 */
    uint16_t wTotal;  /* offset: 404 */
} FW_DATA_CLIENTREC_PARTYFIND;

/* Size: 448 bytes */
typedef struct _FW_DATA_CLIENTREC_GMWHO {
    uint8_t wNameA;  /* offset: 0 */
    uint8_t dwID;  /* offset: 400 */
    uint8_t byCount;  /* offset: 440 */
    uint16_t wIndex;  /* offset: 442 */
    uint16_t wTotal;  /* offset: 444 */
} FW_DATA_CLIENTREC_GMWHO;

/* Size: 80 bytes */
typedef struct _FW_DATA_CLIENTREC_ARENA_SCORE {
    uint8_t dwCharID;  /* offset: 0 */
    uint8_t dwScore;  /* offset: 40 */
} FW_DATA_CLIENTREC_ARENA_SCORE;

/* Size: 1104 bytes */
typedef struct _FW_DATA_CLIENTREC_GMHELPLIST {
    uint8_t dwCharID;  /* offset: 0 */
    uint8_t wLevel;  /* offset: 200 */
    uint8_t dwSceneID;  /* offset: 300 */
    uint8_t fY;  /* offset: 700 */
    uint8_t fZ;  /* offset: 900 */
    uint8_t byCount;  /* offset: 1100 */
} FW_DATA_CLIENTREC_GMHELPLIST;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_WHOIS {
    uint32_t dwNameHash;  /* offset: 0 */
} FW_DATA_GAMESVC_WHOIS;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_CHECK_WARSCORE {
    uint32_t dwIndex;  /* offset: 0 */
    uint16_t wAClanID;  /* offset: 4 */
    uint16_t wDClanID;  /* offset: 6 */
} FW_DATA_GAMESVC_CHECK_WARSCORE;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_DELETESPAWNNPCGRP {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwGrp;  /* offset: 4 */
} FW_DATA_GAMESVC_DELETESPAWNNPCGRP;

/* Size: 12 bytes */
typedef struct _FW_DATA_GAMESVC_RESETSPAWNGRPATTRIB {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwGrp;  /* offset: 4 */
    uint8_t byDeleteFlag;  /* offset: 8 */
} FW_DATA_GAMESVC_RESETSPAWNGRPATTRIB;

/* Size: 12 bytes */
typedef struct _FW_DATA_GAMESVC_RESET_SPAWNGRP {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwGrp;  /* offset: 4 */
    uint8_t byDeleteFlag;  /* offset: 8 */
} FW_DATA_GAMESVC_RESET_SPAWNGRP;

/* Size: 12 bytes */
typedef struct _FW_DATA_GAMESVC_RESET_SPAWNATTRIB {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwSpawnID;  /* offset: 4 */
    uint8_t byDeleteFlag;  /* offset: 8 */
} FW_DATA_GAMESVC_RESET_SPAWNATTRIB;

/* Size: 12 bytes */
typedef struct _FW_DATA_GAMESVC_SPAWNGRP {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwGrp;  /* offset: 4 */
    uint32_t dwAttribID;  /* offset: 8 */
} FW_DATA_GAMESVC_SPAWNGRP;

/* Size: 2 bytes */
typedef struct _FW_DATA_GAMESVC_CLAN_INFO {
    uint16_t wClanID;  /* offset: 0 */
} FW_DATA_GAMESVC_CLAN_INFO;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_AUCTION_REQ {
    uint32_t dwSetID;  /* offset: 0 */
} FW_DATA_GAMESVC_AUCTION_REQ;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_REQ_UNKNOWNID {
    uint32_t dwID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
} FW_DATA_GAMESVC_REQ_UNKNOWNID;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_TIME_SYNC {
    uint32_t dwTickCount;  /* offset: 0 */
    uint32_t fGameTime;  /* offset: 4 */
} FW_DATA_GAMESVC_TIME_SYNC;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_ZONE_OUT {
    uint32_t dwMapID;  /* offset: 0 */
    uint32_t dwSceneID;  /* offset: 4 */
} FW_DATA_GAMESVC_ZONE_OUT;

/* Size: 2 bytes */
typedef struct _FW_DATA_GAMESVC_LISTREQUEST {
    uint16_t wIndex;  /* offset: 0 */
} FW_DATA_GAMESVC_LISTREQUEST;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_GM_CLANLIST {
    uint16_t wIndex;  /* offset: 0 */
    uint16_t wClanID;  /* offset: 2 */
} FW_DATA_GAMESVC_GM_CLANLIST;

/* Size: 180 bytes */
typedef struct _FW_DATA_GAMESVC_CHAT {
    uint8_t wMesg;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 160 */
    uint32_t dwParam2;  /* offset: 164 */
    uint32_t dwParam3;  /* offset: 168 */
    uint32_t dwParam4;  /* offset: 172 */
    uint32_t dwParam5;  /* offset: 176 */
} FW_DATA_GAMESVC_CHAT;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_SET_STANCE {
    uint16_t wStanceID;  /* offset: 0 */
    void* pObject;  /* offset: 4 */
} FW_DATA_GAMESVC_SET_STANCE;

/* Size: 44 bytes */
typedef struct _FW_DATA_GAMESVC_PARTYUPDATE {
    uint8_t dwCharID;  /* offset: 0 */
    uint8_t byCount;  /* offset: 40 */
} FW_DATA_GAMESVC_PARTYUPDATE;

/* Size: 20 bytes */
typedef struct _FW_DATA_GAMESVC_BROADCAST {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint32_t dwTypeParam1;  /* offset: 16 */
} FW_DATA_GAMESVC_BROADCAST;

/* Size: 24 bytes */
typedef struct _FW_DATA_GAMESVC_SENDMSG {
    uint32_t dwID;  /* offset: 0 */
    uint32_t wStringID;  /* offset: 4 */
    uint32_t dwParam1;  /* offset: 8 */
    uint32_t dwParam2;  /* offset: 12 */
    uint32_t fRadius;  /* offset: 16 */
    uint8_t byFilter;  /* offset: 20 */
} FW_DATA_GAMESVC_SENDMSG;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_GENERICEMOTE {
    uint32_t dwTargetID;  /* offset: 0 */
    uint16_t wEmote;  /* offset: 4 */
} FW_DATA_GAMESVC_GENERICEMOTE;

/* Size: 2 bytes */
typedef struct _FW_DATA_GAMESVC_CLANMEMBERLIST {
    uint8_t byType;  /* offset: 0 */
    uint8_t byValue;  /* offset: 1 */
} FW_DATA_GAMESVC_CLANMEMBERLIST;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_CHATBAR {
    uint32_t dwData;  /* offset: 0 */
} FW_DATA_GAMESVC_CHATBAR;

/* Size: 2 bytes */
typedef struct _FW_DATA_GAMESVC_WHO {
    uint8_t byType;  /* offset: 0 */
    uint8_t byValue;  /* offset: 1 */
} FW_DATA_GAMESVC_WHO;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_DEBUG {
    uint32_t dwParam1;  /* offset: 0 */
    uint32_t dwParam2;  /* offset: 4 */
} FW_DATA_GAMESVC_DEBUG;

/* Size: 16 bytes */
typedef struct _FW_DATA_GAMESVC_PCDATA {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwFilter;  /* offset: 4 */
    uint32_t dwOptions;  /* offset: 8 */
    uint32_t dwFriendly;  /* offset: 12 */
} FW_DATA_GAMESVC_PCDATA;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_SET_CHAT_FILTER {
    uint32_t dwFilter;  /* offset: 0 */
} FW_DATA_GAMESVC_SET_CHAT_FILTER;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_SET_OPTIONS {
    uint32_t dwOptions;  /* offset: 0 */
} FW_DATA_GAMESVC_SET_OPTIONS;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_SET_FRIENDLY {
    uint32_t dwFriendly;  /* offset: 0 */
} FW_DATA_GAMESVC_SET_FRIENDLY;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_GAME_EVENTS {
    uint8_t byCmd;  /* offset: 0 */
    uint16_t wEventID;  /* offset: 2 */
} FW_DATA_GAMESVC_GAME_EVENTS;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_BUGREPORT {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTime;  /* offset: 4 */
} FW_DATA_GAMESVC_BUGREPORT;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_RELOAD_SPAWNPT {
    uint32_t dwSpawnPtID;  /* offset: 0 */
} FW_DATA_GAMESVC_RELOAD_SPAWNPT;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_RELOAD_NPCATTRIB {
    uint32_t dwAttribID;  /* offset: 0 */
} FW_DATA_GAMESVC_RELOAD_NPCATTRIB;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_RELOAD_EVENTSVC {
    uint32_t dwEventID;  /* offset: 0 */
} FW_DATA_GAMESVC_RELOAD_EVENTSVC;

/* Size: 12 bytes */
typedef struct _FW_DATA_GAMESVC_ACTIVATE_QUESTPT {
    uint32_t dwSceneSpawnID;  /* offset: 0 */
    uint32_t dwQuestOwner;  /* offset: 4 */
    uint32_t dwExpectedCount;  /* offset: 8 */
} FW_DATA_GAMESVC_ACTIVATE_QUESTPT;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_PURGEMEMORY {
    uint32_t dwCategory;  /* offset: 0 */
    uint32_t dwPrimaryKey;  /* offset: 4 */
} FW_DATA_GAMESVC_PURGEMEMORY;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_DROP_CONNECTION {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_GAMESVC_DROP_CONNECTION;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_UPDATE_CHARACTER {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_GAMESVC_UPDATE_CHARACTER;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_GUILDMEMBERLIST {
    uint32_t dwGuildID;  /* offset: 0 */
    uint16_t wIndex;  /* offset: 4 */
} FW_DATA_GAMESVC_GUILDMEMBERLIST;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_GUILDNAME {
    uint32_t dwGuildID;  /* offset: 0 */
} FW_DATA_GAMESVC_GUILDNAME;

/* Size: 2 bytes */
typedef struct _FW_DATA_GAMESVC_GM_CHECKWAR {
    uint16_t wClanID;  /* offset: 0 */
} FW_DATA_GAMESVC_GM_CHECKWAR;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_NAME_REQUEST {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_GAMESVC_NAME_REQUEST;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_TARGETDATA {
    uint32_t dwTargetID;  /* offset: 0 */
} FW_DATA_GAMESVC_TARGETDATA;

/* Size: 1 bytes */
typedef struct _FW_DATA_GAMESVC_GMHELPLIST {
    uint8_t byPriority;  /* offset: 0 */
} FW_DATA_GAMESVC_GMHELPLIST;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_GROUPSCENE {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwRadius;  /* offset: 4 */
    uint32_t dwFlags;  /* offset: 8 */
} FW_DATA_ADMIN_GROUPSCENE;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_GENERIC {
    uint32_t dwParam1;  /* offset: 0 */
    uint32_t dwParam2;  /* offset: 4 */
    uint32_t dwParam3;  /* offset: 8 */
} FW_DATA_ADMIN_GENERIC;

/* Size: 16 bytes */
typedef struct _FW_DATA_ADMIN_ITEM {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwQuantity;  /* offset: 4 */
    uint32_t dwRange;  /* offset: 8 */
    uint8_t byLocation;  /* offset: 12 */
    uint8_t byFlags;  /* offset: 13 */
} FW_DATA_ADMIN_ITEM;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_XP {
    uint32_t slXP;  /* offset: 0 */
    uint32_t dwRange;  /* offset: 4 */
    uint8_t byType;  /* offset: 8 */
} FW_DATA_ADMIN_XP;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_CLAN {
    uint32_t dwFindID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
    uint8_t byClanID;  /* offset: 5 */
    uint8_t byClanStatus;  /* offset: 6 */
} FW_DATA_ADMIN_CLAN;

/* Size: 20 bytes */
typedef struct _FW_DATA_ADMIN_NPCSPAWN {
    uint32_t dwNPC;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint16_t wRadius;  /* offset: 16 */
    uint8_t byTag;  /* offset: 18 */
    uint8_t byCount;  /* offset: 19 */
} FW_DATA_ADMIN_NPCSPAWN;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_NPCCOMMAND {
    uint8_t byCmdType;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
} FW_DATA_ADMIN_NPCCOMMAND;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_FINDER {
    uint32_t dwFindID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
} FW_DATA_ADMIN_FINDER;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_KICK {
    uint32_t dwFindID;  /* offset: 0 */
    uint16_t wDuration;  /* offset: 4 */
    uint8_t byType;  /* offset: 6 */
} FW_DATA_ADMIN_KICK;

/* Size: 1 bytes */
typedef struct _FW_DATA_ADMIN_VISIBLE {
    uint8_t byFlag;  /* offset: 0 */
} FW_DATA_ADMIN_VISIBLE;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_NOMINATE {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
    uint8_t byNominate;  /* offset: 5 */
} FW_DATA_ADMIN_NOMINATE;

/* Size: 20 bytes */
typedef struct _FW_DATA_ADMIN_SPAWNSTATUS {
    uint32_t dwSpawnID;  /* offset: 0 */
    uint8_t byStatus;  /* offset: 4 */
    uint32_t dwData1;  /* offset: 8 */
    uint32_t dwData2;  /* offset: 12 */
    uint32_t dwData3;  /* offset: 16 */
} FW_DATA_ADMIN_SPAWNSTATUS;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_OBJSTATUS {
    uint32_t dwEntityID;  /* offset: 0 */
    uint8_t byStatus;  /* offset: 4 */
} FW_DATA_ADMIN_OBJSTATUS;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_GMSTATUS {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
    uint8_t byStatus;  /* offset: 5 */
} FW_DATA_ADMIN_GMSTATUS;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_TELEPORT {
    uint32_t x;  /* offset: 0 */
    uint32_t y;  /* offset: 4 */
    uint32_t z;  /* offset: 8 */
} FW_DATA_ADMIN_TELEPORT;

/* Size: 1 bytes */
typedef struct _FW_DATA_ADMIN_COMBATFLAG {
    uint8_t byFlag;  /* offset: 0 */
} FW_DATA_ADMIN_COMBATFLAG;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_SPAWNDATA {
    uint32_t dwSpawnID;  /* offset: 0 */
    uint32_t dwAttribID;  /* offset: 4 */
    uint32_t dwNameString;  /* offset: 8 */
} FW_DATA_ADMIN_SPAWNDATA;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_SHOWSPAWNPT {
    uint32_t x;  /* offset: 0 */
    uint32_t y;  /* offset: 4 */
    uint32_t z;  /* offset: 8 */
} FW_DATA_ADMIN_SHOWSPAWNPT;

/* Size: 16 bytes */
typedef struct _FW_DATA_ADMIN_SPAWNPOS {
    uint32_t dwSpawnID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
} FW_DATA_ADMIN_SPAWNPOS;

/* Size: 4 bytes */
typedef struct _FW_DATA_ADMIN_SPAWNDETAILREQ {
    uint32_t dwSpawnID;  /* offset: 0 */
} FW_DATA_ADMIN_SPAWNDETAILREQ;

/* Size: 20 bytes */
typedef struct _FW_DATA_ADMIN_SPAWNDETAIL {
    uint32_t dwSpawnID;  /* offset: 0 */
    uint32_t dwAttribID;  /* offset: 4 */
    uint16_t wTotalCounter;  /* offset: 8 */
    uint8_t byMaxFlag;  /* offset: 10 */
    uint8_t byOnFlag;  /* offset: 11 */
    uint32_t dwNameID;  /* offset: 12 */
    uint16_t wLevel;  /* offset: 16 */
} FW_DATA_ADMIN_SPAWNDETAIL;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_SERVERSPAWNINFO {
    uint32_t dwOnCount;  /* offset: 0 */
    uint32_t dwMaxCount;  /* offset: 4 */
    uint32_t dwActualCount;  /* offset: 8 */
} FW_DATA_ADMIN_SERVERSPAWNINFO;

/* Size: 16 bytes */
typedef struct _FW_DATA_ADMIN_CLONE {
    uint32_t dwID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
} FW_DATA_ADMIN_CLONE;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_TAG {
    uint32_t dwNPCID;  /* offset: 0 */
    uint8_t byTag;  /* offset: 4 */
} FW_DATA_ADMIN_TAG;

/* Size: 16 bytes */
typedef struct _FW_DATA_ADMIN_HPCP {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwRange;  /* offset: 4 */
    uint32_t slVal;  /* offset: 8 */
    uint8_t byPerc;  /* offset: 12 */
    uint8_t byAbs;  /* offset: 13 */
} FW_DATA_ADMIN_HPCP;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_CHECKINV {
    uint32_t dwID;  /* offset: 0 */
    uint8_t byMinRange;  /* offset: 4 */
    uint8_t byMaxRange;  /* offset: 5 */
} FW_DATA_ADMIN_CHECKINV;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_DELINV {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint8_t byType;  /* offset: 8 */
    uint8_t byMinRange;  /* offset: 9 */
    uint8_t byMaxRange;  /* offset: 10 */
} FW_DATA_ADMIN_DELINV;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_RES {
    uint32_t dwID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
} FW_DATA_ADMIN_RES;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_SCENE {
    uint32_t dwID;  /* offset: 0 */
    uint16_t wSceneID;  /* offset: 4 */
} FW_DATA_ADMIN_SCENE;

/* Size: 188 bytes */
typedef struct _FW_DATA_ADMIN_WAREVENT {
    uint8_t byNumEvents;  /* offset: 0 */
    uint8_t dwAID;  /* offset: 4 */
    uint8_t dwDID;  /* offset: 44 */
    uint8_t dwTime;  /* offset: 84 */
    uint8_t byType;  /* offset: 124 */
    uint8_t byState;  /* offset: 134 */
    uint8_t dwSceneID;  /* offset: 144 */
    uint8_t byClanFlag;  /* offset: 184 */
} FW_DATA_ADMIN_WAREVENT;

/* Size: 2 bytes */
typedef struct _FW_DATA_ADMIN_TAPCHAT {
    uint8_t byType;  /* offset: 0 */
    uint8_t dwID;  /* offset: 1 */
} FW_DATA_ADMIN_TAPCHAT;

/* Size: 16 bytes */
typedef struct _FW_DATA_ADMIN_MUTE {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwRadius;  /* offset: 4 */
    uint32_t dwTime;  /* offset: 8 */
    uint8_t byFlag;  /* offset: 12 */
} FW_DATA_ADMIN_MUTE;

/* Size: 4 bytes */
typedef struct _FW_DATA_ADMIN_FIND_PLAYER {
    uint32_t dwHash;  /* offset: 0 */
} FW_DATA_ADMIN_FIND_PLAYER;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_FIND_MONSTER {
    uint32_t dwType;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
} FW_DATA_ADMIN_FIND_MONSTER;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_GMHELP_REMOVE {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byPriority;  /* offset: 4 */
} FW_DATA_ADMIN_GMHELP_REMOVE;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_SCENEIGR {
    uint32_t dwID;  /* offset: 0 */
    uint16_t wSceneID;  /* offset: 4 */
    uint8_t byType;  /* offset: 6 */
    uint8_t byTeam;  /* offset: 7 */
} FW_DATA_ADMIN_SCENEIGR;

/* Size: 12 bytes */
typedef struct _CGEN_Node {
    uint32_t m_pNext;  /* offset: 4 */
} CGEN_Node;

/* Size: 32 bytes */
typedef struct __exception {
    uint32_t type;  /* offset: 0 */
    uint32_t name;  /* offset: 4 */
    uint64_t arg1;  /* offset: 8 */
    uint64_t arg2;  /* offset: 16 */
    uint64_t retval;  /* offset: 24 */
} _exception;

/* Size: 12 bytes */
typedef struct _CVector {
    uint32_t X;  /* offset: 0 */
    uint32_t Y;  /* offset: 4 */
    uint32_t Z;  /* offset: 8 */
} CVector;

/* Size: 16 bytes */
typedef struct _CVector4 {
    uint8_t vNormal;  /* offset: 0 */
    uint32_t fD;  /* offset: 12 */
} CVector4;

/* Size: 16 bytes */
typedef struct _CQuaternions {
    uint32_t X;  /* offset: 0 */
    uint32_t Y;  /* offset: 4 */
    uint32_t Z;  /* offset: 8 */
    uint32_t W;  /* offset: 12 */
} CQuaternions;

/* Size: 20 bytes */
typedef struct _ProcCmds {
    uint32_t dwCmd;  /* offset: 0 */
    uint32_t iErrorCode;  /* offset: 4 */
    uint32_t dwParam1;  /* offset: 8 */
    uint32_t dwParam2;  /* offset: 12 */
    uint32_t fParam3;  /* offset: 16 */
} ProcCmds;

/* Size: 144 bytes */
typedef struct _CTimer {
    uint32_t startdate;  /* offset: 0 */
    uint32_t start;  /* offset: 4 */
    uint32_t dwSeconds;  /* offset: 8 */
    uint32_t dwTimes;  /* offset: 12 */
    uint32_t dwInterval;  /* offset: 16 */
    uint8_t dwParams;  /* offset: 20 */
    uint8_t chModuleName;  /* offset: 60 */
    uint32_t secbase;  /* offset: 140 */
} CTimer;

/* Size: 24 bytes */
typedef struct _Stances {
    uint32_t dwStanceID;  /* offset: 0 */
    uint32_t dwBuyPrice;  /* offset: 4 */
    uint16_t wWeaponGroup;  /* offset: 8 */
    uint16_t wWeaponRange;  /* offset: 10 */
    uint8_t byNumMoves;  /* offset: 12 */
    uint8_t byWeaponSpeed;  /* offset: 13 */
    int16_t sBezerkAR;  /* offset: 14 */
    int16_t sBezerkDR;  /* offset: 16 */
    int16_t sBezerkDmg;  /* offset: 18 */
    int16_t sBezerkCrit;  /* offset: 20 */
    uint8_t byBezerkUsePower;  /* offset: 22 */
} Stances;

/* Size: 8 bytes */
typedef struct _StanceRel {
    uint32_t dwAtkTarStanceID;  /* offset: 0 */
    int16_t sAttackRating;  /* offset: 4 */
    int16_t sDamage;  /* offset: 6 */
} StanceRel;

/* Size: 12 bytes */
typedef struct _StanceList {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wStanceID;  /* offset: 4 */
    uint16_t wRank;  /* offset: 6 */
    uint32_t dwIndex;  /* offset: 8 */
} StanceList;

/* Size: 16 bytes */
typedef struct _PowerList {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wPowerID;  /* offset: 4 */
    uint16_t wRank;  /* offset: 6 */
    uint32_t dwTimer;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 12 */
} PowerList;

/* Size: 88 bytes */
typedef struct _Powers {
    uint32_t dwPowerID;  /* offset: 0 */
    uint16_t wClanID;  /* offset: 4 */
    uint16_t wStanceID;  /* offset: 6 */
    uint16_t wStanceRank;  /* offset: 8 */
    uint16_t wAttackBonus;  /* offset: 10 */
    uint32_t dwBuyPrice;  /* offset: 12 */
    uint8_t byStrength;  /* offset: 16 */
    uint8_t byConstitution;  /* offset: 17 */
    uint8_t byAgility;  /* offset: 18 */
    uint8_t byMind;  /* offset: 19 */
    uint8_t byPerception;  /* offset: 20 */
    uint8_t byTargetType;  /* offset: 21 */
    uint8_t byFriendliness;  /* offset: 22 */
    uint16_t wFXID;  /* offset: 24 */
    uint16_t wAnimID;  /* offset: 26 */
    uint16_t wChiCost;  /* offset: 28 */
    uint16_t wHPCost;  /* offset: 30 */
    uint8_t byExecTime;  /* offset: 32 */
    uint8_t byCoolDown;  /* offset: 33 */
    uint16_t wPowerID1;  /* offset: 34 */
    uint16_t wPowerID2;  /* offset: 36 */
    uint8_t byWeaponFlag;  /* offset: 38 */
    uint16_t wEffectID1;  /* offset: 40 */
    uint8_t byAffecting1;  /* offset: 42 */
    uint16_t wEFFID1;  /* offset: 44 */
    uint16_t wDuration1;  /* offset: 46 */
    uint16_t wEffectID2;  /* offset: 48 */
    uint8_t byAffecting2;  /* offset: 50 */
    uint16_t wEFFID2;  /* offset: 52 */
    uint16_t wDuration2;  /* offset: 54 */
    uint16_t wEffectID3;  /* offset: 56 */
    uint8_t byAffecting3;  /* offset: 58 */
    uint16_t wEFFID3;  /* offset: 60 */
    uint16_t wDuration3;  /* offset: 62 */
    uint16_t wEffectID4;  /* offset: 64 */
    uint8_t byAffecting4;  /* offset: 66 */
    uint16_t wEFFID4;  /* offset: 68 */
    uint16_t wDuration4;  /* offset: 70 */
    uint16_t wEffectID5;  /* offset: 72 */
    uint8_t byAffecting5;  /* offset: 74 */
    uint16_t wEFFID5;  /* offset: 76 */
    uint16_t wDuration5;  /* offset: 78 */
    uint32_t dwUpgradeID;  /* offset: 80 */
    uint16_t wUpgradeLevel;  /* offset: 84 */
    uint16_t wFlags;  /* offset: 86 */
} Powers;

/* Size: 24 bytes */
typedef struct _EffectList {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wEffectID;  /* offset: 4 */
    uint16_t wDuration;  /* offset: 6 */
    uint32_t dwTimeStamp;  /* offset: 8 */
    uint8_t byPowerRank;  /* offset: 12 */
    uint32_t dwImmunityID;  /* offset: 16 */
    uint32_t dwIndex;  /* offset: 20 */
} EffectList;

/* Size: 176 bytes */
typedef struct _Effects {
    uint32_t dwEffectID;  /* offset: 0 */
    uint8_t byStun;  /* offset: 4 */
    uint8_t bySlow;  /* offset: 5 */
    uint8_t byEntangle;  /* offset: 6 */
    uint8_t byHardenDefense;  /* offset: 7 */
    uint8_t byPenetrate;  /* offset: 8 */
    uint32_t dwImmunityID;  /* offset: 12 */
    uint32_t dwRemoveImmunityID;  /* offset: 16 */
    uint16_t wStrength;  /* offset: 20 */
    uint16_t wWeakness;  /* offset: 22 */
    uint16_t wConstFireDmg;  /* offset: 24 */
    uint16_t wConstColdDmg;  /* offset: 26 */
    uint16_t wConstPoisonDmg;  /* offset: 28 */
    uint16_t wConstLightningDmg;  /* offset: 30 */
    uint16_t wConstPhysicalDmg;  /* offset: 32 */
    uint16_t wConstDirectDmg;  /* offset: 34 */
    uint16_t wConstChiDmg;  /* offset: 36 */
    uint16_t wConstHPPlus;  /* offset: 38 */
    uint16_t wConstChiPlus;  /* offset: 40 */
    int16_t sAttackPlus;  /* offset: 42 */
    int16_t sAttackPerc;  /* offset: 44 */
    int16_t sDefensePlus;  /* offset: 46 */
    int16_t sDefensePerc;  /* offset: 48 */
    uint16_t wMinPhysicalDmgPlus;  /* offset: 50 */
    uint16_t wMaxPhysicalDmgPlus;  /* offset: 52 */
    uint16_t wMinUnarmedDmgPlus;  /* offset: 54 */
    uint16_t wMaxUnarmedDmgPlus;  /* offset: 56 */
    uint16_t wMinFireDmgPlus;  /* offset: 58 */
    uint16_t wMaxFireDmgPlus;  /* offset: 60 */
    uint16_t wMinColdDmgPlus;  /* offset: 62 */
    uint16_t wMaxColdDmgPlus;  /* offset: 64 */
    uint16_t wMinPoisonDmgPlus;  /* offset: 66 */
    uint16_t wMaxPoisonDmgPlus;  /* offset: 68 */
    uint16_t wMinLightningDmgPlus;  /* offset: 70 */
    uint16_t wMaxLightningDmgPlus;  /* offset: 72 */
    uint16_t wMinDirectDmgPlus;  /* offset: 74 */
    uint16_t wMaxDirectDmgPlus;  /* offset: 76 */
    int16_t sFireResistPlus;  /* offset: 78 */
    int16_t sColdResistPlus;  /* offset: 80 */
    int16_t sPoisonResistPlus;  /* offset: 82 */
    int16_t sLightningResistPlus;  /* offset: 84 */
    int16_t sPhysicalResistPlus;  /* offset: 86 */
    uint16_t wHitPointPlus;  /* offset: 88 */
    uint16_t wHitPointPerc;  /* offset: 90 */
    uint16_t wChiPlus;  /* offset: 92 */
    uint16_t wChiPerc;  /* offset: 94 */
    int16_t sHitPointsRegenPlus;  /* offset: 96 */
    int16_t sChiPointsRegenPlus;  /* offset: 98 */
    uint16_t wMaxHitPointsPlus;  /* offset: 100 */
    uint16_t wMaxHitPointsPerc;  /* offset: 102 */
    int16_t sMaxChiPlus;  /* offset: 104 */
    int16_t sMaxChiPerc;  /* offset: 106 */
    int16_t sWeightPlus;  /* offset: 108 */
    uint16_t wWeightPerc;  /* offset: 110 */
    int16_t sBlockChangePlus;  /* offset: 112 */
    uint8_t byStrengthPlus;  /* offset: 114 */
    uint8_t byConstitutionPlus;  /* offset: 115 */
    uint8_t byAgilityPlus;  /* offset: 116 */
    uint8_t byMindPlus;  /* offset: 117 */
    uint8_t byPerceptionPlus;  /* offset: 118 */
    uint16_t wMinInstFireDmg;  /* offset: 120 */
    uint16_t wMaxInstFireDmg;  /* offset: 122 */
    uint16_t wMinInstColdDmg;  /* offset: 124 */
    uint16_t wMaxInstColdDmg;  /* offset: 126 */
    uint16_t wMinInstPoisonDmg;  /* offset: 128 */
    uint16_t wMaxInstPoisonDmg;  /* offset: 130 */
    uint16_t wMinInstLightningDmg;  /* offset: 132 */
    uint16_t wMaxInstLightningDmg;  /* offset: 134 */
    uint16_t wMinInstPhysicalDmg;  /* offset: 136 */
    uint16_t wMaxInstPhysicalDmg;  /* offset: 138 */
    uint16_t wMinInstDirectDmg;  /* offset: 140 */
    uint16_t wMaxInstDirectDmg;  /* offset: 142 */
    uint16_t wMinInstChiDmg;  /* offset: 144 */
    uint16_t wMaxInstChiDmg;  /* offset: 146 */
    uint16_t wPowerRankPlusOne;  /* offset: 148 */
    int16_t sWeaponSpeed;  /* offset: 150 */
    int16_t sCriticalChance;  /* offset: 152 */
    int16_t sCriticalHit;  /* offset: 154 */
    int16_t sThornDrain;  /* offset: 156 */
    int16_t sThornChi;  /* offset: 158 */
    uint8_t byBlind;  /* offset: 160 */
    uint8_t byConfusion;  /* offset: 161 */
    uint8_t byBezerk;  /* offset: 162 */
    uint8_t byKnockdown;  /* offset: 163 */
    uint8_t byNoDispel;  /* offset: 164 */
    uint32_t dwIcon;  /* offset: 168 */
    uint32_t dwIcon2;  /* offset: 172 */
} Effects;

/* Size: 8 bytes */
typedef struct _Moves {
    uint32_t dwStanceMoveID;  /* offset: 0 */
    uint16_t dwAnimID;  /* offset: 4 */
    uint16_t wRank;  /* offset: 6 */
} Moves;

/* Size: 12 bytes */
typedef struct _AttackMode {
    uint32_t dwAttModeID;  /* offset: 0 */
    int16_t sAttMod;  /* offset: 4 */
    int16_t sDefMod;  /* offset: 6 */
    int16_t sDmgMod;  /* offset: 8 */
    int16_t sBlockMod;  /* offset: 10 */
} AttackMode;

/* Size: 20 bytes */
typedef struct _StanceProg {
    uint32_t dwStanceRankID;  /* offset: 0 */
    uint8_t byAttackBonus;  /* offset: 4 */
    uint8_t byDefenseBonus;  /* offset: 5 */
    uint8_t byNumMoves;  /* offset: 6 */
    uint8_t byBonusPower;  /* offset: 7 */
    uint8_t byFireResist;  /* offset: 8 */
    uint8_t byColdResist;  /* offset: 9 */
    uint8_t byLightningResist;  /* offset: 10 */
    uint8_t byPoisonResist;  /* offset: 11 */
    uint8_t byPhysicalResist;  /* offset: 12 */
    uint8_t byBaseDamage;  /* offset: 13 */
    uint8_t byUnarmedDamageMin;  /* offset: 14 */
    uint8_t byUnarmedDamageMax;  /* offset: 15 */
    uint8_t byHitPoint;  /* offset: 16 */
    uint8_t byChiPoint;  /* offset: 17 */
} StanceProg;

/* Size: 20 bytes */
typedef struct _LevelAdv {
    uint32_t dwLevel;  /* offset: 0 */
    uint8_t byMaxHP;  /* offset: 4 */
    uint8_t byMaxChi;  /* offset: 5 */
    uint8_t byAttributePoints;  /* offset: 6 */
    uint8_t byStancePoints;  /* offset: 7 */
    uint8_t byPowerPoints;  /* offset: 8 */
    uint8_t bySkillPoints;  /* offset: 9 */
    uint32_t dwXP;  /* offset: 12 */
    uint8_t byNumChainPowers;  /* offset: 16 */
    uint8_t byReSpecPoints;  /* offset: 17 */
} LevelAdv;

/* Size: 12 bytes */
typedef struct _ChainPower {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byChainID;  /* offset: 4 */
    uint8_t bySlot;  /* offset: 5 */
    uint16_t wPowerID;  /* offset: 6 */
    uint32_t dwIndex;  /* offset: 8 */
} ChainPower;

/* Size: 220 bytes */
typedef struct _Clan {
    uint32_t dwClanID;  /* offset: 0 */
    uint32_t dwType;  /* offset: 4 */
    uint32_t dwGold;  /* offset: 8 */
    uint32_t dwPrestige;  /* offset: 12 */
    uint32_t dwRelic1;  /* offset: 16 */
    uint32_t dwRelic2;  /* offset: 20 */
    uint32_t dwRelic3;  /* offset: 24 */
    uint32_t dwRelic4;  /* offset: 28 */
    uint32_t dwRelic5;  /* offset: 32 */
    uint32_t dwRelic6;  /* offset: 36 */
    uint32_t dwRelic7;  /* offset: 40 */
    uint32_t dwRelic8;  /* offset: 44 */
    uint32_t dwRelic9;  /* offset: 48 */
    uint32_t dwRelic10;  /* offset: 52 */
    uint32_t dwRelic11;  /* offset: 56 */
    uint32_t dwRelic12;  /* offset: 60 */
    uint32_t dwRelic13;  /* offset: 64 */
    uint32_t dwRelic14;  /* offset: 68 */
    uint32_t dwRelic15;  /* offset: 72 */
    uint32_t dwRelic16;  /* offset: 76 */
    uint32_t dwRelic1Flag;  /* offset: 80 */
    uint32_t dwRelic2Flag;  /* offset: 84 */
    uint32_t dwRelic3Flag;  /* offset: 88 */
    uint32_t dwRelic4Flag;  /* offset: 92 */
    uint32_t dwRelic5Flag;  /* offset: 96 */
    uint32_t dwRelic6Flag;  /* offset: 100 */
    uint32_t dwRelic7Flag;  /* offset: 104 */
    uint32_t dwRelic8Flag;  /* offset: 108 */
    uint32_t dwRelic9Flag;  /* offset: 112 */
    uint32_t dwRelic10Flag;  /* offset: 116 */
    uint32_t dwRelic11Flag;  /* offset: 120 */
    uint32_t dwRelic12Flag;  /* offset: 124 */
    uint32_t dwRelic13Flag;  /* offset: 128 */
    uint32_t dwRelic14Flag;  /* offset: 132 */
    uint32_t dwRelic15Flag;  /* offset: 136 */
    uint32_t dwRelic16Flag;  /* offset: 140 */
    uint32_t dwBountyID1;  /* offset: 144 */
    uint32_t dwBountyID2;  /* offset: 148 */
    uint32_t dwBountyID3;  /* offset: 152 */
    uint32_t dwBountyID4;  /* offset: 156 */
    uint32_t dwBountyID5;  /* offset: 160 */
    uint32_t dwBountyID6;  /* offset: 164 */
    uint32_t dwBountyID7;  /* offset: 168 */
    uint32_t dwBountyID8;  /* offset: 172 */
    uint32_t dwBountyID9;  /* offset: 176 */
    uint32_t dwBountyID10;  /* offset: 180 */
    uint32_t dwBountyTime1;  /* offset: 184 */
    uint32_t dwBountyTime2;  /* offset: 188 */
    uint32_t dwBountyTime3;  /* offset: 192 */
    uint32_t dwBountyTime4;  /* offset: 196 */
    uint32_t dwBountyTime5;  /* offset: 200 */
    uint32_t dwBountyTime6;  /* offset: 204 */
    uint32_t dwBountyTime7;  /* offset: 208 */
    uint32_t dwBountyTime9;  /* offset: 212 */
    uint32_t dwBountyTime10;  /* offset: 216 */
} Clan;

/* Size: 260 bytes */
typedef struct _ClanRating {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byRating;  /* offset: 4 */
} ClanRating;

/* Size: 16 bytes */
typedef struct _BrotherList {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byStatus;  /* offset: 4 */
    uint32_t dwYoungerBrotherID;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 12 */
} BrotherList;

/* Size: 52 bytes */
typedef struct _PartyList {
    uint32_t dwPartyID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint8_t byNameA;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 48 */
} PartyList;

/* Size: 16 bytes */
typedef struct _ClanList {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwClanID;  /* offset: 4 */
    uint16_t wJob;  /* offset: 8 */
    uint8_t byStatus;  /* offset: 10 */
    uint32_t dwIndex;  /* offset: 12 */
} ClanList;

/* Size: 12 bytes */
typedef struct _BarCharClanList {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwClanID;  /* offset: 4 */
    uint32_t dwIndex;  /* offset: 8 */
} BarCharClanList;

/* Size: 12 bytes */
typedef struct _BarClanList {
    uint32_t dwClanID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwIndex;  /* offset: 8 */
} BarClanList;

/* Size: 52 bytes */
typedef struct _Vote {
    uint32_t dwClanID;  /* offset: 0 */
    uint16_t wType;  /* offset: 4 */
    uint32_t dwTargetID;  /* offset: 8 */
    uint32_t dwVoteID1;  /* offset: 12 */
    uint32_t dwVoteID2;  /* offset: 16 */
    uint32_t dwVoteID3;  /* offset: 20 */
    uint32_t dwVoteID4;  /* offset: 24 */
    uint32_t dwVoteID5;  /* offset: 28 */
    uint32_t dwVoteID6;  /* offset: 32 */
    uint32_t dwVoteID7;  /* offset: 36 */
    uint32_t dwVoteID8;  /* offset: 40 */
    uint32_t dwVoteID9;  /* offset: 44 */
    uint32_t dwVoteID10;  /* offset: 48 */
} Vote;

/* Size: 1 bytes */
typedef struct _ClanRel {
    uint8_t byRelationship;  /* offset: 0 */
} ClanRel;

/* Size: 20 bytes */
typedef struct _Resource {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwLabel;  /* offset: 4 */
    uint16_t wClanID;  /* offset: 8 */
    uint16_t wValue;  /* offset: 10 */
    uint8_t byType;  /* offset: 12 */
    uint8_t byResGroup;  /* offset: 13 */
    uint32_t dwIndex;  /* offset: 16 */
} Resource;

/* Size: 68 bytes */
typedef struct _ResourceData {
    uint32_t dwData1;  /* offset: 0 */
    uint32_t dwData2;  /* offset: 4 */
    uint32_t dwData3;  /* offset: 8 */
    uint32_t dwData4;  /* offset: 12 */
    uint32_t dwData5;  /* offset: 16 */
    uint32_t dwData6;  /* offset: 20 */
    uint32_t dwData7;  /* offset: 24 */
    uint32_t dwData8;  /* offset: 28 */
    uint32_t dwData9;  /* offset: 32 */
    uint32_t dwData10;  /* offset: 36 */
    uint32_t dwData11;  /* offset: 40 */
    uint32_t dwData12;  /* offset: 44 */
    uint32_t dwData13;  /* offset: 48 */
    uint32_t dwData14;  /* offset: 52 */
    uint32_t dwData15;  /* offset: 56 */
    uint32_t dwData16;  /* offset: 60 */
    uint16_t wDataFlag;  /* offset: 64 */
} ResourceData;

/* Size: 28 bytes */
typedef struct _ResourceStats {
    uint8_t byType;  /* offset: 0 */
    uint8_t byResGroup;  /* offset: 1 */
    uint16_t wClanID;  /* offset: 2 */
    uint16_t wValue;  /* offset: 4 */
    uint16_t wRange;  /* offset: 6 */
    uint16_t wStringID;  /* offset: 8 */
    uint32_t dwSpawnGrp;  /* offset: 12 */
    uint32_t dwSceneID;  /* offset: 16 */
    uint32_t dwFlagGrp;  /* offset: 20 */
    uint8_t byUsedAs;  /* offset: 24 */
} ResourceStats;

/* Size: 16 bytes */
typedef struct _ResourceQuick {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwLabel;  /* offset: 4 */
    uint8_t byResGroup;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 12 */
} ResourceQuick;

/* Size: 20 bytes */
typedef struct _ClanResources {
    uint16_t wClanID;  /* offset: 0 */
    uint32_t dwLabel;  /* offset: 4 */
    uint8_t byType;  /* offset: 8 */
    uint8_t byResGroup;  /* offset: 9 */
    uint8_t byUsedAs;  /* offset: 10 */
    uint16_t wValue;  /* offset: 12 */
    uint32_t dwIndex;  /* offset: 16 */
} ClanResources;

/* Size: 72 bytes */
typedef struct _Guild {
    uint32_t dwGuildID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
    uint16_t wNameStrID;  /* offset: 6 */
    uint32_t dwGold;  /* offset: 8 */
    uint32_t dwPrestige;  /* offset: 12 */
    uint32_t dwLeaderID;  /* offset: 16 */
    uint8_t byJob;  /* offset: 20 */
    uint16_t wNumMembers;  /* offset: 22 */
    uint32_t dwTribute;  /* offset: 24 */
    uint32_t dwHashName;  /* offset: 28 */
    uint8_t byName;  /* offset: 32 */
} Guild;

/* Size: 16 bytes */
typedef struct _GuildList {
    uint32_t dwGuildID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint8_t byJob;  /* offset: 8 */
    uint8_t byStatus;  /* offset: 9 */
    uint32_t dwIndex;  /* offset: 12 */
} GuildList;

/* Size: 16 bytes */
typedef struct _AllyClan {
    uint32_t dwClanID;  /* offset: 0 */
    uint32_t dwGuildID;  /* offset: 4 */
    uint8_t byStatus;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 12 */
} AllyClan;

/* Size: 12 bytes */
typedef struct _AllyGuild {
    uint32_t dwGuildID;  /* offset: 0 */
    uint32_t dwClanID;  /* offset: 4 */
    uint8_t byStatus;  /* offset: 8 */
} AllyGuild;

/* Size: 8 bytes */
typedef struct _ClanType {
    uint32_t dwClanID;  /* offset: 0 */
    uint32_t dwType;  /* offset: 4 */
} ClanType;

/* Size: 4 bytes */
typedef struct _GuildHashName {
    uint32_t dwGuildID;  /* offset: 0 */
} GuildHashName;

/* Size: 8 bytes */
typedef struct _GuildCount {
    uint32_t dwGuildID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
} GuildCount;

/* Size: 16 bytes */
typedef struct _GuildMList {
    uint32_t dwGuildID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint8_t byJob;  /* offset: 8 */
    uint8_t byStatus;  /* offset: 9 */
    uint32_t dwIndex;  /* offset: 12 */
} GuildMList;

/* Size: 20 bytes */
typedef struct _GuildBuffList {
    uint32_t dwGuildID;  /* offset: 0 */
    uint32_t dwBuffID;  /* offset: 4 */
    uint32_t dwType;  /* offset: 8 */
    uint32_t dwKey;  /* offset: 12 */
    uint32_t dwIndex;  /* offset: 16 */
} GuildBuffList;

/* Size: 20 bytes */
typedef struct _ClanBuffList {
    uint32_t dwClanID;  /* offset: 0 */
    uint32_t dwBuffID;  /* offset: 4 */
    uint32_t dwType;  /* offset: 8 */
    uint32_t dwKey;  /* offset: 12 */
    uint32_t dwIndex;  /* offset: 16 */
} ClanBuffList;

/* Size: 12 bytes */
typedef struct _BuffsType {
    uint32_t dwBuffID;  /* offset: 0 */
    uint32_t dwKey;  /* offset: 4 */
    uint32_t dwIndex;  /* offset: 8 */
} BuffsType;

/* Size: 24 bytes */
typedef struct _Buffs {
    uint32_t dwBuffID;  /* offset: 0 */
    uint32_t dwType;  /* offset: 4 */
    uint32_t dwKey;  /* offset: 8 */
    uint16_t wEffID1;  /* offset: 12 */
    uint16_t wEffID2;  /* offset: 14 */
    uint16_t wEffID3;  /* offset: 16 */
    uint16_t wEffID4;  /* offset: 18 */
    uint16_t wEffID5;  /* offset: 20 */
    uint16_t wEffID6;  /* offset: 22 */
} Buffs;

/* Size: 12 bytes */
typedef struct _GMList {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wJob;  /* offset: 4 */
    uint8_t byStatus;  /* offset: 6 */
    uint8_t byAvailFlag;  /* offset: 7 */
    uint32_t dwIndex;  /* offset: 8 */
} GMList;

/* Size: 28 bytes */
typedef struct _PrestigeLog {
    uint32_t dwClanID;  /* offset: 0 */
    uint32_t dwTime;  /* offset: 4 */
    uint32_t dwEntityID;  /* offset: 8 */
    int16_t sPrestige;  /* offset: 12 */
    uint16_t wReason;  /* offset: 14 */
    uint32_t dwData;  /* offset: 16 */
    uint8_t byType;  /* offset: 20 */
    uint32_t dwIndex;  /* offset: 24 */
} PrestigeLog;

/* Size: 28 bytes */
typedef struct _ClanLog {
    uint32_t dwTypeClanID;  /* offset: 0 */
    uint32_t dwTime;  /* offset: 4 */
    uint16_t wStringID;  /* offset: 8 */
    uint32_t dwData1;  /* offset: 12 */
    uint32_t dwData2;  /* offset: 16 */
    uint32_t dwData3;  /* offset: 20 */
    uint32_t dwIndex;  /* offset: 24 */
} ClanLog;

/* Size: 16 bytes */
typedef struct _GuildListWithStatus {
    uint32_t dwGuildID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint8_t byJob;  /* offset: 8 */
    uint8_t byStatus;  /* offset: 9 */
    uint32_t dwIndex;  /* offset: 12 */
} GuildListWithStatus;

/* Size: 8 bytes */
typedef struct _BanNames {
    uint32_t dwHashValue;  /* offset: 0 */
    uint32_t dwIndex;  /* offset: 4 */
} BanNames;

/* Size: 16 bytes */
typedef struct _BrotherListDirect {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byStatus;  /* offset: 4 */
    uint32_t dwYoungerBrotherID;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 12 */
} BrotherListDirect;

/* Size: 148 bytes */
typedef struct _NoticeBoardAll {
    uint32_t dwLabelID;  /* offset: 0 */
    uint32_t dwEventID;  /* offset: 4 */
    uint32_t dwEventTitle;  /* offset: 8 */
    uint32_t dwAnnouncement1;  /* offset: 12 */
    uint32_t dwAnnouncement2;  /* offset: 16 */
    uint32_t dwAnnouncement3;  /* offset: 20 */
    uint32_t dwAnnouncement4;  /* offset: 24 */
    uint32_t dwAnnouncement5;  /* offset: 28 */
    uint32_t dwAnnouncement6;  /* offset: 32 */
    uint32_t dwReward1;  /* offset: 36 */
    uint32_t dwReward2;  /* offset: 40 */
    uint32_t dwReward3;  /* offset: 44 */
    uint32_t dwReward4;  /* offset: 48 */
    uint32_t dwReward5;  /* offset: 52 */
    uint32_t dwReward6;  /* offset: 56 */
    uint32_t dwStory1;  /* offset: 60 */
    uint32_t dwStory2;  /* offset: 64 */
    uint32_t dwStory3;  /* offset: 68 */
    uint32_t dwStory1_1;  /* offset: 72 */
    uint32_t dwStory1_2;  /* offset: 76 */
    uint32_t dwStory1_3;  /* offset: 80 */
    uint32_t dwStory1_4;  /* offset: 84 */
    uint32_t dwStory1_5;  /* offset: 88 */
    uint32_t dwStory1_6;  /* offset: 92 */
    uint32_t dwStory2_1;  /* offset: 96 */
    uint32_t dwStory2_2;  /* offset: 100 */
    uint32_t dwStory2_3;  /* offset: 104 */
    uint32_t dwStory2_4;  /* offset: 108 */
    uint32_t dwStory2_5;  /* offset: 112 */
    uint32_t dwStory2_6;  /* offset: 116 */
    uint32_t dwStory3_1;  /* offset: 120 */
    uint32_t dwStory3_2;  /* offset: 124 */
    uint32_t dwStory3_3;  /* offset: 128 */
    uint32_t dwStory3_4;  /* offset: 132 */
    uint32_t dwStory3_5;  /* offset: 136 */
    uint32_t dwStory3_6;  /* offset: 140 */
    uint32_t dwIndex;  /* offset: 144 */
} NoticeBoardAll;

/* Size: 144 bytes */
typedef struct _NoticeBoardDetail {
    uint32_t dwLabelID;  /* offset: 0 */
    uint32_t dwEventID;  /* offset: 4 */
    uint32_t dwEventTitle;  /* offset: 8 */
    uint32_t dwAnnouncement1;  /* offset: 12 */
    uint32_t dwAnnouncement2;  /* offset: 16 */
    uint32_t dwAnnouncement3;  /* offset: 20 */
    uint32_t dwAnnouncement4;  /* offset: 24 */
    uint32_t dwAnnouncement5;  /* offset: 28 */
    uint32_t dwAnnouncement6;  /* offset: 32 */
    uint32_t dwReward1;  /* offset: 36 */
    uint32_t dwReward2;  /* offset: 40 */
    uint32_t dwReward3;  /* offset: 44 */
    uint32_t dwReward4;  /* offset: 48 */
    uint32_t dwReward5;  /* offset: 52 */
    uint32_t dwReward6;  /* offset: 56 */
    uint32_t dwStory1;  /* offset: 60 */
    uint32_t dwStory2;  /* offset: 64 */
    uint32_t dwStory3;  /* offset: 68 */
    uint32_t dwStory1_1;  /* offset: 72 */
    uint32_t dwStory1_2;  /* offset: 76 */
    uint32_t dwStory1_3;  /* offset: 80 */
    uint32_t dwStory1_4;  /* offset: 84 */
    uint32_t dwStory1_5;  /* offset: 88 */
    uint32_t dwStory1_6;  /* offset: 92 */
    uint32_t dwStory2_1;  /* offset: 96 */
    uint32_t dwStory2_2;  /* offset: 100 */
    uint32_t dwStory2_3;  /* offset: 104 */
    uint32_t dwStory2_4;  /* offset: 108 */
    uint32_t dwStory2_5;  /* offset: 112 */
    uint32_t dwStory2_6;  /* offset: 116 */
    uint32_t dwStory3_1;  /* offset: 120 */
    uint32_t dwStory3_2;  /* offset: 124 */
    uint32_t dwStory3_3;  /* offset: 128 */
    uint32_t dwStory3_4;  /* offset: 132 */
    uint32_t dwStory3_5;  /* offset: 136 */
    uint32_t dwStory3_6;  /* offset: 140 */
} NoticeBoardDetail;

/* Size: 124 bytes */
typedef struct _Item {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t byWeight;  /* offset: 4 */
    uint8_t byLevelGroup;  /* offset: 5 */
    uint8_t byPopLimit;  /* offset: 6 */
    uint8_t byIdentify;  /* offset: 7 */
    uint8_t byHardness;  /* offset: 8 */
    uint16_t wBuyPrice;  /* offset: 10 */
    uint32_t dwSetID;  /* offset: 12 */
    uint8_t bySetCount;  /* offset: 16 */
    uint8_t byPartialSetCount;  /* offset: 17 */
    uint16_t wSetEffID1;  /* offset: 18 */
    uint16_t wSetEffID2;  /* offset: 20 */
    uint16_t wSetEffID3;  /* offset: 22 */
    uint16_t wSetEffID4;  /* offset: 24 */
    uint16_t wSetEffID5;  /* offset: 26 */
    uint16_t wSetEffID6;  /* offset: 28 */
    uint32_t dwField1;  /* offset: 32 */
    uint32_t dwField2;  /* offset: 36 */
    uint32_t dwField3;  /* offset: 40 */
    uint32_t dwField4;  /* offset: 44 */
    uint32_t dwField5;  /* offset: 48 */
    uint32_t dwField6;  /* offset: 52 */
    uint32_t dwField7;  /* offset: 56 */
    uint32_t dwField8;  /* offset: 60 */
    uint32_t dwField9;  /* offset: 64 */
    uint32_t dwField10;  /* offset: 68 */
    uint32_t dwField11;  /* offset: 72 */
    uint32_t dwField12;  /* offset: 76 */
    uint8_t byNoTransFlag;  /* offset: 80 */
    uint8_t byMaxLevel;  /* offset: 81 */
    uint32_t dwItemSwitchID;  /* offset: 84 */
    uint16_t wLvlEffID1;  /* offset: 88 */
    uint16_t wLvlEffID2;  /* offset: 90 */
    uint16_t wModEffID1;  /* offset: 92 */
    uint16_t wModEffID2;  /* offset: 94 */
    uint8_t byLvlAffFlag1;  /* offset: 96 */
    uint8_t byLvlAffFlag2;  /* offset: 97 */
    uint8_t byModAffFlag1;  /* offset: 98 */
    uint8_t byModAffFlag2;  /* offset: 99 */
    uint16_t wLvlDur1;  /* offset: 100 */
    uint16_t wLvlDur2;  /* offset: 102 */
    uint16_t wModDur1;  /* offset: 104 */
    uint16_t wModDur2;  /* offset: 106 */
    uint16_t wXPGain;  /* offset: 108 */
    uint32_t dwHeroPrice;  /* offset: 112 */
    uint32_t dwDecayValue;  /* offset: 116 */
    uint16_t wDecayRate;  /* offset: 120 */
    uint8_t byDisplay;  /* offset: 122 */
    uint8_t byRelease;  /* offset: 123 */
} Item;

/* Size: 48 bytes */
typedef struct _Inventory {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint8_t bySlotNum;  /* offset: 8 */
    uint8_t byIdentified;  /* offset: 9 */
    uint8_t byQuantity;  /* offset: 10 */
    uint8_t byDurability;  /* offset: 11 */
    uint8_t byHardness;  /* offset: 12 */
    uint32_t dwField1;  /* offset: 16 */
    uint32_t dwField2;  /* offset: 20 */
    uint32_t dwField3;  /* offset: 24 */
    uint32_t dwField4;  /* offset: 28 */
    uint32_t dwField5;  /* offset: 32 */
    uint8_t byLevel;  /* offset: 36 */
    uint32_t dwXP;  /* offset: 40 */
    uint32_t dwIndex;  /* offset: 44 */
} Inventory;

/* Size: 20 bytes */
typedef struct _Rental {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint32_t dwStartTime;  /* offset: 8 */
    uint32_t dwDuration;  /* offset: 12 */
    uint32_t dwIndex;  /* offset: 16 */
} Rental;

/* Size: 48 bytes */
typedef struct _SortedInventory {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint8_t bySlotNum;  /* offset: 8 */
    uint8_t byIdentified;  /* offset: 9 */
    uint8_t byQuantity;  /* offset: 10 */
    uint8_t byDurability;  /* offset: 11 */
    uint8_t byHardness;  /* offset: 12 */
    uint32_t dwField1;  /* offset: 16 */
    uint32_t dwField2;  /* offset: 20 */
    uint32_t dwField3;  /* offset: 24 */
    uint32_t dwField4;  /* offset: 28 */
    uint32_t dwField5;  /* offset: 32 */
    uint8_t byLevel;  /* offset: 36 */
    uint32_t dwXP;  /* offset: 40 */
    uint32_t dwIndex;  /* offset: 44 */
} SortedInventory;

/* Size: 32 bytes */
typedef struct _UniqueItem {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwRevertToID;  /* offset: 8 */
    uint32_t dwTime;  /* offset: 12 */
    uint32_t dwOriginatorID;  /* offset: 16 */
    uint32_t dwDecayCounter;  /* offset: 20 */
    uint8_t byNPCFlag;  /* offset: 24 */
    uint32_t dwRevertTime;  /* offset: 28 */
} UniqueItem;

/* Size: 32 bytes */
typedef struct _UniqueItemSetView {
    uint8_t bySetID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint32_t dwCharID;  /* offset: 8 */
    uint32_t dwRevertToID;  /* offset: 12 */
    uint32_t dwTime;  /* offset: 16 */
    uint32_t dwOriginatorID;  /* offset: 20 */
    uint32_t dwRevertTime;  /* offset: 24 */
    uint32_t dwIndex;  /* offset: 28 */
} UniqueItemSetView;

/* Size: 28 bytes */
typedef struct _UniqueItemIDView {
    uint32_t dwRevertToID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint32_t dwCharID;  /* offset: 8 */
    uint32_t dwTime;  /* offset: 12 */
    uint32_t dwOriginatorID;  /* offset: 16 */
    uint8_t byNPCFlag;  /* offset: 20 */
    uint32_t dwIndex;  /* offset: 24 */
} UniqueItemIDView;

/* Size: 52 bytes */
typedef struct _Treasure {
    uint32_t dwTableID;  /* offset: 0 */
    uint16_t wIndexID;  /* offset: 4 */
    uint16_t wGoldMin;  /* offset: 6 */
    uint16_t wGoldMax;  /* offset: 8 */
    uint16_t wRarity;  /* offset: 10 */
    uint32_t dwItem1;  /* offset: 12 */
    uint32_t dwItem2;  /* offset: 16 */
    uint32_t dwItem3;  /* offset: 20 */
    uint32_t dwItem4;  /* offset: 24 */
    uint32_t dwItem5;  /* offset: 28 */
    uint32_t dwAltTableID;  /* offset: 32 */
    uint8_t byQuantity1;  /* offset: 36 */
    uint8_t byQuantity2;  /* offset: 37 */
    uint8_t byQuantity3;  /* offset: 38 */
    uint8_t byQuantity4;  /* offset: 39 */
    uint8_t byQuantity5;  /* offset: 40 */
    uint8_t byDurability1;  /* offset: 41 */
    uint8_t byDurability2;  /* offset: 42 */
    uint8_t byDurability3;  /* offset: 43 */
    uint8_t byDurability4;  /* offset: 44 */
    uint8_t byDurability5;  /* offset: 45 */
    uint32_t dwIndex;  /* offset: 48 */
} Treasure;

/* Size: 212 bytes */
typedef struct _Trading {
    uint32_t dwTableID;  /* offset: 0 */
    int16_t sMarkup;  /* offset: 4 */
    uint32_t dwItem1;  /* offset: 8 */
    uint32_t dwItem2;  /* offset: 12 */
    uint32_t dwItem3;  /* offset: 16 */
    uint32_t dwItem4;  /* offset: 20 */
    uint32_t dwItem5;  /* offset: 24 */
    uint32_t dwItem6;  /* offset: 28 */
    uint32_t dwItem7;  /* offset: 32 */
    uint32_t dwItem8;  /* offset: 36 */
    uint32_t dwItem9;  /* offset: 40 */
    uint32_t dwItem10;  /* offset: 44 */
    uint32_t dwItem11;  /* offset: 48 */
    uint32_t dwItem12;  /* offset: 52 */
    uint32_t dwItem13;  /* offset: 56 */
    uint32_t dwItem14;  /* offset: 60 */
    uint32_t dwItem15;  /* offset: 64 */
    uint32_t dwItem16;  /* offset: 68 */
    uint32_t dwItem17;  /* offset: 72 */
    uint32_t dwItem18;  /* offset: 76 */
    uint32_t dwItem19;  /* offset: 80 */
    uint32_t dwItem20;  /* offset: 84 */
    uint32_t dwItem21;  /* offset: 88 */
    uint32_t dwItem22;  /* offset: 92 */
    uint32_t dwItem23;  /* offset: 96 */
    uint32_t dwItem24;  /* offset: 100 */
    uint32_t dwItem25;  /* offset: 104 */
    uint32_t dwItem26;  /* offset: 108 */
    uint32_t dwItem27;  /* offset: 112 */
    uint32_t dwItem28;  /* offset: 116 */
    uint32_t dwItem29;  /* offset: 120 */
    uint32_t dwItem30;  /* offset: 124 */
    uint32_t dwItem31;  /* offset: 128 */
    uint32_t dwItem32;  /* offset: 132 */
    uint32_t dwItem33;  /* offset: 136 */
    uint32_t dwItem34;  /* offset: 140 */
    uint32_t dwItem35;  /* offset: 144 */
    uint32_t dwItem36;  /* offset: 148 */
    uint32_t dwItem37;  /* offset: 152 */
    uint32_t dwItem38;  /* offset: 156 */
    uint32_t dwItem39;  /* offset: 160 */
    uint32_t dwItem40;  /* offset: 164 */
    uint32_t dwItem41;  /* offset: 168 */
    uint32_t dwItem42;  /* offset: 172 */
    uint32_t dwItem43;  /* offset: 176 */
    uint32_t dwItem44;  /* offset: 180 */
    uint32_t dwItem45;  /* offset: 184 */
    uint32_t dwItem46;  /* offset: 188 */
    uint32_t dwItem47;  /* offset: 192 */
    uint32_t dwItem48;  /* offset: 196 */
    uint32_t dwItem49;  /* offset: 200 */
    uint32_t dwItem50;  /* offset: 204 */
    uint8_t byType;  /* offset: 208 */
} Trading;

/* Size: 4 bytes */
typedef struct _Recipe {
    uint32_t dwResultItemID;  /* offset: 0 */
} Recipe;

/* Size: 64 bytes */
typedef struct _AuctionItems {
    uint32_t dwSetID;  /* offset: 0 */
    uint32_t dwAuctionIndex;  /* offset: 4 */
    uint32_t dwItemID;  /* offset: 8 */
    uint32_t dwBidAmount;  /* offset: 12 */
    uint32_t dwBidderID;  /* offset: 16 */
    uint32_t dwOwnerID;  /* offset: 20 */
    uint32_t dwAuctionDate;  /* offset: 24 */
    uint32_t dwFixedPrice;  /* offset: 28 */
    uint8_t bySoldFlag;  /* offset: 32 */
    uint32_t dwField1;  /* offset: 36 */
    uint32_t dwField2;  /* offset: 40 */
    uint32_t dwField3;  /* offset: 44 */
    uint32_t dwField4;  /* offset: 48 */
    uint32_t dwField5;  /* offset: 52 */
    uint8_t byDurability;  /* offset: 56 */
    uint8_t byHardness;  /* offset: 57 */
    uint32_t dwIndex;  /* offset: 60 */
} AuctionItems;

/* Size: 48 bytes */
typedef struct _OldAuctionItems {
    uint32_t dwSetID;  /* offset: 0 */
    uint32_t dwAuctionIndex;  /* offset: 4 */
    uint32_t dwItemID;  /* offset: 8 */
    uint32_t dwLastDate;  /* offset: 12 */
    uint32_t dwOwnerID;  /* offset: 16 */
    uint32_t dwField1;  /* offset: 20 */
    uint32_t dwField2;  /* offset: 24 */
    uint32_t dwField3;  /* offset: 28 */
    uint32_t dwField4;  /* offset: 32 */
    uint32_t dwField5;  /* offset: 36 */
    uint8_t byDurability;  /* offset: 40 */
    uint8_t byHardness;  /* offset: 41 */
    uint32_t dwIndex;  /* offset: 44 */
} OldAuctionItems;

/* Size: 12 bytes */
typedef struct _UniqueItemRange {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwDecayCounter;  /* offset: 8 */
} UniqueItemRange;

/* Size: 48 bytes */
typedef struct _Stash {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint8_t bySlotNum;  /* offset: 8 */
    uint8_t byIdentified;  /* offset: 9 */
    uint8_t byQuantity;  /* offset: 10 */
    uint8_t byDurability;  /* offset: 11 */
    uint8_t byHardness;  /* offset: 12 */
    uint32_t dwField1;  /* offset: 16 */
    uint32_t dwField2;  /* offset: 20 */
    uint32_t dwField3;  /* offset: 24 */
    uint32_t dwField4;  /* offset: 28 */
    uint32_t dwField5;  /* offset: 32 */
    uint8_t byLevel;  /* offset: 36 */
    uint32_t dwXP;  /* offset: 40 */
    uint32_t dwIndex;  /* offset: 44 */
} Stash;

/* Size: 272 bytes */
typedef struct _CharStats {
    uint8_t byStrength;  /* offset: 0 */
    uint8_t byConstitution;  /* offset: 1 */
    uint8_t byAgility;  /* offset: 2 */
    uint8_t byMind;  /* offset: 3 */
    uint8_t byPerception;  /* offset: 4 */
    uint16_t wAttackRating;  /* offset: 6 */
    uint16_t wDefenseRating;  /* offset: 8 */
    uint16_t wBaseDamage;  /* offset: 10 */
    uint16_t wMaxHP;  /* offset: 12 */
    uint16_t wCurrHP;  /* offset: 14 */
    uint16_t wMaxChi;  /* offset: 16 */
    uint16_t wCurrChi;  /* offset: 18 */
    uint16_t wHPRegen;  /* offset: 20 */
    uint16_t wChiRegen;  /* offset: 22 */
    int16_t sFireResist;  /* offset: 24 */
    int16_t sColdResist;  /* offset: 26 */
    int16_t sPoisonResist;  /* offset: 28 */
    int16_t sLightningResist;  /* offset: 30 */
    int16_t sPhysicalResist;  /* offset: 32 */
    uint8_t byMovementMode;  /* offset: 34 */
    uint32_t dwExperience;  /* offset: 36 */
    uint16_t wLevel;  /* offset: 40 */
    uint32_t dwCharGold;  /* offset: 44 */
    uint32_t dwStashGold;  /* offset: 48 */
    int16_t sPrestige;  /* offset: 52 */
    uint16_t wAttributePoints;  /* offset: 54 */
    uint16_t wStancePoints;  /* offset: 56 */
    uint16_t wPowerPoints;  /* offset: 58 */
    uint16_t wSkillPoints;  /* offset: 60 */
    uint8_t byEntityState;  /* offset: 62 */
    uint32_t dwActiveWeapon;  /* offset: 64 */
    uint32_t byActiveWeaponSlot;  /* offset: 68 */
    uint8_t byAttackMode;  /* offset: 72 */
    uint8_t byElementalAdv;  /* offset: 73 */
    uint8_t byGender;  /* offset: 74 */
    uint16_t wMinUnarmedDamage;  /* offset: 76 */
    uint16_t wMaxUnarmedDamage;  /* offset: 78 */
    uint32_t dwElderBrotherID;  /* offset: 80 */
    uint32_t dwClanID;  /* offset: 84 */
    uint32_t dwGuildID;  /* offset: 88 */
    uint32_t dwPartyID;  /* offset: 92 */
    uint32_t dwTaskChainTag;  /* offset: 96 */
    uint16_t wChainStringID;  /* offset: 100 */
    uint32_t dwXPPool;  /* offset: 104 */
    uint16_t wJob;  /* offset: 108 */
    uint8_t byClanQuit;  /* offset: 110 */
    uint8_t byHeroCount;  /* offset: 111 */
    uint32_t dwLastKillerID;  /* offset: 112 */
    uint32_t dwDuelScore;  /* offset: 116 */
    uint32_t dwLastDuelID;  /* offset: 120 */
    uint16_t wDuelsWon;  /* offset: 124 */
    uint16_t wDuelsLost;  /* offset: 126 */
    uint16_t wDuelsOffered;  /* offset: 128 */
    uint16_t wDuelsRefused;  /* offset: 130 */
    uint16_t wDuelsInterrupted;  /* offset: 132 */
    uint16_t wReSpecPoints;  /* offset: 134 */
    uint32_t dwLastHeroReset;  /* offset: 136 */
    uint32_t dwNPCKilled;  /* offset: 140 */
    uint32_t dwPCKilled;  /* offset: 144 */
    uint32_t dwPCResus;  /* offset: 148 */
    uint32_t dwRelicStolen;  /* offset: 152 */
    uint32_t dwRelicReturned;  /* offset: 156 */
    uint32_t dwRedPoints;  /* offset: 160 */
    uint32_t dwGreenPoints;  /* offset: 164 */
    uint32_t dwWarEventID;  /* offset: 168 */
    uint32_t dwHeroPoints;  /* offset: 172 */
    uint32_t dwReadyWeapon;  /* offset: 176 */
    uint32_t dwPKWarning;  /* offset: 180 */
    uint8_t byNumChainPowers;  /* offset: 184 */
    uint32_t dwWaitPeriod;  /* offset: 188 */
    uint32_t dwTeamID;  /* offset: 192 */
    uint32_t dwMulPerc;  /* offset: 196 */
    uint32_t dwFriendFilter;  /* offset: 200 */
    uint32_t dwTime;  /* offset: 204 */
    uint32_t dwTargetID;  /* offset: 208 */
    void* pHandle;  /* offset: 212 */
    void* pScene;  /* offset: 216 */
    void* pSendThread;  /* offset: 220 */
    uint16_t wCurrentStance;  /* offset: 224 */
    uint32_t dwTradeGold;  /* offset: 228 */
    uint8_t byTradeAgreement;  /* offset: 232 */
    int16_t sFireResistCache;  /* offset: 234 */
    int16_t sColdResistCache;  /* offset: 236 */
    int16_t sPoisonResistCache;  /* offset: 238 */
    int16_t sLightningResistCache;  /* offset: 240 */
    int16_t sPhysicalResistCache;  /* offset: 242 */
    uint32_t dwMaxHPCache;  /* offset: 244 */
    uint32_t dwMaxChiCache;  /* offset: 248 */
    uint32_t dwAttackCache;  /* offset: 252 */
    uint32_t dwDefenseCache;  /* offset: 256 */
    uint16_t wStrengthCache;  /* offset: 260 */
    uint16_t wConstitutionCache;  /* offset: 262 */
    uint16_t wAgilityCache;  /* offset: 264 */
    uint16_t wMindCache;  /* offset: 266 */
    uint16_t wPerceptionCache;  /* offset: 268 */
} CharStats;

/* Size: 364 bytes */
typedef struct _CharQuest {
    uint32_t dwSourceLabel;  /* offset: 0 */
    uint32_t dwSourceID;  /* offset: 4 */
    uint32_t dwTimeStart;  /* offset: 8 */
    uint32_t dwDuration;  /* offset: 12 */
    uint32_t dwNPCID;  /* offset: 16 */
    uint32_t dwEnemyID1;  /* offset: 20 */
    uint32_t dwEnemyID2;  /* offset: 24 */
    uint32_t dwEnemyID3;  /* offset: 28 */
    uint32_t dwEnemyID4;  /* offset: 32 */
    uint32_t dwEnemyID5;  /* offset: 36 */
    uint32_t dwLabelID1;  /* offset: 40 */
    uint32_t dwLabelID2;  /* offset: 44 */
    uint32_t dwLabelID3;  /* offset: 48 */
    uint32_t dwLabelID4;  /* offset: 52 */
    uint32_t dwLabelID5;  /* offset: 56 */
    uint32_t dwItemID1;  /* offset: 60 */
    uint32_t dwItemID2;  /* offset: 64 */
    uint32_t dwItemID3;  /* offset: 68 */
    uint32_t dwItemID4;  /* offset: 72 */
    uint32_t dwItemID5;  /* offset: 76 */
    uint32_t dwXP;  /* offset: 80 */
    uint32_t dwTreasureItemID1;  /* offset: 84 */
    uint32_t dwTreasureItemID2;  /* offset: 88 */
    uint32_t dwTreasureItemID3;  /* offset: 92 */
    uint32_t dwTreasureItemID4;  /* offset: 96 */
    uint32_t dwTreasureItemID5;  /* offset: 100 */
    uint32_t fRadius;  /* offset: 104 */
    uint32_t fX;  /* offset: 108 */
    uint32_t fY;  /* offset: 112 */
    uint32_t fZ;  /* offset: 116 */
    uint16_t wQuestStringID1;  /* offset: 120 */
    uint16_t wQuestStringID2;  /* offset: 122 */
    uint16_t wQuestStringID3;  /* offset: 124 */
    uint16_t wQuestStringID4;  /* offset: 126 */
    uint16_t wQuestStringID5;  /* offset: 128 */
    uint16_t wQuestStringID6;  /* offset: 130 */
    uint16_t wQuestStringID7;  /* offset: 132 */
    uint32_t dwQuestParam1ID1;  /* offset: 136 */
    uint32_t dwQuestParam2ID1;  /* offset: 140 */
    uint32_t dwQuestParam3ID1;  /* offset: 144 */
    uint32_t dwQuestParam4ID1;  /* offset: 148 */
    uint32_t dwQuestParam5ID1;  /* offset: 152 */
    uint32_t dwQuestParam1ID2;  /* offset: 156 */
    uint32_t dwQuestParam2ID2;  /* offset: 160 */
    uint32_t dwQuestParam3ID2;  /* offset: 164 */
    uint32_t dwQuestParam4ID2;  /* offset: 168 */
    uint32_t dwQuestParam5ID2;  /* offset: 172 */
    uint32_t dwQuestParam1ID3;  /* offset: 176 */
    uint32_t dwQuestParam2ID3;  /* offset: 180 */
    uint32_t dwQuestParam3ID3;  /* offset: 184 */
    uint32_t dwQuestParam4ID3;  /* offset: 188 */
    uint32_t dwQuestParam5ID3;  /* offset: 192 */
    uint32_t dwQuestParam1ID4;  /* offset: 196 */
    uint32_t dwQuestParam2ID4;  /* offset: 200 */
    uint32_t dwQuestParam3ID4;  /* offset: 204 */
    uint32_t dwQuestParam4ID4;  /* offset: 208 */
    uint32_t dwQuestParam5ID4;  /* offset: 212 */
    uint32_t dwQuestParam1ID5;  /* offset: 216 */
    uint32_t dwQuestParam2ID5;  /* offset: 220 */
    uint32_t dwQuestParam3ID5;  /* offset: 224 */
    uint32_t dwQuestParam4ID5;  /* offset: 228 */
    uint32_t dwQuestParam5ID5;  /* offset: 232 */
    uint32_t dwQuestParam1ID6;  /* offset: 236 */
    uint32_t dwQuestParam2ID6;  /* offset: 240 */
    uint32_t dwQuestParam3ID6;  /* offset: 244 */
    uint32_t dwQuestParam4ID6;  /* offset: 248 */
    uint32_t dwQuestParam5ID6;  /* offset: 252 */
    uint32_t dwQuestParam1ID7;  /* offset: 256 */
    uint32_t dwQuestParam2ID7;  /* offset: 260 */
    uint32_t dwQuestParam3ID7;  /* offset: 264 */
    uint32_t dwQuestParam4ID7;  /* offset: 268 */
    uint32_t dwQuestParam5ID7;  /* offset: 272 */
    uint32_t dwChainToTag;  /* offset: 276 */
    uint16_t wChainStringID;  /* offset: 280 */
    uint16_t wType;  /* offset: 282 */
    uint32_t dwGold;  /* offset: 284 */
    uint16_t wLocID1;  /* offset: 288 */
    uint16_t wLocID2;  /* offset: 290 */
    uint16_t wLocID3;  /* offset: 292 */
    uint16_t wLocID4;  /* offset: 294 */
    uint16_t wLocID5;  /* offset: 296 */
    uint16_t wLocStr;  /* offset: 298 */
    uint8_t byState;  /* offset: 300 */
    uint8_t byDifficulty;  /* offset: 301 */
    uint8_t byReturnFlag;  /* offset: 302 */
    uint8_t byEnemy1Count;  /* offset: 303 */
    uint8_t byEnemy2Count;  /* offset: 304 */
    uint8_t byEnemy3Count;  /* offset: 305 */
    uint8_t byEnemy4Count;  /* offset: 306 */
    uint8_t byEnemy5Count;  /* offset: 307 */
    uint8_t byItem1Count;  /* offset: 308 */
    uint8_t byItem2Count;  /* offset: 309 */
    uint8_t byItem3Count;  /* offset: 310 */
    uint8_t byItem4Count;  /* offset: 311 */
    uint8_t byItem5Count;  /* offset: 312 */
    uint8_t byTreasureQuantity1;  /* offset: 313 */
    uint8_t byTreasureQuantity2;  /* offset: 314 */
    uint8_t byTreasureQuantity3;  /* offset: 315 */
    uint8_t byTreasureQuantity4;  /* offset: 316 */
    uint8_t byTreasureQuantity5;  /* offset: 317 */
    uint8_t byLastQuestCount;  /* offset: 318 */
    uint32_t dwLastQuest1;  /* offset: 320 */
    uint32_t dwLastQuest2;  /* offset: 324 */
    uint32_t dwLastQuest3;  /* offset: 328 */
    uint32_t dwLastQuest4;  /* offset: 332 */
    uint32_t dwLastQuest5;  /* offset: 336 */
    uint32_t dwLastQuest6;  /* offset: 340 */
    uint32_t dwLastQuest7;  /* offset: 344 */
    uint32_t dwLastQuest8;  /* offset: 348 */
    uint32_t dwLastQuest9;  /* offset: 352 */
    uint32_t dwLastQuest10;  /* offset: 356 */
    uint32_t dwLastQuestIndex;  /* offset: 360 */
} CharQuest;

/* Size: 780 bytes */
typedef struct _CharSys {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwModelType;  /* offset: 4 */
    uint32_t fX;  /* offset: 8 */
    uint32_t fY;  /* offset: 12 */
    uint32_t fZ;  /* offset: 16 */
    uint32_t fFacing;  /* offset: 20 */
    uint32_t dwBindSceneID;  /* offset: 24 */
    uint32_t fBindX;  /* offset: 28 */
    uint32_t fBindY;  /* offset: 32 */
    uint32_t fBindZ;  /* offset: 36 */
    uint16_t wTemplateID;  /* offset: 40 */
    uint16_t wFace;  /* offset: 42 */
    uint16_t wLeftShoulder;  /* offset: 44 */
    uint16_t wRightShoulder;  /* offset: 46 */
    uint16_t wLeftBracer;  /* offset: 48 */
    uint16_t wRightBracer;  /* offset: 50 */
    uint16_t wLeftLeg;  /* offset: 52 */
    uint16_t wRightLeg;  /* offset: 54 */
    uint32_t dwArmor;  /* offset: 56 */
    uint8_t byZoneFlag;  /* offset: 60 */
    uint8_t byRespawnFlag;  /* offset: 61 */
    uint8_t byTitle;  /* offset: 62 */
    uint8_t byCharacterName;  /* offset: 63 */
    uint32_t dwOptions;  /* offset: 104 */
    uint16_t wGMOptions;  /* offset: 108 */
    uint32_t dwMuteTime;  /* offset: 112 */
    uint32_t dwLastSceneID;  /* offset: 116 */
    uint32_t dwTapID;  /* offset: 120 */
    uint32_t dwVisualFlag;  /* offset: 124 */
    uint8_t byZonedFlag;  /* offset: 128 */
    uint8_t byMutedFlag;  /* offset: 129 */
    uint32_t dwMapID;  /* offset: 132 */
    uint32_t dwLabel;  /* offset: 136 */
    void* pHandle;  /* offset: 140 */
    void* pScene;  /* offset: 144 */
    void* pSendThread;  /* offset: 148 */
    uint32_t dwCount;  /* offset: 152 */
    uint32_t dwLastScriptID;  /* offset: 156 */
    uint32_t dwChatFilter;  /* offset: 160 */
    uint8_t byZoneKillFlag;  /* offset: 164 */
    uint8_t byDisCount;  /* offset: 165 */
    uint16_t wDiscountGroup1;  /* offset: 166 */
    uint32_t fDiscount1;  /* offset: 168 */
    uint16_t wDiscountGroup2;  /* offset: 172 */
    uint32_t fDiscount2;  /* offset: 176 */
    uint16_t wDiscountGroup3;  /* offset: 180 */
    uint32_t fDiscount3;  /* offset: 184 */
    uint16_t wDiscountGroup4;  /* offset: 188 */
    uint32_t fDiscount4;  /* offset: 192 */
    uint16_t wDiscountGroup5;  /* offset: 196 */
    uint32_t fDiscount5;  /* offset: 200 */
    uint8_t byMarkupCount;  /* offset: 204 */
    uint16_t wMarkupGroup1;  /* offset: 206 */
    uint32_t fMarkup1;  /* offset: 208 */
    uint16_t wMarkupGroup2;  /* offset: 212 */
    uint32_t fMarkup2;  /* offset: 216 */
    uint16_t wMarkupGroup3;  /* offset: 220 */
    uint32_t fMarkup3;  /* offset: 224 */
    uint16_t wMarkupGroup4;  /* offset: 228 */
    uint32_t fMarkup4;  /* offset: 232 */
    uint16_t wMarkupGroup5;  /* offset: 236 */
    uint32_t fMarkup5;  /* offset: 240 */
    uint32_t fPowerDiscount;  /* offset: 244 */
    uint32_t fSkillDiscount;  /* offset: 248 */
    uint32_t fStanceDiscount;  /* offset: 252 */
    uint32_t fBlacksmithDiscount;  /* offset: 256 */
    uint32_t fDoctorDiscount;  /* offset: 260 */
    uint32_t fIdentifyDiscount;  /* offset: 264 */
} CharSys;

/* Size: 56 bytes */
typedef struct _ZoneConnect {
    uint32_t dwLabel;  /* offset: 0 */
    uint32_t dwToSceneID;  /* offset: 4 */
    uint32_t dwMapID;  /* offset: 8 */
    uint32_t fX1;  /* offset: 12 */
    uint32_t fX2;  /* offset: 16 */
    uint32_t fZ1;  /* offset: 20 */
    uint32_t fZ2;  /* offset: 24 */
    uint32_t fY;  /* offset: 28 */
    uint32_t fFacing;  /* offset: 32 */
    uint16_t wLocString;  /* offset: 36 */
    uint32_t dwPrice;  /* offset: 40 */
    uint8_t byShowCost;  /* offset: 44 */
    uint16_t wMinLevel;  /* offset: 46 */
    uint16_t wMaxLevel;  /* offset: 48 */
    uint32_t dwIndex;  /* offset: 52 */
} ZoneConnect;

/* Size: 8 bytes */
typedef struct _XPPool {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwExperience;  /* offset: 4 */
} XPPool;

/* Size: 8 bytes */
typedef struct _Caps {
    uint32_t dwCapType;  /* offset: 0 */
    uint16_t wLevel;  /* offset: 4 */
} Caps;

/* Size: 412 bytes */
typedef struct _NPCAttrib {
    uint32_t dwAttribID;  /* offset: 0 */
    uint32_t dwModelID;  /* offset: 4 */
    uint8_t byAttachmentID;  /* offset: 8 */
    uint32_t dwAttRating;  /* offset: 12 */
    uint32_t dwDefRating;  /* offset: 16 */
    uint16_t wdMinFireDmg;  /* offset: 20 */
    uint16_t wdMaxFireDmg;  /* offset: 22 */
    uint16_t wdMinColdDmg;  /* offset: 24 */
    uint16_t wdMaxColdDmg;  /* offset: 26 */
    uint16_t wdMinLightningDmg;  /* offset: 28 */
    uint16_t wdMaxLightningDmg;  /* offset: 30 */
    uint16_t wdMinPoisonDmg;  /* offset: 32 */
    uint16_t wdMaxPoisonDmg;  /* offset: 34 */
    uint16_t wdMinPhysicalDmg;  /* offset: 36 */
    uint16_t wdMaxPhysicalDmg;  /* offset: 38 */
    uint32_t dwMaxHitPoints;  /* offset: 40 */
    uint16_t wdHitPointRegen;  /* offset: 44 */
    int16_t sFireResist;  /* offset: 46 */
    int16_t sColdResist;  /* offset: 48 */
    int16_t sLightningResist;  /* offset: 50 */
    int16_t sPoisonResist;  /* offset: 52 */
    int16_t sPhysicalResist;  /* offset: 54 */
    uint8_t byMoveRate;  /* offset: 56 */
    uint32_t dwXPPerHP;  /* offset: 60 */
    uint32_t dwXPValue;  /* offset: 64 */
    uint16_t wdLevel;  /* offset: 68 */
    uint32_t dwClan;  /* offset: 72 */
    uint8_t byStanceID;  /* offset: 76 */
    uint16_t wdAnimStanceID;  /* offset: 78 */
    uint16_t wdPowerID1;  /* offset: 80 */
    uint8_t byPowerRank1;  /* offset: 82 */
    uint16_t wdPowerID2;  /* offset: 84 */
    uint8_t byPowerRank2;  /* offset: 86 */
    uint16_t wdPowerID3;  /* offset: 88 */
    uint8_t byPowerRank3;  /* offset: 90 */
    uint16_t wdPowerID4;  /* offset: 92 */
    uint8_t byPowerRank4;  /* offset: 94 */
    uint16_t wdPowerID5;  /* offset: 96 */
    uint8_t byPowerRank5;  /* offset: 98 */
    uint16_t wdPowerID6;  /* offset: 100 */
    uint8_t byPowerRank6;  /* offset: 102 */
    uint16_t wdPowerID7;  /* offset: 104 */
    uint8_t byPowerRank7;  /* offset: 106 */
    uint16_t wdPowerID8;  /* offset: 108 */
    uint8_t byPowerRank8;  /* offset: 110 */
    uint16_t wdPowerID9;  /* offset: 112 */
    uint8_t byPowerRank9;  /* offset: 114 */
    uint16_t wdPowerID10;  /* offset: 116 */
    uint8_t byPowerRank10;  /* offset: 118 */
    uint16_t wdTreasureTableID;  /* offset: 120 */
    uint8_t byInvisible;  /* offset: 122 */
    uint8_t byAggressiveFlag;  /* offset: 123 */
    uint16_t wdRetreatHitPoints;  /* offset: 124 */
    uint16_t wdAggroValue;  /* offset: 126 */
    uint8_t byScanOption;  /* offset: 128 */
    uint8_t byPowerMultiplier;  /* offset: 129 */
    uint8_t byMeleeMultiplier;  /* offset: 130 */
    uint8_t byRangeMultiplier;  /* offset: 131 */
    uint8_t byReturnFlag;  /* offset: 132 */
    uint16_t wdChallengeLevel;  /* offset: 134 */
    uint32_t dwScriptID;  /* offset: 136 */
    uint32_t dwNameID;  /* offset: 140 */
    uint8_t byTargetType;  /* offset: 144 */
    uint8_t byMeleePerc;  /* offset: 145 */
    uint8_t byPowerPerc1;  /* offset: 146 */
    uint8_t byPowerPerc2;  /* offset: 147 */
    uint8_t byPowerPerc3;  /* offset: 148 */
    uint8_t byPowerPerc4;  /* offset: 149 */
    uint8_t byPowerPerc5;  /* offset: 150 */
    uint8_t byPowerPerc6;  /* offset: 151 */
    uint8_t byPowerPerc7;  /* offset: 152 */
    uint8_t byPowerPerc8;  /* offset: 153 */
    uint8_t byPowerPerc9;  /* offset: 154 */
    uint8_t byPowerPerc10;  /* offset: 155 */
    uint8_t byIsGuard;  /* offset: 156 */
    uint8_t byHalfMoveRate;  /* offset: 157 */
    uint16_t wdMeleeRange;  /* offset: 158 */
    uint16_t wdPowerRange1;  /* offset: 160 */
    uint16_t wdPowerRange2;  /* offset: 162 */
    uint16_t wdPowerRange3;  /* offset: 164 */
    uint16_t wdPowerRange4;  /* offset: 166 */
    uint16_t wdPowerRange5;  /* offset: 168 */
    uint16_t wdPowerRange6;  /* offset: 170 */
    uint16_t wdPowerRange7;  /* offset: 172 */
    uint16_t wdPowerRange8;  /* offset: 174 */
    uint16_t wdPowerRange9;  /* offset: 176 */
    uint16_t wdPowerRange10;  /* offset: 178 */
    uint16_t wdEffectID;  /* offset: 180 */
    uint16_t wdScanAreaRange;  /* offset: 182 */
    uint8_t byDoClanRating;  /* offset: 184 */
    uint8_t byEnemyClan;  /* offset: 185 */
    uint8_t byUpValue;  /* offset: 186 */
    uint8_t byDownValue;  /* offset: 187 */
    uint8_t byIsSNPC;  /* offset: 188 */
    uint8_t byInvisiblePerc;  /* offset: 189 */
    uint8_t byMaxItemCount;  /* offset: 190 */
    uint8_t byPermanentDeath;  /* offset: 191 */
    uint8_t byIsDead;  /* offset: 192 */
    int16_t sWeaponSpeed;  /* offset: 194 */
    uint16_t wdDefEffID1;  /* offset: 196 */
    uint8_t byDefPowerRank1;  /* offset: 198 */
    uint16_t wdDefDuration1;  /* offset: 200 */
    uint16_t wdDefEffID2;  /* offset: 202 */
    uint8_t byDefPowerRank2;  /* offset: 204 */
    uint16_t wdDefDuration2;  /* offset: 206 */
    uint16_t wdDefEffID3;  /* offset: 208 */
    uint8_t byDefPowerRank3;  /* offset: 210 */
    uint16_t wdDefDuration3;  /* offset: 212 */
    uint16_t wdDefEffID4;  /* offset: 214 */
    uint8_t byDefPowerRank4;  /* offset: 216 */
    uint16_t wdDefDuration4;  /* offset: 218 */
    uint16_t wdDefEffID5;  /* offset: 220 */
    uint8_t byDefPowerRank5;  /* offset: 222 */
    uint16_t wdDefDuration5;  /* offset: 224 */
    uint16_t wdDefEffID6;  /* offset: 226 */
    uint8_t byDefPowerRank6;  /* offset: 228 */
    uint16_t wdDefDuration6;  /* offset: 230 */
    uint16_t wdDefEffID7;  /* offset: 232 */
    uint8_t byDefPowerRank7;  /* offset: 234 */
    uint16_t wdDefDuration7;  /* offset: 236 */
    uint16_t wdDefEffID8;  /* offset: 238 */
    uint8_t byDefPowerRank8;  /* offset: 240 */
    uint16_t wdDefDuration8;  /* offset: 242 */
    uint16_t wdDefEffID9;  /* offset: 244 */
    uint8_t byDefPowerRank9;  /* offset: 246 */
    uint16_t wdDefDuration9;  /* offset: 248 */
    uint16_t wdDefEffID10;  /* offset: 250 */
    uint8_t byDefPowerRank10;  /* offset: 252 */
    uint16_t wdDefDuration10;  /* offset: 254 */
    int16_t sStunResist;  /* offset: 256 */
    int16_t sSlowResist;  /* offset: 258 */
    int16_t sEntangledResist;  /* offset: 260 */
    uint16_t wdAggroRate;  /* offset: 262 */
    uint16_t wdDetectHiddenRate;  /* offset: 264 */
    uint8_t byCallHelpRatio;  /* offset: 266 */
    uint16_t wdCombatTimeout;  /* offset: 268 */
    uint8_t bySplitChance;  /* offset: 270 */
    uint8_t bySplitDamageWeakness;  /* offset: 271 */
    uint8_t bySplitMax;  /* offset: 272 */
    uint32_t dwSplitID;  /* offset: 276 */
    uint16_t wSplitFX;  /* offset: 280 */
    uint8_t bySpawnChildChance;  /* offset: 282 */
    uint32_t dwSpawnChildID;  /* offset: 284 */
    uint16_t wSpawnChildAnim;  /* offset: 288 */
    uint32_t dwBossID;  /* offset: 292 */
    uint16_t wBossFXID;  /* offset: 296 */
    uint8_t byScatterChance;  /* offset: 298 */
    uint8_t byScatterDamageWeakness;  /* offset: 299 */
    uint8_t byScatterMax;  /* offset: 300 */
    uint32_t dwScatterID;  /* offset: 304 */
    uint16_t wScatterFXID;  /* offset: 308 */
    uint16_t wEaterThreshold;  /* offset: 310 */
    uint8_t byEaterChance;  /* offset: 312 */
    uint16_t wEaterRange;  /* offset: 314 */
    uint32_t dwEaterID;  /* offset: 316 */
    uint16_t wEaterHPGain;  /* offset: 320 */
    uint16_t wEaterAnim;  /* offset: 322 */
    uint8_t byPowerType1;  /* offset: 324 */
    uint8_t byPowerType2;  /* offset: 325 */
    uint8_t byPowerType3;  /* offset: 326 */
    uint8_t byPowerType4;  /* offset: 327 */
    uint8_t byPowerType5;  /* offset: 328 */
    uint8_t byPowerType6;  /* offset: 329 */
    uint8_t byPowerType7;  /* offset: 330 */
    uint8_t byPowerType8;  /* offset: 331 */
    uint8_t byPowerType9;  /* offset: 332 */
    uint8_t byPowerType10;  /* offset: 333 */
    uint32_t dwScanScriptID;  /* offset: 336 */
    uint8_t byCheckDelete;  /* offset: 340 */
    uint8_t byInvisibilityPerc;  /* offset: 341 */
    uint32_t dwCheckNPCScriptID;  /* offset: 344 */
    uint8_t byMoveAwayPerc;  /* offset: 348 */
    uint8_t byLure;  /* offset: 349 */
    uint8_t bySwarm;  /* offset: 350 */
    uint32_t dwCallForHelpID;  /* offset: 352 */
    uint8_t byPersistent;  /* offset: 356 */
    uint32_t dwTargetLostID;  /* offset: 360 */
    uint32_t dwArrivedID;  /* offset: 364 */
    uint8_t byBodyGuard;  /* offset: 368 */
    uint8_t byAOEHunter;  /* offset: 369 */
    uint32_t dwAttackScriptID;  /* offset: 372 */
    uint32_t dwStuckScriptID;  /* offset: 376 */
    uint8_t byNPCCheckOW;  /* offset: 380 */
    uint8_t byCallForHelpOW;  /* offset: 381 */
    uint32_t dwRangeCheckID;  /* offset: 384 */
    uint8_t byRangeCheckOW;  /* offset: 388 */
    uint8_t byAttackScriptOW;  /* offset: 389 */
    uint32_t dwPowerScriptID;  /* offset: 392 */
    uint8_t byPowerScriptOW;  /* offset: 396 */
    uint32_t dwProperties;  /* offset: 400 */
    uint16_t wdIdleTime;  /* offset: 404 */
    uint8_t byBreakSprint;  /* offset: 406 */
    uint8_t byHitFilter;  /* offset: 407 */
    uint8_t byRotate;  /* offset: 408 */
    uint16_t wdLureRadius;  /* offset: 410 */
} NPCAttrib;

/* Size: 56 bytes */
typedef struct _SpawnPt {
    uint32_t dwSpawnPtID;  /* offset: 0 */
    uint32_t dwAttribID;  /* offset: 4 */
    uint16_t wdCount;  /* offset: 8 */
    uint16_t wdRadius;  /* offset: 10 */
    uint16_t wdFacing;  /* offset: 12 */
    uint8_t byIsOn;  /* offset: 14 */
    uint8_t bySpawnMax;  /* offset: 15 */
    uint8_t byUseTime;  /* offset: 16 */
    uint8_t byUseDate;  /* offset: 17 */
    uint8_t byUseRangeHour;  /* offset: 18 */
    uint8_t byUseRangeDate;  /* offset: 19 */
    uint32_t dwBeginHour;  /* offset: 20 */
    uint32_t dwEndHour;  /* offset: 24 */
    uint32_t dwBeginDay;  /* offset: 28 */
    uint32_t dwBeginMonth;  /* offset: 32 */
    uint32_t dwEndDay;  /* offset: 36 */
    uint32_t dwEndMonth;  /* offset: 40 */
    uint32_t dwGrp;  /* offset: 44 */
    uint32_t dwScan;  /* offset: 48 */
    uint32_t dwExScan;  /* offset: 52 */
} SpawnPt;

/* Size: 148 bytes */
typedef struct _QuestRandom {
    uint32_t dwLabel;  /* offset: 0 */
    uint32_t dwIndx;  /* offset: 4 */
    uint16_t wType;  /* offset: 8 */
    uint16_t wTreasureID;  /* offset: 10 */
    uint32_t dwDuration;  /* offset: 12 */
    uint16_t wMinLevelFilter;  /* offset: 16 */
    uint16_t wMaxLevelFilter;  /* offset: 18 */
    uint16_t wStanceFilter;  /* offset: 20 */
    uint16_t wPowerFilter;  /* offset: 22 */
    int16_t sMinPrestigeFilter;  /* offset: 24 */
    int16_t sMaxPrestigeFilter;  /* offset: 26 */
    uint32_t dwClanFilter;  /* offset: 28 */
    uint32_t dwNPCID;  /* offset: 32 */
    uint32_t dwEnemyID1;  /* offset: 36 */
    uint32_t dwEnemyID2;  /* offset: 40 */
    uint32_t dwEnemyID3;  /* offset: 44 */
    uint32_t dwEnemyID4;  /* offset: 48 */
    uint32_t dwEnemyID5;  /* offset: 52 */
    uint32_t dwLabelID1;  /* offset: 56 */
    uint32_t dwLabelID2;  /* offset: 60 */
    uint32_t dwLabelID3;  /* offset: 64 */
    uint32_t dwLabelID4;  /* offset: 68 */
    uint32_t dwLabelID5;  /* offset: 72 */
    uint32_t dwItemID1;  /* offset: 76 */
    uint32_t dwItemID2;  /* offset: 80 */
    uint32_t dwItemID3;  /* offset: 84 */
    uint32_t dwItemID4;  /* offset: 88 */
    uint32_t dwItemID5;  /* offset: 92 */
    uint32_t dwXP;  /* offset: 96 */
    uint32_t dwChainID;  /* offset: 100 */
    uint32_t dwChainToTag;  /* offset: 104 */
    uint32_t fRadius;  /* offset: 108 */
    uint16_t wLocID1;  /* offset: 112 */
    uint16_t wLocID2;  /* offset: 114 */
    uint16_t wLocID3;  /* offset: 116 */
    uint16_t wLocID4;  /* offset: 118 */
    uint16_t wLocID5;  /* offset: 120 */
    uint16_t wReason;  /* offset: 122 */
    uint16_t wChainStringID;  /* offset: 124 */
    uint16_t wLocStr;  /* offset: 126 */
    uint8_t byItem1Count;  /* offset: 128 */
    uint8_t byItem2Count;  /* offset: 129 */
    uint8_t byItem3Count;  /* offset: 130 */
    uint8_t byItem4Count;  /* offset: 131 */
    uint8_t byItem5Count;  /* offset: 132 */
    uint8_t byActivation;  /* offset: 133 */
    uint8_t byDifficulty;  /* offset: 134 */
    uint8_t byPartyFilterFlag;  /* offset: 135 */
    uint8_t byReturnFlag;  /* offset: 136 */
    uint8_t byEnemy1Count;  /* offset: 137 */
    uint8_t byEnemy2Count;  /* offset: 138 */
    uint8_t byEnemy3Count;  /* offset: 139 */
    uint8_t byEnemy4Count;  /* offset: 140 */
    uint8_t byEnemy5Count;  /* offset: 141 */
    uint32_t dwIndex;  /* offset: 144 */
} QuestRandom;

/* Size: 16 bytes */
typedef struct _GenFluff {
    uint32_t dwQuestTextType;  /* offset: 0 */
    uint16_t wEasyID;  /* offset: 4 */
    uint16_t wMediumID;  /* offset: 6 */
    uint16_t wHardID;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 12 */
} GenFluff;

/* Size: 8 bytes */
typedef struct _Weather {
    uint32_t dwTypeOfWeather;  /* offset: 0 */
    uint8_t byWeatherType;  /* offset: 4 */
    uint8_t byChanceStart;  /* offset: 5 */
    uint8_t byChanceHeavier;  /* offset: 6 */
    uint8_t byChanceStop;  /* offset: 7 */
} Weather;

/* Size: 36 bytes */
typedef struct _IntData {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwXPPool;  /* offset: 4 */
    uint32_t dwClanID;  /* offset: 8 */
    uint32_t dwElderBrotherID;  /* offset: 12 */
    uint16_t wJob;  /* offset: 16 */
    uint32_t dwAuctionGold;  /* offset: 20 */
    uint32_t dwGuildID;  /* offset: 24 */
    uint16_t wRClanID;  /* offset: 28 */
    uint16_t wHeroPoints;  /* offset: 30 */
    uint8_t byRating;  /* offset: 32 */
} IntData;

/* Size: 4 bytes */
typedef struct _LoginDataView {
    uint32_t dwLoginTime;  /* offset: 0 */
} LoginDataView;

/* Size: 4 bytes */
typedef struct _CharDataView {
    uint32_t dwCharID;  /* offset: 0 */
} CharDataView;

/* Size: 40 bytes */
typedef struct _CharNameView {
    uint8_t byCharacterName;  /* offset: 0 */
} CharNameView;

/* Size: 1 bytes */
typedef struct _NPCMod {
    uint8_t byIsDead;  /* offset: 0 */
} NPCMod;

/* Size: 12 bytes */
typedef struct _SpawnPtAtt {
    uint8_t byIsMod;  /* offset: 0 */
    uint32_t dwAttribID;  /* offset: 4 */
    uint8_t byIsModOn;  /* offset: 8 */
    uint8_t byIsOn;  /* offset: 9 */
} SpawnPtAtt;

/* Size: 16 bytes */
typedef struct _GenHints {
    uint32_t dwLabel;  /* offset: 0 */
    uint16_t wStringID;  /* offset: 4 */
    uint16_t wWeight;  /* offset: 6 */
    uint16_t wSpecialEventID;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 12 */
} GenHints;

/* Size: 16 bytes */
typedef struct _QuestText {
    uint32_t dwQuestID;  /* offset: 0 */
    uint16_t wTopic;  /* offset: 4 */
    uint16_t wDescription;  /* offset: 6 */
    uint16_t wAssigned;  /* offset: 8 */
    uint16_t wComplete;  /* offset: 10 */
    uint16_t wFailed;  /* offset: 12 */
} QuestText;

/* Size: 16 bytes */
typedef struct _ChatBarList {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwBarCharID;  /* offset: 4 */
    uint32_t dwHashValue;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 12 */
} ChatBarList;

/* Size: 8 bytes */
typedef struct _ChatBarredList {
    uint32_t dwBarCharID;  /* offset: 0 */
    uint32_t dwIndex;  /* offset: 4 */
} ChatBarredList;

/* Size: 16 bytes */
typedef struct _FriendList {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwFriendID;  /* offset: 4 */
    uint8_t byStatus;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 12 */
} FriendList;

/* Size: 44 bytes */
typedef struct _ZCStuck {
    uint32_t dwToSceneID;  /* offset: 0 */
    uint32_t dwMapID;  /* offset: 4 */
    uint32_t dwLabel;  /* offset: 8 */
    uint32_t fX1;  /* offset: 12 */
    uint32_t fX2;  /* offset: 16 */
    uint32_t fZ1;  /* offset: 20 */
    uint32_t fZ2;  /* offset: 24 */
    uint32_t fY;  /* offset: 28 */
    uint32_t fFacing;  /* offset: 32 */
    uint8_t byType;  /* offset: 36 */
    uint32_t dwIndex;  /* offset: 40 */
} ZCStuck;

/* Size: 52 bytes */
typedef struct _SysMsg {
    uint16_t wSysMsg1;  /* offset: 0 */
    uint16_t wSysMsg2;  /* offset: 2 */
    uint16_t wSysMsg3;  /* offset: 4 */
    uint16_t wSysMsg4;  /* offset: 6 */
    uint16_t wSysMsg5;  /* offset: 8 */
    uint32_t dwSysMsg1Param1;  /* offset: 12 */
    uint32_t dwSysMsg2Param1;  /* offset: 16 */
    uint32_t dwSysMsg3Param1;  /* offset: 20 */
    uint32_t dwSysMsg4Param1;  /* offset: 24 */
    uint32_t dwSysMsg5Param1;  /* offset: 28 */
    uint32_t dwSysMsg1Param2;  /* offset: 32 */
    uint32_t dwSysMsg2Param2;  /* offset: 36 */
    uint32_t dwSysMsg3Param2;  /* offset: 40 */
    uint32_t dwSysMsg4Param2;  /* offset: 44 */
    uint32_t dwSysMsg5Param2;  /* offset: 48 */
} SysMsg;

/* Size: 5 bytes */
typedef struct _TemplateAdv {
    uint8_t byStrength;  /* offset: 0 */
    uint8_t byConstitution;  /* offset: 1 */
    uint8_t byAgility;  /* offset: 2 */
    uint8_t byMind;  /* offset: 3 */
    uint8_t byPerception;  /* offset: 4 */
} TemplateAdv;

/* Size: 1 bytes */
typedef struct _NPCIsDead {
    uint8_t byIsDead;  /* offset: 0 */
} NPCIsDead;

/* Size: 8 bytes */
typedef struct _SceneIndex {
    uint16_t wServerID;  /* offset: 0 */
    uint8_t byAccessFlag;  /* offset: 2 */
    uint32_t dwType;  /* offset: 4 */
} SceneIndex;

/* Size: 1 bytes */
typedef struct _EStatus {
    uint8_t byElderStatus;  /* offset: 0 */
} EStatus;

/* Size: 4 bytes */
typedef struct _ClanPrestige {
    uint32_t dwPrestige;  /* offset: 0 */
} ClanPrestige;

/* Size: 44 bytes */
typedef struct _SpecialObj {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwID;  /* offset: 4 */
    uint32_t dwModel;  /* offset: 8 */
    uint16_t wAnimation;  /* offset: 12 */
    uint16_t wType;  /* offset: 14 */
    uint32_t dwData1;  /* offset: 16 */
    uint32_t dwData2;  /* offset: 20 */
    uint32_t dwData3;  /* offset: 24 */
    uint32_t dwData4;  /* offset: 28 */
    uint32_t dwData5;  /* offset: 32 */
    uint32_t dwData6;  /* offset: 36 */
    uint32_t dwIndex;  /* offset: 40 */
} SpecialObj;

/* Size: 8 bytes */
typedef struct _GameEvent {
    uint32_t dwID;  /* offset: 0 */
    int16_t sStatus;  /* offset: 4 */
} GameEvent;

/* Size: 2 bytes */
typedef struct _TempCharStats {
    uint16_t wLevel;  /* offset: 0 */
} TempCharStats;

/* Size: 116 bytes */
typedef struct _GameEventData {
    int16_t sStatus;  /* offset: 0 */
    uint32_t dwData1;  /* offset: 4 */
    uint32_t dwData2;  /* offset: 8 */
    uint32_t dwData3;  /* offset: 12 */
    uint32_t dwData4;  /* offset: 16 */
    uint32_t dwData5;  /* offset: 20 */
    uint32_t dwData6;  /* offset: 24 */
    uint32_t dwData7;  /* offset: 28 */
    uint32_t dwData8;  /* offset: 32 */
    uint32_t dwData9;  /* offset: 36 */
    uint32_t dwData10;  /* offset: 40 */
    uint32_t dwData11;  /* offset: 44 */
    uint32_t dwData12;  /* offset: 48 */
    uint32_t dwData13;  /* offset: 52 */
    uint32_t dwData14;  /* offset: 56 */
    uint32_t dwData15;  /* offset: 60 */
    uint32_t dwData16;  /* offset: 64 */
    uint32_t dwAScriptID;  /* offset: 68 */
    uint8_t chADBScript;  /* offset: 72 */
    uint32_t dwDScriptID;  /* offset: 92 */
    uint8_t chDDBScript;  /* offset: 96 */
} GameEventData;

/* Size: 2 bytes */
typedef struct _GameEventStatus {
    int16_t sStatus;  /* offset: 0 */
} GameEventStatus;

/* Size: 4 bytes */
typedef struct _Setting {
    uint8_t bySteal;  /* offset: 0 */
    uint8_t byPKLevel;  /* offset: 1 */
    uint8_t byOpenPK;  /* offset: 2 */
    uint8_t byWarGrace;  /* offset: 3 */
} Setting;

/* Size: 12 bytes */
typedef struct _SpawnPtDyn {
    uint32_t dwSpawnPtID;  /* offset: 0 */
    uint8_t byIsOn;  /* offset: 4 */
    uint32_t dwAttribID;  /* offset: 8 */
} SpawnPtDyn;

/* Size: 8 bytes */
typedef struct _NPCAttribDyn {
    uint32_t dwAttribID;  /* offset: 0 */
    uint8_t byIsDead;  /* offset: 4 */
} NPCAttribDyn;

/* Size: 408 bytes */
typedef struct _NPCAttribMod {
    uint32_t dwAttribID;  /* offset: 0 */
    uint32_t dwModelID;  /* offset: 4 */
    uint8_t byAttachmentID;  /* offset: 8 */
    uint32_t dwAttRating;  /* offset: 12 */
    uint32_t dwDefRating;  /* offset: 16 */
    uint16_t wdMinFireDmg;  /* offset: 20 */
    uint16_t wdMaxFireDmg;  /* offset: 22 */
    uint16_t wdMinColdDmg;  /* offset: 24 */
    uint16_t wdMaxColdDmg;  /* offset: 26 */
    uint16_t wdMinLightningDmg;  /* offset: 28 */
    uint16_t wdMaxLightningDmg;  /* offset: 30 */
    uint16_t wdMinPoisonDmg;  /* offset: 32 */
    uint16_t wdMaxPoisonDmg;  /* offset: 34 */
    uint16_t wdMinPhysicalDmg;  /* offset: 36 */
    uint16_t wdMaxPhysicalDmg;  /* offset: 38 */
    uint16_t wdMinDirectDmg;  /* offset: 40 */
    uint16_t wdMaxDirectDmg;  /* offset: 42 */
    uint32_t dwMaxHitPoints;  /* offset: 44 */
    uint16_t wdHitPointRegen;  /* offset: 48 */
    int16_t sFireResist;  /* offset: 50 */
    int16_t sColdResist;  /* offset: 52 */
    int16_t sLightningResist;  /* offset: 54 */
    int16_t sPoisonResist;  /* offset: 56 */
    int16_t sPhysicalResist;  /* offset: 58 */
    uint8_t byMoveRate;  /* offset: 60 */
    uint32_t dwXPPerHP;  /* offset: 64 */
    uint32_t dwXPValue;  /* offset: 68 */
    uint16_t wdLevel;  /* offset: 72 */
    uint32_t dwClan;  /* offset: 76 */
    uint8_t byStanceID;  /* offset: 80 */
    uint16_t wdAnimStanceID;  /* offset: 82 */
    uint16_t wdPowerID1;  /* offset: 84 */
    uint8_t byPowerRank1;  /* offset: 86 */
    uint16_t wdPowerID2;  /* offset: 88 */
    uint8_t byPowerRank2;  /* offset: 90 */
    uint16_t wdPowerID3;  /* offset: 92 */
    uint8_t byPowerRank3;  /* offset: 94 */
    uint16_t wdPowerID4;  /* offset: 96 */
    uint8_t byPowerRank4;  /* offset: 98 */
    uint16_t wdPowerID5;  /* offset: 100 */
    uint8_t byPowerRank5;  /* offset: 102 */
    uint16_t wdPowerID6;  /* offset: 104 */
    uint8_t byPowerRank6;  /* offset: 106 */
    uint16_t wdPowerID7;  /* offset: 108 */
    uint8_t byPowerRank7;  /* offset: 110 */
    uint16_t wdPowerID8;  /* offset: 112 */
    uint8_t byPowerRank8;  /* offset: 114 */
    uint16_t wdPowerID9;  /* offset: 116 */
    uint8_t byPowerRank9;  /* offset: 118 */
    uint16_t wdPowerID10;  /* offset: 120 */
    uint8_t byPowerRank10;  /* offset: 122 */
    uint16_t wdTreasureTableID;  /* offset: 124 */
    uint8_t byInvisible;  /* offset: 126 */
    uint8_t byAggressiveFlag;  /* offset: 127 */
    uint16_t wdRetreatHitPoints;  /* offset: 128 */
    uint16_t wdAggroValue;  /* offset: 130 */
    uint8_t byScanOption;  /* offset: 132 */
    uint8_t byPowerMultiplier;  /* offset: 133 */
    uint8_t byMeleeMultiplier;  /* offset: 134 */
    uint8_t byRangeMultiplier;  /* offset: 135 */
    uint8_t byReturnFlag;  /* offset: 136 */
    uint16_t wdChallengeLevel;  /* offset: 138 */
    uint32_t dwScriptID;  /* offset: 140 */
    uint32_t dwNameID;  /* offset: 144 */
    uint8_t byTargetType;  /* offset: 148 */
    uint8_t byMeleePerc;  /* offset: 149 */
    uint8_t byPowerPerc1;  /* offset: 150 */
    uint8_t byPowerPerc2;  /* offset: 151 */
    uint8_t byPowerPerc3;  /* offset: 152 */
    uint8_t byPowerPerc4;  /* offset: 153 */
    uint8_t byPowerPerc5;  /* offset: 154 */
    uint8_t byPowerPerc6;  /* offset: 155 */
    uint8_t byPowerPerc7;  /* offset: 156 */
    uint8_t byPowerPerc8;  /* offset: 157 */
    uint8_t byPowerPerc9;  /* offset: 158 */
    uint8_t byPowerPerc10;  /* offset: 159 */
    uint8_t byIsGuard;  /* offset: 160 */
    uint8_t byHalfMoveRate;  /* offset: 161 */
    uint16_t wdMeleeRange;  /* offset: 162 */
    uint16_t wdPowerRange1;  /* offset: 164 */
    uint16_t wdPowerRange2;  /* offset: 166 */
    uint16_t wdPowerRange3;  /* offset: 168 */
    uint16_t wdPowerRange4;  /* offset: 170 */
    uint16_t wdPowerRange5;  /* offset: 172 */
    uint16_t wdPowerRange6;  /* offset: 174 */
    uint16_t wdPowerRange7;  /* offset: 176 */
    uint16_t wdPowerRange8;  /* offset: 178 */
    uint16_t wdPowerRange9;  /* offset: 180 */
    uint16_t wdPowerRange10;  /* offset: 182 */
    uint16_t wdEffectID;  /* offset: 184 */
    uint16_t wdScanAreaRange;  /* offset: 186 */
    uint8_t byDoClanRating;  /* offset: 188 */
    uint8_t byEnemyClan;  /* offset: 189 */
    uint8_t byUpValue;  /* offset: 190 */
    uint8_t byDownValue;  /* offset: 191 */
    uint8_t byIsSNPC;  /* offset: 192 */
    uint8_t byInvisiblePerc;  /* offset: 193 */
    uint8_t byMaxItemCount;  /* offset: 194 */
    uint8_t byPermanentDeath;  /* offset: 195 */
    uint8_t byIsDead;  /* offset: 196 */
    int16_t sWeaponSpeed;  /* offset: 198 */
    uint16_t wdDefEffID1;  /* offset: 200 */
    uint8_t byDefPowerRank1;  /* offset: 202 */
    uint16_t wdDefDuration1;  /* offset: 204 */
    uint16_t wdDefEffID2;  /* offset: 206 */
    uint8_t byDefPowerRank2;  /* offset: 208 */
    uint16_t wdDefDuration2;  /* offset: 210 */
    uint16_t wdDefEffID3;  /* offset: 212 */
    uint8_t byDefPowerRank3;  /* offset: 214 */
    uint16_t wdDefDuration3;  /* offset: 216 */
    uint16_t wdDefEffID4;  /* offset: 218 */
    uint8_t byDefPowerRank4;  /* offset: 220 */
    uint16_t wdDefDuration4;  /* offset: 222 */
    uint16_t wdDefEffID5;  /* offset: 224 */
    uint8_t byDefPowerRank5;  /* offset: 226 */
    uint16_t wdDefDuration5;  /* offset: 228 */
    uint16_t wdDefEffID6;  /* offset: 230 */
    uint8_t byDefPowerRank6;  /* offset: 232 */
    uint16_t wdDefDuration6;  /* offset: 234 */
    uint16_t wdDefEffID7;  /* offset: 236 */
    uint8_t byDefPowerRank7;  /* offset: 238 */
    uint16_t wdDefDuration7;  /* offset: 240 */
    uint16_t wdDefEffID8;  /* offset: 242 */
    uint8_t byDefPowerRank8;  /* offset: 244 */
    uint16_t wdDefDuration8;  /* offset: 246 */
    uint16_t wdDefEffID9;  /* offset: 248 */
    uint8_t byDefPowerRank9;  /* offset: 250 */
    uint16_t wdDefDuration9;  /* offset: 252 */
    uint16_t wdDefEffID10;  /* offset: 254 */
    uint8_t byDefPowerRank10;  /* offset: 256 */
    uint16_t wdDefDuration10;  /* offset: 258 */
    int16_t sStunResist;  /* offset: 260 */
    int16_t sSlowResist;  /* offset: 262 */
    int16_t sEntangledResist;  /* offset: 264 */
    uint16_t wdAggroRate;  /* offset: 266 */
    uint16_t wdDetectHiddenRate;  /* offset: 268 */
    uint8_t byCallHelpRatio;  /* offset: 270 */
    uint16_t wdCombatTimeout;  /* offset: 272 */
    uint8_t bySplitChance;  /* offset: 274 */
    uint8_t bySplitDamageWeakness;  /* offset: 275 */
    uint8_t bySplitMax;  /* offset: 276 */
    uint32_t dwSplitID;  /* offset: 280 */
    uint16_t wSplitFX;  /* offset: 284 */
    uint8_t bySpawnChildChance;  /* offset: 286 */
    uint32_t dwSpawnChildID;  /* offset: 288 */
    uint16_t wSpawnChildAnim;  /* offset: 292 */
    uint32_t dwBossID;  /* offset: 296 */
    uint16_t wBossFXID;  /* offset: 300 */
    uint8_t byScatterChance;  /* offset: 302 */
    uint8_t byScatterDamageWeakness;  /* offset: 303 */
    uint8_t byScatterMax;  /* offset: 304 */
    uint32_t dwScatterID;  /* offset: 308 */
    uint16_t wScatterFXID;  /* offset: 312 */
    uint16_t wEaterThreshold;  /* offset: 314 */
    uint8_t byEaterChance;  /* offset: 316 */
    uint16_t wEaterRange;  /* offset: 318 */
    uint32_t dwEaterID;  /* offset: 320 */
    uint16_t wEaterHPGain;  /* offset: 324 */
    uint16_t wEaterAnim;  /* offset: 326 */
    uint8_t byPowerType1;  /* offset: 328 */
    uint8_t byPowerType2;  /* offset: 329 */
    uint8_t byPowerType3;  /* offset: 330 */
    uint8_t byPowerType4;  /* offset: 331 */
    uint8_t byPowerType5;  /* offset: 332 */
    uint8_t byPowerType6;  /* offset: 333 */
    uint8_t byPowerType7;  /* offset: 334 */
    uint8_t byPowerType8;  /* offset: 335 */
    uint8_t byPowerType9;  /* offset: 336 */
    uint8_t byPowerType10;  /* offset: 337 */
    uint32_t dwScanScriptID;  /* offset: 340 */
    uint8_t byCheckDelete;  /* offset: 344 */
    uint8_t byInvisibilityPerc;  /* offset: 345 */
    uint32_t dwCheckNPCScriptID;  /* offset: 348 */
    uint8_t byMoveAwayPerc;  /* offset: 352 */
    uint8_t byLure;  /* offset: 353 */
    uint8_t bySwarm;  /* offset: 354 */
    uint32_t dwCallForHelpID;  /* offset: 356 */
    uint8_t byPersistent;  /* offset: 360 */
    uint32_t dwTargetLostID;  /* offset: 364 */
    uint32_t dwArrivedID;  /* offset: 368 */
    uint8_t byBodyGuard;  /* offset: 372 */
    uint8_t byAOEHunter;  /* offset: 373 */
    uint32_t dwAttackScriptID;  /* offset: 376 */
    uint32_t dwStuckScriptID;  /* offset: 380 */
    uint8_t byNPCCheckOW;  /* offset: 384 */
    uint8_t byCallForHelpOW;  /* offset: 385 */
    uint32_t dwRangeCheckID;  /* offset: 388 */
    uint8_t byRangeCheckOW;  /* offset: 392 */
    uint8_t byAttackScriptOW;  /* offset: 393 */
    uint32_t dwPowerScriptID;  /* offset: 396 */
    uint8_t byPowerScriptOW;  /* offset: 400 */
    uint32_t dwProperties;  /* offset: 404 */
} NPCAttribMod;

/* Size: 56 bytes */
typedef struct _SpawnPtMod {
    uint32_t dwSpawnPtID;  /* offset: 0 */
    uint32_t dwAttribID;  /* offset: 4 */
    uint16_t wdCount;  /* offset: 8 */
    uint16_t wdRadius;  /* offset: 10 */
    uint16_t wdFacing;  /* offset: 12 */
    uint8_t byIsOn;  /* offset: 14 */
    uint8_t bySpawnMax;  /* offset: 15 */
    uint8_t byUseTime;  /* offset: 16 */
    uint8_t byUseDate;  /* offset: 17 */
    uint8_t byUseRangeHour;  /* offset: 18 */
    uint8_t byUseRangeDate;  /* offset: 19 */
    uint32_t dwBeginHour;  /* offset: 20 */
    uint32_t dwEndHour;  /* offset: 24 */
    uint32_t dwBeginDay;  /* offset: 28 */
    uint32_t dwBeginMonth;  /* offset: 32 */
    uint32_t dwEndDay;  /* offset: 36 */
    uint32_t dwEndMonth;  /* offset: 40 */
    uint32_t dwGrp;  /* offset: 44 */
    uint32_t dwScan;  /* offset: 48 */
    uint32_t dwExScan;  /* offset: 52 */
} SpawnPtMod;

/* Size: 4 bytes */
typedef struct _PKPoints {
    uint32_t dwRedPoints;  /* offset: 0 */
} PKPoints;

/* Size: 24 bytes */
typedef struct _GMAccess {
    uint32_t dwEventID;  /* offset: 0 */
    uint32_t iRank1;  /* offset: 4 */
    uint32_t iRank2;  /* offset: 8 */
    uint32_t iRank3;  /* offset: 12 */
    uint32_t iRank4;  /* offset: 16 */
    uint32_t iRank5;  /* offset: 20 */
} GMAccess;

/* Size: 2 bytes */
typedef struct _LevelOffline {
    uint16_t wLevel;  /* offset: 0 */
} LevelOffline;

/* Size: 32 bytes */
typedef struct _GMHelpList {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wLevel;  /* offset: 4 */
    uint32_t dwSceneID;  /* offset: 8 */
    uint32_t fX;  /* offset: 12 */
    uint32_t fY;  /* offset: 16 */
    uint32_t fZ;  /* offset: 20 */
    uint8_t byPriority;  /* offset: 24 */
    uint32_t dwIndex;  /* offset: 28 */
} GMHelpList;

/* Size: 12 bytes */
typedef struct _SkillList {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wSkillID;  /* offset: 4 */
    uint16_t wRank;  /* offset: 6 */
    uint32_t dwIndex;  /* offset: 8 */
} SkillList;

/* Size: 8 bytes */
typedef struct _Skills {
    uint32_t dwSkillID;  /* offset: 0 */
    uint32_t dwBuyPrice;  /* offset: 4 */
} Skills;

/* Size: 60 bytes */
typedef struct _WarEvent {
    uint32_t dwWarEventID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
    uint8_t byState;  /* offset: 5 */
    uint8_t byPrevState;  /* offset: 6 */
    uint32_t dwSceneID;  /* offset: 8 */
    uint32_t dwDuration;  /* offset: 12 */
    uint32_t dwStartTime;  /* offset: 16 */
    uint32_t dwEndTime;  /* offset: 20 */
    uint32_t dwAClanID;  /* offset: 24 */
    uint32_t dwDClanID;  /* offset: 28 */
    uint32_t dwAGuildID;  /* offset: 32 */
    uint32_t dwDGuildID;  /* offset: 36 */
    uint32_t dwACharID;  /* offset: 40 */
    uint32_t dwDCharID;  /* offset: 44 */
    uint32_t dwResData;  /* offset: 48 */
    uint32_t dwATokens;  /* offset: 52 */
    uint32_t dwDTokens;  /* offset: 56 */
} WarEvent;

/* Size: 40 bytes */
typedef struct _WarScratchData {
    uint32_t dwData1;  /* offset: 0 */
    uint32_t dwData2;  /* offset: 4 */
    uint32_t dwData3;  /* offset: 8 */
    uint32_t dwData4;  /* offset: 12 */
    uint32_t dwData5;  /* offset: 16 */
    uint32_t dwData6;  /* offset: 20 */
    uint32_t dwData7;  /* offset: 24 */
    uint32_t dwData8;  /* offset: 28 */
    uint32_t dwData9;  /* offset: 32 */
    uint32_t dwData10;  /* offset: 36 */
} WarScratchData;

/* Size: 32 bytes */
typedef struct _AttackerClanWar {
    uint32_t dwAClanID;  /* offset: 0 */
    uint32_t dwDClanID;  /* offset: 4 */
    uint32_t dwWarEventID;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint8_t byState;  /* offset: 13 */
    uint32_t dwStartTime;  /* offset: 16 */
    uint32_t dwEndTime;  /* offset: 20 */
    uint32_t dwResData;  /* offset: 24 */
    uint32_t dwIndex;  /* offset: 28 */
} AttackerClanWar;

/* Size: 32 bytes */
typedef struct _DefenderClanWar {
    uint32_t dwDClanID;  /* offset: 0 */
    uint32_t dwAClanID;  /* offset: 4 */
    uint32_t dwWarEventID;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint8_t byState;  /* offset: 13 */
    uint32_t dwStartTime;  /* offset: 16 */
    uint32_t dwEndTime;  /* offset: 20 */
    uint32_t dwResData;  /* offset: 24 */
    uint32_t dwIndex;  /* offset: 28 */
} DefenderClanWar;

/* Size: 32 bytes */
typedef struct _AttackerGuildWar {
    uint32_t dwAGuildID;  /* offset: 0 */
    uint32_t dwDGuildID;  /* offset: 4 */
    uint32_t dwWarEventID;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint8_t byState;  /* offset: 13 */
    uint32_t dwStartTime;  /* offset: 16 */
    uint32_t dwEndTime;  /* offset: 20 */
    uint32_t dwResData;  /* offset: 24 */
    uint32_t dwIndex;  /* offset: 28 */
} AttackerGuildWar;

/* Size: 32 bytes */
typedef struct _DefenderGuildWar {
    uint32_t dwDGuildID;  /* offset: 0 */
    uint32_t dwAGuildID;  /* offset: 4 */
    uint32_t dwWarEventID;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint8_t byState;  /* offset: 13 */
    uint32_t dwStartTime;  /* offset: 16 */
    uint32_t dwEndTime;  /* offset: 20 */
    uint32_t dwResData;  /* offset: 24 */
    uint32_t dwIndex;  /* offset: 28 */
} DefenderGuildWar;

/* Size: 24 bytes */
typedef struct _WarZoneBooking {
    uint32_t dwDay;  /* offset: 0 */
    uint32_t dwOffset;  /* offset: 4 */
    uint32_t dwSceneID;  /* offset: 8 */
    uint32_t dwTime;  /* offset: 12 */
    uint8_t byType;  /* offset: 16 */
    uint32_t dwIndex;  /* offset: 20 */
} WarZoneBooking;

/* Size: 12 bytes */
typedef struct _SceneTypes {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwType;  /* offset: 4 */
    uint32_t dwIndex;  /* offset: 8 */
} SceneTypes;

/* Size: 4 bytes */
typedef struct _GuildRange {
    uint32_t dwGuildID;  /* offset: 0 */
} GuildRange;

/* Size: 8 bytes */
typedef struct _ClanRange {
    uint32_t dwClanID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
} ClanRange;

/* Size: 32 bytes */
typedef struct _AttackerCharWar {
    uint32_t dwACharID;  /* offset: 0 */
    uint32_t dwDCharID;  /* offset: 4 */
    uint32_t dwWarEventID;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint8_t byState;  /* offset: 13 */
    uint32_t dwStartTime;  /* offset: 16 */
    uint32_t dwEndTime;  /* offset: 20 */
    uint32_t dwResData;  /* offset: 24 */
    uint32_t dwIndex;  /* offset: 28 */
} AttackerCharWar;

/* Size: 32 bytes */
typedef struct _DefenderCharWar {
    uint32_t dwACharID;  /* offset: 0 */
    uint32_t dwDCharID;  /* offset: 4 */
    uint32_t dwWarEventID;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint8_t byState;  /* offset: 13 */
    uint32_t dwStartTime;  /* offset: 16 */
    uint32_t dwEndTime;  /* offset: 20 */
    uint32_t dwResData;  /* offset: 24 */
    uint32_t dwIndex;  /* offset: 28 */
} DefenderCharWar;

/* Size: 20 bytes */
typedef struct _OldEvents {
    uint8_t byState;  /* offset: 0 */
    uint32_t dwWarEventID;  /* offset: 4 */
    uint32_t dwStartTime;  /* offset: 8 */
    uint32_t dwEndTime;  /* offset: 12 */
    uint32_t dwIndex;  /* offset: 16 */
} OldEvents;

/* Size: 80 bytes */
typedef struct _ArchiveEvent {
    uint32_t dwWarEventID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
    uint32_t dwSceneID;  /* offset: 8 */
    uint32_t dwDuration;  /* offset: 12 */
    uint32_t dwStartTime;  /* offset: 16 */
    uint32_t dwEndTime;  /* offset: 20 */
    uint32_t dwAClanID;  /* offset: 24 */
    uint32_t dwDClanID;  /* offset: 28 */
    uint32_t dwAGuildID;  /* offset: 32 */
    uint32_t dwDGuildID;  /* offset: 36 */
    uint32_t dwData1;  /* offset: 40 */
    uint32_t dwData2;  /* offset: 44 */
    uint32_t dwData3;  /* offset: 48 */
    uint32_t dwData4;  /* offset: 52 */
    uint32_t dwData5;  /* offset: 56 */
    uint32_t dwData6;  /* offset: 60 */
    uint32_t dwData7;  /* offset: 64 */
    uint32_t dwData8;  /* offset: 68 */
    uint32_t dwData9;  /* offset: 72 */
    uint32_t dwData10;  /* offset: 76 */
} ArchiveEvent;

/* Size: 60 bytes */
typedef struct _ClanWar {
    uint32_t dwClanKey;  /* offset: 0 */
    uint8_t byStatus;  /* offset: 4 */
    uint8_t bySecStatus;  /* offset: 5 */
    uint16_t wAClanID;  /* offset: 6 */
    uint16_t wDClanID;  /* offset: 8 */
    uint32_t dwStartTime;  /* offset: 12 */
    uint32_t dwEndTime;  /* offset: 16 */
    uint32_t dwData1;  /* offset: 20 */
    uint32_t dwData2;  /* offset: 24 */
    uint32_t dwData3;  /* offset: 28 */
    uint32_t dwData4;  /* offset: 32 */
    uint32_t dwData5;  /* offset: 36 */
    uint32_t dwData6;  /* offset: 40 */
    uint32_t dwData7;  /* offset: 44 */
    uint32_t dwData8;  /* offset: 48 */
    uint32_t dwData9;  /* offset: 52 */
    uint32_t dwData10;  /* offset: 56 */
} ClanWar;

/* Size: 8 bytes */
typedef struct _ClanWarStatus {
    uint32_t dwClanKey;  /* offset: 0 */
    uint32_t dwIndex;  /* offset: 4 */
} ClanWarStatus;

/* Size: 28 bytes */
typedef struct _ClanScratchData {
    uint32_t dwClanID;  /* offset: 0 */
    uint32_t dwData1;  /* offset: 4 */
    uint32_t dwData2;  /* offset: 8 */
    uint32_t dwData3;  /* offset: 12 */
    uint32_t dwData4;  /* offset: 16 */
    uint32_t dwData5;  /* offset: 20 */
    uint32_t dwData6;  /* offset: 24 */
} ClanScratchData;

/* Size: 32 bytes */
typedef struct _ClanUpgrades {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwBuyPrice;  /* offset: 4 */
    uint32_t dwField1;  /* offset: 8 */
    uint32_t dwField2;  /* offset: 12 */
    uint32_t dwField3;  /* offset: 16 */
    uint32_t dwField4;  /* offset: 20 */
    uint32_t dwField5;  /* offset: 24 */
    uint32_t dwField6;  /* offset: 28 */
} ClanUpgrades;

/* Size: 16 bytes */
typedef struct _ArenaScore {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwScore;  /* offset: 8 */
    uint32_t dwIndex;  /* offset: 12 */
} ArenaScore;

/* Size: 12 bytes */
typedef struct _WarEventsView {
    uint8_t byState;  /* offset: 0 */
    uint32_t dwWarEventID;  /* offset: 4 */
    uint32_t dwIndex;  /* offset: 8 */
} WarEventsView;

/* Size: 1028 bytes */
typedef struct _IGREvent {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwTime;  /* offset: 4 */
    uint32_t dwDuration;  /* offset: 8 */
    uint32_t dwResult;  /* offset: 12 */
    uint32_t dwGenData;  /* offset: 16 */
    uint8_t byTeamType;  /* offset: 20 */
    uint8_t byType;  /* offset: 21 */
    uint8_t byStatus;  /* offset: 22 */
    uint8_t bySize1;  /* offset: 23 */
    uint8_t bySize2;  /* offset: 24 */
    uint8_t byTeamID2;  /* offset: 225 */
    uint8_t byScore1;  /* offset: 425 */
    uint8_t byScore2;  /* offset: 625 */
    uint8_t byScratchData;  /* offset: 825 */
} IGREvent;

/* Size: 828 bytes */
typedef struct _ArchiveIGR {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t dwSceneID;  /* offset: 4 */
    uint32_t dwTeamID1;  /* offset: 8 */
    uint32_t dwTeamID2;  /* offset: 12 */
    uint32_t dwResult;  /* offset: 16 */
    uint32_t dwGenData;  /* offset: 20 */
    uint8_t byType;  /* offset: 24 */
    uint8_t byTeamType;  /* offset: 25 */
    uint8_t bySize1;  /* offset: 26 */
    uint8_t bySize2;  /* offset: 27 */
    uint8_t byTeamData1;  /* offset: 28 */
    uint8_t byTeamData2;  /* offset: 228 */
    uint8_t byScore1;  /* offset: 428 */
    uint8_t byScore2;  /* offset: 628 */
} ArchiveIGR;

/* Size: 92 bytes */
typedef struct _WarScore {
    uint32_t dwTime;  /* offset: 0 */
    uint16_t wAClanID;  /* offset: 4 */
    uint16_t wDClanID;  /* offset: 6 */
    uint32_t iAScore;  /* offset: 8 */
    uint32_t iDScore;  /* offset: 12 */
    uint32_t dwAStartStrength;  /* offset: 16 */
    uint32_t dwDStartStrength;  /* offset: 20 */
    uint32_t dwAEndStrength;  /* offset: 24 */
    uint32_t dwDEndStrength;  /* offset: 28 */
    uint8_t byState;  /* offset: 32 */
    uint16_t wATownLoss;  /* offset: 34 */
    uint16_t wATownGain;  /* offset: 36 */
    uint16_t wALeaderLoss;  /* offset: 38 */
    uint16_t wALeaderGain;  /* offset: 40 */
    uint16_t wAMinisterLoss;  /* offset: 42 */
    uint16_t wAMinisterGain;  /* offset: 44 */
    uint16_t wDTownLoss;  /* offset: 46 */
    uint16_t wDTownGain;  /* offset: 48 */
    uint16_t wDLeaderLoss;  /* offset: 50 */
    uint16_t wDLeaderGain;  /* offset: 52 */
    uint16_t wDMinisterLoss;  /* offset: 54 */
    uint16_t wDMinisterGain;  /* offset: 56 */
    uint16_t wAOtherRelicGain;  /* offset: 58 */
    uint16_t wDOtherRelicGain;  /* offset: 60 */
    uint16_t wAOtherRelicLoss;  /* offset: 62 */
    uint16_t wDOtherRelicLoss;  /* offset: 64 */
    uint16_t wAOwnRelicGain;  /* offset: 66 */
    uint16_t wDOwnRelicGain;  /* offset: 68 */
    uint16_t wAOwnRelicLoss;  /* offset: 70 */
    uint16_t wDOwnRelicLoss;  /* offset: 72 */
    uint16_t wAEnemyRelicGain;  /* offset: 74 */
    uint16_t wDEnemyRelicGain;  /* offset: 76 */
    uint16_t wAEnemyRelicLoss;  /* offset: 78 */
    uint16_t wDEnemyRelicLoss;  /* offset: 80 */
    uint16_t wUDogBonus;  /* offset: 82 */
    uint16_t wUDogID;  /* offset: 84 */
    uint16_t wHeroPointBonus;  /* offset: 86 */
    uint16_t wAHeroPointEarned;  /* offset: 88 */
    uint16_t wDHeroPointEarned;  /* offset: 90 */
} WarScore;

/* Size: 24 bytes */
typedef struct _WarAction {
    uint32_t dwTime;  /* offset: 0 */
    uint16_t wAClanID;  /* offset: 4 */
    uint16_t wDClanID;  /* offset: 6 */
    uint16_t wActionID;  /* offset: 8 */
    uint32_t dwParam1;  /* offset: 12 */
    uint32_t dwParam2;  /* offset: 16 */
    uint32_t dwParam3;  /* offset: 20 */
} WarAction;

/* Size: 4 bytes */
typedef struct _WaitPeriod {
    uint32_t dwWaitPeriod;  /* offset: 0 */
} WaitPeriod;

/* Size: 824 bytes */
typedef struct _ArchiveComp {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t dwSceneID;  /* offset: 4 */
    uint8_t byType;  /* offset: 8 */
    uint8_t byTeamType;  /* offset: 9 */
    uint8_t bySize1;  /* offset: 10 */
    uint8_t bySize2;  /* offset: 11 */
    uint32_t dwTeamID1;  /* offset: 12 */
    uint32_t dwTeamID2;  /* offset: 16 */
    uint32_t dwResult;  /* offset: 20 */
    uint8_t byTeamData1;  /* offset: 24 */
    uint8_t byTeamData2;  /* offset: 224 */
    uint8_t byScore1;  /* offset: 424 */
    uint8_t byScore2;  /* offset: 624 */
} ArchiveComp;

/* Size: 11480 bytes */
typedef struct _ProcCtrlBlk {
    uint16_t wServerID;  /* offset: 0 */
    uint32_t iPortNum;  /* offset: 4 */
    uint32_t iWPortNum;  /* offset: 8 */
    uint8_t chWSTicket;  /* offset: 28 */
    uint32_t iWCPortNum;  /* offset: 44 */
    uint32_t iNumSThreads;  /* offset: 48 */
    uint32_t iStatusInterval;  /* offset: 132 */
    uint32_t iStatsInterval;  /* offset: 136 */
    uint32_t iConnTimeOut;  /* offset: 140 */
    uint32_t iRetryInterval;  /* offset: 144 */
    uint32_t iNumConns;  /* offset: 148 */
    uint32_t iRcvBuffSize;  /* offset: 152 */
    uint32_t iSndBuffSize;  /* offset: 156 */
    uint32_t iSendInterval;  /* offset: 160 */
    uint32_t iMemLocks;  /* offset: 164 */
    uint32_t iObjectsPerPage;  /* offset: 168 */
    uint32_t iMaxScripts;  /* offset: 172 */
    uint32_t iMaxEvents;  /* offset: 176 */
    uint32_t iMaxNPC;  /* offset: 180 */
    uint32_t iMaxSpawnPt;  /* offset: 184 */
    uint32_t iMaxNPCAttrib;  /* offset: 188 */
    uint32_t iTickSpawnScan;  /* offset: 192 */
    uint32_t iTickSpawnExtendedScan;  /* offset: 196 */
    uint32_t iTickNPCDeath;  /* offset: 200 */
    uint32_t iTickNPCSuicide;  /* offset: 204 */
    uint32_t iTickCombatWaypoint;  /* offset: 208 */
    uint32_t iTickLootDeath;  /* offset: 212 */
    uint32_t iTickEnemyScan;  /* offset: 216 */
    uint32_t iTickMoveInterval;  /* offset: 220 */
    uint32_t iTickAttackInterval;  /* offset: 224 */
    uint32_t iTickWaitInterval;  /* offset: 228 */
    uint32_t iTickStatus;  /* offset: 232 */
    uint32_t iTickCheckNPC;  /* offset: 236 */
    uint32_t iMaxWayPt;  /* offset: 240 */
    uint32_t iRangeEnemyScan;  /* offset: 244 */
    uint32_t iRangeSpawnScan;  /* offset: 248 */
    uint8_t chDBName;  /* offset: 252 */
    uint8_t chDBHost;  /* offset: 317 */
    uint8_t chDBUser;  /* offset: 378 */
    uint8_t chDBPassword;  /* offset: 395 */
    uint8_t chAuthName;  /* offset: 412 */
    uint8_t chAuthHost;  /* offset: 477 */
    uint8_t chScriptLog;  /* offset: 538 */
    void* pPointer1;  /* offset: 620 */
    void* pPointer2;  /* offset: 624 */
    void* pPointer3;  /* offset: 628 */
    void* pPointer4;  /* offset: 632 */
    void* pPointer5;  /* offset: 636 */
    void* pPointer6;  /* offset: 640 */
    void* pPointer7;  /* offset: 644 */
    uint8_t chDBScriptPath;  /* offset: 10888 */
    uint8_t chLicenseServer1;  /* offset: 11400 */
    uint8_t chLicenseServer2;  /* offset: 11417 */
    uint8_t chLicenseServer3;  /* offset: 11434 */
    uint32_t iSettingID;  /* offset: 11452 */
    uint32_t dwChatCharID;  /* offset: 11456 */
    uint8_t chLoggingServerIP;  /* offset: 11460 */
} ProcCtrlBlk;

/* Size: 24 bytes */
typedef struct _MEMHANDLE {
    uint32_t iIndex;  /* offset: 0 */
    uint32_t dwCategory;  /* offset: 4 */
    uint32_t dwPrimaryKey;  /* offset: 8 */
    uint16_t wNumElements;  /* offset: 12 */
    uint32_t iPID;  /* offset: 16 */
    uint32_t dwSecondaryKey;  /* offset: 20 */
} MEMHANDLE;

/* Size: 28 bytes */
typedef struct _MemStats {
    uint32_t iDynamicObj;  /* offset: 0 */
    uint32_t iListObj;  /* offset: 4 */
    uint32_t iMultiListObj;  /* offset: 8 */
    uint32_t iDynamicFreeObj;  /* offset: 12 */
    uint32_t iStaticObj;  /* offset: 16 */
    uint32_t iAllocObj;  /* offset: 20 */
    uint32_t iMiscObj;  /* offset: 24 */
} MemStats;

/* Size: 60 bytes */
typedef struct _CMemObject {
    uint8_t m_hMem;  /* offset: 36 */
} CMemObject;

/* Size: 516 bytes */
typedef struct _CMemMgr {
    uint32_t fExit;  /* offset: 508 */
    uint32_t m_iStatus;  /* offset: 512 */
} CMemMgr;

/* Size: 76 bytes */
typedef struct _tMemCacheObject {
    void* pMemObject;  /* offset: 0 */
    uint16_t wElements;  /* offset: 4 */
    uint8_t CacheCopy;  /* offset: 8 */
    void* pPrev;  /* offset: 72 */
} tMemCacheObject;

/* Size: 80 bytes */
typedef struct _CMemAccess {
    uint8_t m_hCurrMem;  /* offset: 48 */
    uint32_t m_dwProcessID;  /* offset: 72 */
    uint32_t m_pLastObject;  /* offset: 76 */
} CMemAccess;

/* Size: 88 bytes */
typedef struct _EventDef {
    uint32_t dwID;  /* offset: 0 */
    uint16_t wEventID;  /* offset: 4 */
    uint32_t dwEntityID;  /* offset: 8 */
    void* pSendThread;  /* offset: 12 */
    uint8_t byType;  /* offset: 16 */
    uint8_t byOccurance;  /* offset: 17 */
    uint8_t byParams;  /* offset: 18 */
    uint32_t dwInterval;  /* offset: 20 */
    uint32_t dwOccurances;  /* offset: 24 */
    uint8_t startdate;  /* offset: 28 */
    uint16_t wSize;  /* offset: 72 */
    uint32_t dwLastTime;  /* offset: 76 */
    uint32_t fActive;  /* offset: 80 */
    void* pData;  /* offset: 84 */
} EventDef;

/* Size: 1128 bytes */
typedef struct _Event {
    uint32_t dwID;  /* offset: 0 */
    uint16_t wEventID;  /* offset: 4 */
    uint32_t dwEntityID;  /* offset: 8 */
    void* pSendThread;  /* offset: 12 */
    uint8_t byType;  /* offset: 16 */
    uint8_t byOccurance;  /* offset: 17 */
    uint8_t byParams;  /* offset: 18 */
    uint32_t dwLastTime;  /* offset: 20 */
    uint32_t dwLastTick;  /* offset: 24 */
    uint8_t startdate;  /* offset: 28 */
    uint32_t dwCount;  /* offset: 72 */
    uint32_t dwInterval;  /* offset: 76 */
    uint16_t wSize;  /* offset: 80 */
    uint32_t fActive;  /* offset: 1108 */
    uint32_t fAlive;  /* offset: 1112 */
    uint32_t fDelete;  /* offset: 1116 */
    void* pPrev;  /* offset: 1124 */
} Event;

/* Size: 120 bytes */
typedef struct _CEventMgr {
    uint32_t m_iALog;  /* offset: 108 */
    uint32_t fExit;  /* offset: 112 */
    uint32_t m_iStatus;  /* offset: 116 */
} CEventMgr;

/* Size: 224 bytes */
typedef struct _Connection {
    uint8_t address;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 16 */
    uint32_t lastsend;  /* offset: 20 */
    uint32_t lastrecv;  /* offset: 24 */
    uint32_t SendQueue;  /* offset: 28 */
    uint32_t SendImmediate;  /* offset: 32 */
    uint32_t lastcheckpc;  /* offset: 36 */
    uint32_t recvtime;  /* offset: 40 */
    uint32_t closetime;  /* offset: 44 */
    uint32_t RecvQueue;  /* offset: 48 */
    uint8_t chTicket;  /* offset: 52 */
    uint32_t m_iTimeOut;  /* offset: 68 */
    uint32_t fZoningFlag;  /* offset: 72 */
    uint32_t fDelFlag;  /* offset: 76 */
    uint32_t fClosingFlag;  /* offset: 80 */
    uint32_t fUsed;  /* offset: 84 */
    uint32_t fErrorFlag;  /* offset: 88 */
    uint32_t iSocket;  /* offset: 92 */
    uint16_t wPortNum;  /* offset: 96 */
    uint32_t iSendInterval;  /* offset: 100 */
    uint32_t m_dwPacketTime;  /* offset: 104 */
    uint32_t m_dwPacketCount;  /* offset: 108 */
    uint8_t send_mutex;  /* offset: 112 */
    uint8_t recv_mutex;  /* offset: 136 */
    uint8_t send_imm_mutex;  /* offset: 160 */
    uint8_t gen_mutex;  /* offset: 184 */
    uint32_t iFirst;  /* offset: 208 */
    uint32_t m_dwRecvBuffSize;  /* offset: 212 */
    void* pPrev;  /* offset: 220 */
} Connection;

/* Size: 824 bytes */
typedef struct _CSession {
    uint32_t m_iNumConnects;  /* offset: 748 */
    uint32_t iPortNum;  /* offset: 752 */
    uint32_t iStartupFlag;  /* offset: 756 */
    uint32_t iDeleteFlag;  /* offset: 760 */
    uint32_t fExit;  /* offset: 764 */
    uint32_t m_iLogLevel;  /* offset: 768 */
    uint32_t m_iALog;  /* offset: 772 */
    uint8_t defaultaddr;  /* offset: 776 */
    uint8_t wc_addr;  /* offset: 792 */
    uint32_t m_iStatus;  /* offset: 808 */
    uint32_t m_iDebug;  /* offset: 812 */
    void* pPrev;  /* offset: 820 */
} CSession;

/* Size: 104 bytes */
typedef struct _tFileHeader {
    uint32_t dwMagic;  /* offset: 0 */
    uint32_t dwVersion;  /* offset: 4 */
    uint8_t vMin;  /* offset: 72 */
    uint8_t vMax;  /* offset: 84 */
    uint32_t dwSceneType;  /* offset: 96 */
    uint32_t dwID;  /* offset: 100 */
} tFileHeader;

/* Size: 100 bytes */
typedef struct _tFileHeader2 {
    uint32_t dwMagic;  /* offset: 0 */
    uint32_t dwVersion;  /* offset: 4 */
    uint8_t szName;  /* offset: 8 */
    uint8_t vMin;  /* offset: 72 */
    uint8_t vMax;  /* offset: 84 */
    uint32_t dwSceneType;  /* offset: 96 */
} tFileHeader2;

/* Size: 20 bytes */
typedef struct _CVKY_Entity {
    uint32_t m_gID;  /* offset: 12 */
    uint32_t m_pData;  /* offset: 16 */
} CVKY_Entity;

/* Size: 792 bytes */
typedef struct _tPCDef {
    void* pszBody;  /* offset: 4 */
    void* pszSetup;  /* offset: 8 */
    uint8_t szAnimation;  /* offset: 12 */
    uint8_t szAnimList;  /* offset: 268 */
    uint8_t szActionList;  /* offset: 524 */
    uint32_t iHeadCount;  /* offset: 780 */
    uint32_t iBodyCount;  /* offset: 784 */
    uint32_t iSetupCount;  /* offset: 788 */
} tPCDef;

/* Size: 1288 bytes */
typedef struct _tNPCTypeData {
    uint8_t szModelName;  /* offset: 0 */
    uint8_t szAnimationName;  /* offset: 256 */
    uint8_t szVADName;  /* offset: 512 */
    uint8_t szActionList;  /* offset: 768 */
    uint8_t szAnimList;  /* offset: 1024 */
    uint32_t dwWeaponID;  /* offset: 1280 */
    uint32_t dwMatID;  /* offset: 1284 */
} tNPCTypeData;

/* Size: 36 bytes */
typedef struct _tObjectCache {
    uint32_t dwID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fDir;  /* offset: 16 */
    uint8_t byMoveState;  /* offset: 20 */
    uint8_t bySpeed;  /* offset: 21 */
    uint32_t iCount;  /* offset: 24 */
    void* pPrev;  /* offset: 32 */
} tObjectCache;

/* Size: 204 bytes */
typedef struct _tObjectHandle {
    uint8_t matTM;  /* offset: 0 */
    uint64_t byProcessFlag;  /* offset: 64 */
    uint8_t vHalfExtents;  /* offset: 104 */
    void* pScene;  /* offset: 116 */
    void* pSendThread;  /* offset: 124 */
    uint32_t dwID;  /* offset: 128 */
    uint32_t fSize;  /* offset: 132 */
    uint32_t fRadius;  /* offset: 136 */
    uint32_t fDir;  /* offset: 140 */
    uint32_t dwFlags;  /* offset: 144 */
    uint32_t dwModelID;  /* offset: 148 */
    uint32_t dwScript;  /* offset: 152 */
    uint32_t dwTimeStamp;  /* offset: 156 */
    uint32_t dwSendCount;  /* offset: 160 */
    uint32_t iMinX;  /* offset: 164 */
    uint32_t iMaxX;  /* offset: 168 */
    uint32_t iMinY;  /* offset: 172 */
    uint32_t iMaxY;  /* offset: 176 */
    uint32_t dwInScene;  /* offset: 180 */
    uint32_t iOnlineFlag;  /* offset: 184 */
    uint16_t wGMOptions;  /* offset: 188 */
    uint16_t wLevel;  /* offset: 190 */
    uint16_t wStanceID;  /* offset: 192 */
    uint16_t wClanID;  /* offset: 194 */
    uint8_t byType;  /* offset: 196 */
    uint8_t bySpeed;  /* offset: 197 */
    uint8_t byLock;  /* offset: 198 */
    uint8_t byMoveState;  /* offset: 199 */
    uint8_t byIsGM;  /* offset: 200 */
    uint8_t byMoveLock;  /* offset: 201 */
    uint8_t byInvisible;  /* offset: 202 */
} tObjectHandle;

/* Size: 200 bytes */
typedef struct _tBoundingBox {
    uint8_t matTM;  /* offset: 0 */
    uint8_t vHalfAxis;  /* offset: 64 */
    uint32_t dwID;  /* offset: 76 */
    uint32_t dwFlags;  /* offset: 80 */
    uint32_t dwScript;  /* offset: 84 */
    uint32_t dwCheckFlag;  /* offset: 184 */
    uint64_t byProcessFlag;  /* offset: 188 */
    void* pOwner;  /* offset: 196 */
} tBoundingBox;

/* Size: 28 bytes */
typedef struct _tPoint {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwFlags;  /* offset: 4 */
    uint32_t dwProperty;  /* offset: 8 */
    uint8_t vPos;  /* offset: 12 */
    uint32_t bCheck;  /* offset: 24 */
} tPoint;

/* Size: 8 bytes */
typedef struct _tWayPointNetID {
    uint64_t dwPointa;  /* offset: 0 */
} tWayPointNetID;

/* Size: 8 bytes */
typedef struct _tChunk {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwSize;  /* offset: 4 */
} tChunk;

/* Size: 24 bytes */
typedef struct _tVKY_BBox {
    uint8_t vCenter;  /* offset: 0 */
    uint8_t vHalfAxis;  /* offset: 12 */
} tVKY_BBox;

/* Size: 60 bytes */
typedef struct _tVKY_FaceCache {
    uint8_t v4Plane;  /* offset: 0 */
    uint32_t fSliding;  /* offset: 52 */
    uint32_t dwFlag;  /* offset: 56 */
} tVKY_FaceCache;

/* Size: 20 bytes */
typedef struct _tVKY_CollisionInfo {
    uint8_t vNormal;  /* offset: 0 */
    uint32_t fSliding;  /* offset: 12 */
    uint32_t bStuck;  /* offset: 16 */
} tVKY_CollisionInfo;

/* Size: 4 bytes */
typedef struct _tFaceInfo {
    uint16_t usMeshIdx;  /* offset: 0 */
    uint16_t usFaceIdx;  /* offset: 2 */
} tFaceInfo;

/* Size: 32 bytes */
typedef struct _tFaceTable {
    uint16_t usCount;  /* offset: 0 */
    void* pstFaces;  /* offset: 4 */
    uint8_t cBBoxList;  /* offset: 8 */
} tFaceTable;

/* Size: 72 bytes */
typedef struct _tCollisionFace {
    uint8_t stFaceCache;  /* offset: 0 */
    uint32_t stInfo;  /* offset: 60 */
    uint32_t bFaceCache;  /* offset: 64 */
    void* pOwner;  /* offset: 68 */
} tCollisionFace;

/* Size: 436 bytes */
typedef struct _tCollisionData {
    uint8_t mat;  /* offset: 0 */
    uint8_t vExtent;  /* offset: 64 */
    uint8_t vVelocity;  /* offset: 76 */
    uint8_t matElipsoid;  /* offset: 88 */
    uint8_t matInvElipsoid;  /* offset: 152 */
    uint8_t matPlaneInvElipsoid;  /* offset: 216 */
    uint8_t vElipsoidPos;  /* offset: 280 */
    uint8_t vElipsoidVelocity;  /* offset: 292 */
    uint8_t vCurrentPos;  /* offset: 304 */
    uint8_t vCurrentVelocity;  /* offset: 316 */
    uint8_t vRadius;  /* offset: 328 */
    uint8_t vSafePos;  /* offset: 340 */
    uint8_t vPolyNormal;  /* offset: 352 */
    uint32_t bStuck;  /* offset: 364 */
    uint32_t bGravity;  /* offset: 368 */
    uint32_t bCollideEdge;  /* offset: 372 */
    uint32_t fSliding;  /* offset: 376 */
    uint8_t v4Plane;  /* offset: 380 */
    uint32_t bFoundCollision;  /* offset: 396 */
    uint32_t bHaveCollision;  /* offset: 400 */
    uint32_t fNearestDistance;  /* offset: 404 */
    uint8_t vNearestIntersectionPoint;  /* offset: 408 */
    uint8_t vNearestPolygonIntersectionPoint;  /* offset: 420 */
    uint32_t iCount;  /* offset: 432 */
} tCollisionData;

/* Size: 1608 bytes */
typedef struct _CSceneSharedData {
    uint8_t m_CPCList;  /* offset: 0 */
    uint64_t m_CNPCList;  /* offset: 1584 */
    uint8_t m_CCollisionList;  /* offset: 1592 */
} CSceneSharedData;

/* Size: 132540 bytes */
typedef struct _CScene {
    uint8_t scenelock;  /* offset: 132492 */
    uint8_t m_byWeather;  /* offset: 132524 */
    uint8_t m_byWeatherType;  /* offset: 132525 */
    uint8_t m_byKillZoneFlag;  /* offset: 132526 */
    uint32_t m_dwTimeOffset;  /* offset: 132528 */
    uint32_t m_dwScriptID;  /* offset: 132532 */
} CScene;

/* Size: 16 bytes */
typedef struct _tVKY_TerrainHeader {
    uint32_t dwMagic;  /* offset: 0 */
    uint32_t dwVersion;  /* offset: 4 */
    uint32_t dwSize;  /* offset: 8 */
    uint32_t dwUnitCount;  /* offset: 12 */
} tVKY_TerrainHeader;

/* Size: 44 bytes */
typedef struct _tVKY_Vertex {
    uint8_t vPos;  /* offset: 0 */
    uint8_t vNormals;  /* offset: 12 */
    uint32_t dwDiffuse;  /* offset: 24 */
    uint32_t U0;  /* offset: 28 */
    uint32_t V0;  /* offset: 32 */
    uint32_t U1;  /* offset: 36 */
    uint32_t V1;  /* offset: 40 */
} tVKY_Vertex;

/* Size: 64 bytes */
typedef struct _CVKY_Brush {
    uint32_t m_pvPos;  /* offset: 0 */
    uint32_t m_pstFaceCache;  /* offset: 8 */
    uint32_t m_iVertexCount;  /* offset: 12 */
    uint32_t m_iIndexCount;  /* offset: 16 */
    uint32_t m_iFaceCount;  /* offset: 20 */
    uint32_t m_bDraw;  /* offset: 24 */
    uint8_t m_vPos;  /* offset: 28 */
    uint8_t m_vExtents;  /* offset: 40 */
    uint32_t m_fRadius;  /* offset: 52 */
    uint32_t m_dwFlag;  /* offset: 56 */
    uint32_t m_fSlideValue;  /* offset: 60 */
} CVKY_Brush;

/* Size: 24 bytes */
typedef struct _tVertex {
    uint8_t vPos;  /* offset: 0 */
    uint8_t vNormal;  /* offset: 12 */
} tVertex;

/* Size: 3028 bytes */
typedef struct _tGridUnit {
    uint32_t dwFlag;  /* offset: 2904 */
    uint8_t vPos;  /* offset: 2908 */
    uint8_t vCenterPos;  /* offset: 2920 */
    uint8_t vTotalExtents;  /* offset: 2932 */
    uint8_t cObjectList;  /* offset: 2944 */
    uint8_t cBoxList;  /* offset: 2972 */
    uint8_t cPointList;  /* offset: 2988 */
    uint8_t page_mutex;  /* offset: 3004 */
} tGridUnit;

/* Size: 8 bytes */
typedef struct _tQuad {
    void* pstGrid;  /* offset: 0 */
    uint32_t dwFlag;  /* offset: 4 */
} tQuad;

/* Size: 4 bytes */
typedef struct _tFaceInfo {
    uint16_t usMeshIdx;  /* offset: 0 */
    uint16_t usFaceIdx;  /* offset: 2 */
} tFaceInfo;

/* Size: 92 bytes */
typedef struct _tFaceTable {
    uint16_t usCount;  /* offset: 0 */
    void* pstFaces;  /* offset: 4 */
    uint8_t cObjectList;  /* offset: 8 */
    uint8_t cBBoxList;  /* offset: 36 */
    uint8_t cPointList;  /* offset: 52 */
    uint8_t page_mutex;  /* offset: 68 */
} tFaceTable;

/* Size: 40 bytes */
typedef struct _EntityDef {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwID;  /* offset: 4 */
    uint8_t byEntityType;  /* offset: 8 */
    uint32_t dwModelType;  /* offset: 12 */
    uint32_t x;  /* offset: 16 */
    uint32_t y;  /* offset: 20 */
    uint32_t z;  /* offset: 24 */
    uint32_t fFacing;  /* offset: 28 */
    uint32_t dwState;  /* offset: 32 */
    uint32_t bFlag;  /* offset: 36 */
} EntityDef;

/* Size: 8 bytes */
typedef struct _PCChar {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwSceneID;  /* offset: 4 */
} PCChar;

/* Size: 30044 bytes */
typedef struct _CSceneMgr {
    uint16_t m_wServerID;  /* offset: 29640 */
} CSceneMgr;

/* Size: 40 bytes */
typedef struct _AuthList {
    uint8_t chTicket;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 16 */
    uint8_t address;  /* offset: 20 */
} AuthList;

/* Size: 280 bytes */
typedef struct _CCommsMgr {
    uint32_t fExit;  /* offset: 244 */
    uint32_t m_iStatus;  /* offset: 248 */
    uint8_t udp_srv_addr;  /* offset: 252 */
    uint32_t iSocket;  /* offset: 268 */
    uint32_t m_iSocket;  /* offset: 272 */
    uint32_t m_iWSocket;  /* offset: 276 */
} CCommsMgr;

/* Size: 56 bytes */
typedef struct _stLogMessage {
    uint32_t lSrcIP;  /* offset: 0 */
    uint32_t lSrcChar;  /* offset: 4 */
    uint32_t lSrcScript;  /* offset: 8 */
    uint32_t lLogID;  /* offset: 12 */
    uint8_t lParamList;  /* offset: 16 */
} stLogMessage;

/* Size: 60 bytes */
typedef struct _stLogQueue {
    uint8_t tLogMessage;  /* offset: 0 */
    uint8_t bUsed;  /* offset: 56 */
} stLogQueue;

/* Size: 6000304 bytes */
typedef struct _FWLogClient {
    uint32_t m_thread;  /* offset: 264 */
    uint32_t m_iWritePtr;  /* offset: 6000268 */
    uint32_t m_iReadPtr;  /* offset: 6000272 */
    uint8_t m_log_mutex;  /* offset: 6000276 */
    uint32_t m_iConn;  /* offset: 6000300 */
} FWLogClient;

/* Size: 464 bytes */
typedef struct _STLootInfo {
    uint8_t dwInvID;  /* offset: 0 */
    uint8_t byInvCnt;  /* offset: 64 */
    uint8_t byDurability;  /* offset: 400 */
    uint8_t byHardness;  /* offset: 432 */
    uint8_t bHardAlloc;  /* offset: 448 */
} STLootInfo;

/* Size: 68 bytes */
typedef struct _NPCPool {
    uint32_t dwSceneID;  /* offset: 64 */
} NPCPool;

/* Size: 92 bytes */
typedef struct _STTargetList {
    uint8_t m_bAllocated;  /* offset: 0 */
    uint32_t dwCurrentTarget;  /* offset: 4 */
    uint8_t targetlist_mutex;  /* offset: 68 */
} STTargetList;

/* Size: 8 bytes */
typedef struct _NPCPart {
    uint32_t dwID;  /* offset: 0 */
    uint32_t fDist;  /* offset: 4 */
} NPCPart;

/* Size: 24 bytes */
typedef struct _CEffectElement {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wEffectID;  /* offset: 4 */
    uint16_t wDuration;  /* offset: 6 */
    uint32_t dwTimeStamp;  /* offset: 8 */
    uint8_t byPowerRank;  /* offset: 12 */
    uint32_t dwImmunityID;  /* offset: 16 */
    uint8_t byAllocated;  /* offset: 20 */
} CEffectElement;

/* Size: 36 bytes */
typedef struct _STSpawnRec {
    uint32_t dwSpawnPtID;  /* offset: 0 */
    uint32_t X;  /* offset: 4 */
    uint32_t Y;  /* offset: 8 */
    uint32_t Z;  /* offset: 12 */
    uint32_t dwAttribID;  /* offset: 16 */
    uint32_t dwTotalCounter;  /* offset: 20 */
    uint8_t bySpawnMax;  /* offset: 24 */
    uint8_t byIsOn;  /* offset: 25 */
    uint32_t dwNameID;  /* offset: 28 */
    uint16_t wdLevel;  /* offset: 32 */
} STSpawnRec;

/* Size: 116 bytes */
typedef struct _CSpawnPoint {
    uint32_t m_pcScene;  /* offset: 0 */
    uint32_t m_dwAttribID;  /* offset: 4 */
    uint16_t m_wdCount;  /* offset: 8 */
    uint16_t m_wdDeadCounter;  /* offset: 10 */
    uint16_t m_wdCounter;  /* offset: 12 */
    uint16_t m_wdRadius;  /* offset: 14 */
    uint32_t m_dwTickLimit;  /* offset: 16 */
    uint8_t m_bySpawnMax;  /* offset: 20 */
    uint32_t m_fFacing;  /* offset: 24 */
    uint8_t m_byIsOn;  /* offset: 28 */
    uint8_t m_byAllocated;  /* offset: 29 */
    uint32_t m_dwTickCount;  /* offset: 32 */
    uint8_t m_bPriortyTarget;  /* offset: 36 */
    uint32_t m_dwPriortyTargetID;  /* offset: 40 */
    uint32_t dwInstanceIndex;  /* offset: 44 */
    uint8_t spawnpt_mutex;  /* offset: 48 */
    uint32_t m_pcPoint;  /* offset: 72 */
    uint8_t m_byUseTime;  /* offset: 76 */
    uint8_t m_byUseDate;  /* offset: 77 */
    uint8_t m_byUseRangeHour;  /* offset: 78 */
    uint8_t m_byUseRangeDate;  /* offset: 79 */
    uint32_t m_dwBeginHour;  /* offset: 80 */
    uint32_t m_dwEndHour;  /* offset: 84 */
    uint32_t m_dwBeginDay;  /* offset: 88 */
    uint32_t m_dwBeginMonth;  /* offset: 92 */
    uint32_t m_dwEndDay;  /* offset: 96 */
    uint32_t m_dwEndMonth;  /* offset: 100 */
    uint32_t m_dwGrp;  /* offset: 104 */
    uint32_t m_dwScan;  /* offset: 108 */
    uint32_t m_dwExScan;  /* offset: 112 */
} CSpawnPoint;

/* Size: 40 bytes */
typedef struct _CWayPoints {
    uint8_t m_CoordPt;  /* offset: 0 */
    uint8_t m_cGroundPt;  /* offset: 12 */
    uint32_t m_dwID;  /* offset: 24 */
    uint8_t m_bAllocated;  /* offset: 28 */
    uint32_t m_dwNeighbourCount;  /* offset: 32 */
} CWayPoints;

/* Size: 4 bytes */
typedef struct _CWayPIndex {
    uint32_t m_dwIndex;  /* offset: 0 */
} CWayPIndex;

/* Size: 16 bytes */
typedef struct _CPathFinder {
    uint32_t m_dwFromIndex;  /* offset: 0 */
    uint32_t m_dwToIndex;  /* offset: 4 */
    uint32_t m_dwIndexCount;  /* offset: 8 */
    uint32_t IndexList;  /* offset: 12 */
} CPathFinder;

/* Size: 48 bytes */
typedef struct _CWayPointMgr {
    uint32_t m_pcWayPoints;  /* offset: 4 */
    uint32_t m_dwWayPointCount;  /* offset: 8 */
    uint8_t m_cPathTable;  /* offset: 12 */
    uint8_t m_bAllocated;  /* offset: 28 */
    uint32_t m_dwSceneID;  /* offset: 32 */
    uint32_t m_dwTotalNeighbourMem;  /* offset: 36 */
    uint32_t m_dwTotalPathMem;  /* offset: 40 */
} CWayPointMgr;

/* Size: 32776 bytes */
typedef struct _CWayPointSceneMgr {
    uint32_t m_pcWayPointMgr;  /* offset: 4 */
} CWayPointSceneMgr;

/* Size: 1076 bytes */
typedef struct _CNPCAttribute {
    uint8_t m_bAllocated;  /* offset: 0 */
    uint8_t m_bInvalid;  /* offset: 1 */
    uint32_t m_dwAttribID;  /* offset: 4 */
    uint32_t m_dwModelID;  /* offset: 8 */
    uint8_t m_byAttachmentID;  /* offset: 12 */
    uint32_t m_dwAttRating;  /* offset: 16 */
    uint32_t m_dwDefRating;  /* offset: 20 */
    uint16_t m_wdMinFireDmg;  /* offset: 24 */
    uint16_t m_wdMaxFireDmg;  /* offset: 26 */
    uint16_t m_wdMinColdDmg;  /* offset: 28 */
    uint16_t m_wdMaxColdDmg;  /* offset: 30 */
    uint16_t m_wdMinLightningDmg;  /* offset: 32 */
    uint16_t m_wdMaxLightningDmg;  /* offset: 34 */
    uint16_t m_wdMinPoisonDmg;  /* offset: 36 */
    uint16_t m_wdMaxPoisonDmg;  /* offset: 38 */
    uint16_t m_wdMinPhysicalDmg;  /* offset: 40 */
    uint16_t m_wdMaxPhysicalDmg;  /* offset: 42 */
    uint32_t m_dwMaxHitPoints;  /* offset: 44 */
    uint16_t m_wdHitPointRegen;  /* offset: 48 */
    uint16_t m_sFireResist;  /* offset: 50 */
    uint16_t m_sColdResist;  /* offset: 52 */
    uint16_t m_sLightningResist;  /* offset: 54 */
    uint16_t m_sPoisonResist;  /* offset: 56 */
    uint16_t m_sPhysicalResist;  /* offset: 58 */
    uint8_t m_byMoveRate;  /* offset: 60 */
    uint8_t m_dwXPPerHP;  /* offset: 61 */
    uint32_t m_dwXPValue;  /* offset: 64 */
    uint16_t m_wdLevel;  /* offset: 68 */
    uint32_t m_dwClan;  /* offset: 72 */
    uint8_t m_byStanceID;  /* offset: 76 */
    uint16_t m_wdAnimStanceID;  /* offset: 78 */
    uint16_t m_wdPowerID1;  /* offset: 80 */
    uint8_t m_byPowerRank1;  /* offset: 82 */
    uint16_t m_wdPowerID2;  /* offset: 84 */
    uint8_t m_byPowerRank2;  /* offset: 86 */
    uint16_t m_wdPowerID3;  /* offset: 88 */
    uint8_t m_byPowerRank3;  /* offset: 90 */
    uint16_t m_wdPowerID4;  /* offset: 92 */
    uint8_t m_byPowerRank4;  /* offset: 94 */
    uint16_t m_wdPowerID5;  /* offset: 96 */
    uint8_t m_byPowerRank5;  /* offset: 98 */
    uint16_t m_wdPowerID6;  /* offset: 100 */
    uint8_t m_byPowerRank6;  /* offset: 102 */
    uint16_t m_wdPowerID7;  /* offset: 104 */
    uint8_t m_byPowerRank7;  /* offset: 106 */
    uint16_t m_wdPowerID8;  /* offset: 108 */
    uint8_t m_byPowerRank8;  /* offset: 110 */
    uint16_t m_wdPowerID9;  /* offset: 112 */
    uint8_t m_byPowerRank9;  /* offset: 114 */
    uint16_t m_wdPowerID10;  /* offset: 116 */
    uint8_t m_byPowerRank10;  /* offset: 118 */
    uint16_t m_wdTreasureTableID;  /* offset: 120 */
    uint8_t m_byInvisible;  /* offset: 122 */
    uint8_t m_byAggressiveFlag;  /* offset: 123 */
    uint16_t m_wdRetreatHitPoints;  /* offset: 124 */
    uint16_t m_wdAggroValue;  /* offset: 126 */
    uint8_t m_byScanOption;  /* offset: 128 */
    uint8_t m_byPowerMultiplier;  /* offset: 129 */
    uint8_t m_byMeleeMultiplier;  /* offset: 130 */
    uint8_t m_byRangeMultiplier;  /* offset: 131 */
    uint8_t m_byReturnFlag;  /* offset: 132 */
    uint16_t m_wdChallengeLevel;  /* offset: 134 */
    uint32_t m_dwScriptID;  /* offset: 136 */
    uint32_t m_dwNameID;  /* offset: 140 */
    uint8_t m_byTargetType;  /* offset: 144 */
    uint8_t m_byMeleePerc;  /* offset: 145 */
    uint8_t m_byPowerPerc1;  /* offset: 146 */
    uint8_t m_byPowerPerc2;  /* offset: 147 */
    uint8_t m_byPowerPerc3;  /* offset: 148 */
    uint8_t m_byPowerPerc4;  /* offset: 149 */
    uint8_t m_byPowerPerc5;  /* offset: 150 */
    uint8_t m_byPowerPerc6;  /* offset: 151 */
    uint8_t m_byPowerPerc7;  /* offset: 152 */
    uint8_t m_byPowerPerc8;  /* offset: 153 */
    uint8_t m_byPowerPerc9;  /* offset: 154 */
    uint8_t m_byPowerPerc10;  /* offset: 155 */
    uint8_t m_byIsGuard;  /* offset: 156 */
    uint8_t m_byHalfMoveRate;  /* offset: 157 */
    uint16_t m_wdMeleeRange;  /* offset: 158 */
    uint16_t m_wdPowerRange1;  /* offset: 160 */
    uint16_t m_wdPowerRange2;  /* offset: 162 */
    uint16_t m_wdPowerRange3;  /* offset: 164 */
    uint16_t m_wdPowerRange4;  /* offset: 166 */
    uint16_t m_wdPowerRange5;  /* offset: 168 */
    uint16_t m_wdPowerRange6;  /* offset: 170 */
    uint16_t m_wdPowerRange7;  /* offset: 172 */
    uint16_t m_wdPowerRange8;  /* offset: 174 */
    uint16_t m_wdPowerRange9;  /* offset: 176 */
    uint16_t m_wdPowerRange10;  /* offset: 178 */
    uint16_t m_wdEffectID;  /* offset: 180 */
    uint16_t m_wdScanAreaRange;  /* offset: 182 */
    uint8_t m_byDoClanRating;  /* offset: 184 */
    uint8_t m_byEnemyClan;  /* offset: 185 */
    uint8_t m_byUpValue;  /* offset: 186 */
    uint8_t m_byDownValue;  /* offset: 187 */
    uint8_t m_byIsSNPC;  /* offset: 188 */
    uint8_t m_byInvisiblePerc;  /* offset: 189 */
    uint8_t m_byMaxItemCount;  /* offset: 190 */
    uint8_t m_byPermanentDeath;  /* offset: 191 */
    uint8_t m_byIsDead;  /* offset: 192 */
    uint16_t m_sWeaponSpeed;  /* offset: 194 */
    uint16_t m_sStunResist;  /* offset: 916 */
    uint16_t m_sSlowResist;  /* offset: 918 */
    uint16_t m_sEntangledResist;  /* offset: 920 */
    uint32_t m_dwAggroRate;  /* offset: 924 */
    uint16_t m_wdDetectHiddenRate;  /* offset: 928 */
    uint8_t m_byCallHelpRatio;  /* offset: 930 */
    uint16_t m_wdCombatTimeout;  /* offset: 932 */
    uint8_t m_bySplitChance;  /* offset: 934 */
    uint8_t m_bySplitDamageWeakness;  /* offset: 935 */
    uint8_t m_bySplitMax;  /* offset: 936 */
    uint32_t m_dwSplitID;  /* offset: 940 */
    uint16_t m_wdSplitFX;  /* offset: 944 */
    uint8_t m_bySpawnChildChance;  /* offset: 946 */
    uint32_t m_dwSpawnChildID;  /* offset: 948 */
    uint16_t m_wdSpawnChildAnim;  /* offset: 952 */
    uint32_t m_dwBossID;  /* offset: 956 */
    uint16_t m_wdBossFXID;  /* offset: 960 */
    uint8_t m_byScatterChance;  /* offset: 962 */
    uint8_t m_byScatterDamageWeakness;  /* offset: 963 */
    uint8_t m_byScatterMax;  /* offset: 964 */
    uint32_t m_dwScatterID;  /* offset: 968 */
    uint16_t m_wdScatterFXID;  /* offset: 972 */
    uint16_t m_wdEaterThreshold;  /* offset: 974 */
    uint8_t m_byEaterChance;  /* offset: 976 */
    uint16_t m_wdEaterRange;  /* offset: 978 */
    uint32_t m_dwEaterID;  /* offset: 980 */
    uint16_t m_wdEaterHPGain;  /* offset: 984 */
    uint16_t m_wdEaterAnim;  /* offset: 986 */
    uint8_t m_byPowerType1;  /* offset: 988 */
    uint8_t m_byPowerType2;  /* offset: 989 */
    uint8_t m_byPowerType3;  /* offset: 990 */
    uint8_t m_byPowerType4;  /* offset: 991 */
    uint8_t m_byPowerType5;  /* offset: 992 */
    uint8_t m_byPowerType6;  /* offset: 993 */
    uint8_t m_byPowerType7;  /* offset: 994 */
    uint8_t m_byPowerType8;  /* offset: 995 */
    uint8_t m_byPowerType9;  /* offset: 996 */
    uint8_t m_byPowerType10;  /* offset: 997 */
    uint32_t m_dwScanScriptID;  /* offset: 1000 */
    uint8_t m_byCheckDelete;  /* offset: 1004 */
    uint8_t m_byInvisibilityPerc;  /* offset: 1005 */
    uint32_t m_dwCheckNPCScriptID;  /* offset: 1008 */
    uint8_t m_byMoveAwayPerc;  /* offset: 1012 */
    uint8_t m_byLure;  /* offset: 1013 */
    uint8_t m_bySwarm;  /* offset: 1014 */
    uint32_t m_dwCallForHelpID;  /* offset: 1016 */
    uint8_t m_byPersistent;  /* offset: 1020 */
    uint32_t m_dwTargetLostID;  /* offset: 1024 */
    uint32_t m_dwArrivedID;  /* offset: 1028 */
    uint8_t m_byBodyGuard;  /* offset: 1032 */
    uint8_t m_byAOEHunter;  /* offset: 1033 */
    uint32_t m_dwAttackScriptID;  /* offset: 1036 */
    uint32_t m_dwStuckScriptID;  /* offset: 1040 */
    uint8_t m_byNPCCheckOW;  /* offset: 1044 */
    uint8_t m_byCallForHelpOW;  /* offset: 1045 */
    uint32_t m_dwRangeCheckID;  /* offset: 1048 */
    uint8_t m_byRangeCheckOW;  /* offset: 1052 */
    uint8_t m_byAttackScriptOW;  /* offset: 1053 */
    uint32_t m_dwPowerScriptID;  /* offset: 1056 */
    uint8_t m_byPowerScriptOW;  /* offset: 1060 */
    uint32_t m_dwProperties;  /* offset: 1064 */
    uint16_t m_wdIdleTime;  /* offset: 1068 */
    uint8_t m_byBreakSprint;  /* offset: 1070 */
    uint8_t m_byHitFilter;  /* offset: 1071 */
    uint8_t m_byRotate;  /* offset: 1072 */
    uint16_t m_wdLureRadius;  /* offset: 1074 */
} CNPCAttribute;

/* Size: 20 bytes */
typedef struct _TargetInfo {
    uint8_t m_bAllocated;  /* offset: 0 */
    uint32_t m_dwID;  /* offset: 4 */
    uint32_t m_dwDamage;  /* offset: 8 */
    uint32_t m_dwPartyID;  /* offset: 12 */
    uint8_t m_byAOE;  /* offset: 16 */
} TargetInfo;

/* Size: 12 bytes */
typedef struct _BPoint {
    uint32_t dwTickPass;  /* offset: 0 */
    uint32_t dwIndexFrom;  /* offset: 4 */
    uint32_t dwIndexTo;  /* offset: 8 */
} BPoint;

/* Size: 2968 bytes */
typedef struct _NPCInfo {
    uint8_t npc_mutex;  /* offset: 0 */
    uint8_t targetlist;  /* offset: 24 */
    uint8_t m_cEffectElements;  /* offset: 568 */
    uint8_t m_dwInvID;  /* offset: 1288 */
    uint8_t m_byInvCnt;  /* offset: 1352 */
    uint8_t m_dwComponent;  /* offset: 1368 */
    uint8_t m_byHardness;  /* offset: 1688 */
    uint8_t m_byDurability;  /* offset: 1704 */
    uint32_t m_iTargetCount;  /* offset: 1720 */
    uint8_t m_byBlockCount;  /* offset: 1724 */
    uint32_t m_dwMaxDamage;  /* offset: 1728 */
    uint8_t m_byMaxIndex;  /* offset: 1732 */
    uint32_t m_dwMinDamage;  /* offset: 1736 */
    uint8_t m_byMinIndex;  /* offset: 1740 */
    uint32_t m_dwNPCType;  /* offset: 1744 */
    uint8_t m_byState;  /* offset: 1748 */
    uint32_t m_dwCurrentHitPoints;  /* offset: 1752 */
    uint8_t m_byScratchData;  /* offset: 1756 */
    uint8_t m_byAttackType;  /* offset: 2268 */
    uint32_t m_dwAttackTimeStamp;  /* offset: 2272 */
    uint32_t m_dwSpawnIndex;  /* offset: 2276 */
    uint32_t m_dwSuicideTimeStamp;  /* offset: 2280 */
    uint32_t m_dwDeadTimeStamp;  /* offset: 2284 */
    uint32_t m_dwMoveIntervalTimeStamp;  /* offset: 2288 */
    uint8_t m_bAllocated;  /* offset: 2292 */
    uint8_t m_bInFight;  /* offset: 2293 */
    uint8_t m_cDstVector;  /* offset: 2296 */
    uint16_t m_wdRange;  /* offset: 2308 */
    uint32_t m_dwPrevTargetID;  /* offset: 2312 */
    uint32_t m_dwCurrentTargetID;  /* offset: 2316 */
    uint8_t m_bOnWayPointTransit;  /* offset: 2320 */
    uint32_t m_dwEnemyScanTick;  /* offset: 2324 */
    uint8_t m_bToggleAggression;  /* offset: 2328 */
    uint32_t m_dwTreasureTableID;  /* offset: 2332 */
    uint8_t m_byAttackState;  /* offset: 2336 */
    uint8_t m_byActiveCombat;  /* offset: 2337 */
    uint8_t m_byCombatState;  /* offset: 2338 */
    uint8_t m_byMoveState;  /* offset: 2339 */
    uint8_t m_byEnemyScanState;  /* offset: 2340 */
    uint8_t m_byQuad;  /* offset: 2341 */
    uint8_t m_byEdge;  /* offset: 2342 */
    uint16_t m_wdStanceID;  /* offset: 2344 */
    uint32_t m_dwKillerID;  /* offset: 2348 */
    uint8_t m_bScanNow;  /* offset: 2352 */
    uint8_t m_byLootFlag;  /* offset: 2353 */
    uint8_t m_byForceRetreatState;  /* offset: 2354 */
    uint32_t m_dwPosTrackTick;  /* offset: 2356 */
    uint8_t m_cConfirmTargetVect;  /* offset: 2360 */
    uint8_t m_bDecideAttack;  /* offset: 2372 */
    uint32_t m_dwPrevTick;  /* offset: 2376 */
    uint32_t m_dwCurrTick;  /* offset: 2380 */
    uint32_t m_dwCheckTick;  /* offset: 2384 */
    uint32_t m_cWayPath;  /* offset: 2388 */
    uint32_t m_dwPathFindIndex;  /* offset: 2392 */
    uint8_t m_bPriortyTarget;  /* offset: 2396 */
    uint32_t m_dwPriortyTargetID;  /* offset: 2400 */
    uint8_t m_bForceRetreat;  /* offset: 2404 */
    uint8_t m_bIsLoot;  /* offset: 2405 */
    uint32_t m_dwCombatWayPointTick;  /* offset: 2408 */
    uint8_t m_byPosTrackCount;  /* offset: 2532 */
    uint8_t m_byDoGrav;  /* offset: 2533 */
    uint8_t m_cFalseVector;  /* offset: 2536 */
    uint8_t m_cPrevTargetVector;  /* offset: 2548 */
    uint8_t m_byPossessed;  /* offset: 2560 */
    uint32_t m_pSelf;  /* offset: 2564 */
    uint8_t m_bOnTarget;  /* offset: 2568 */
    uint32_t m_ptrSlot;  /* offset: 2576 */
    uint8_t m_bySlotID;  /* offset: 2580 */
    uint8_t m_byCombatMoveState;  /* offset: 2581 */
    uint8_t m_cCombatStartPoint;  /* offset: 2584 */
    uint8_t m_byInvisible;  /* offset: 2596 */
    uint8_t m_byCurrentItemCount;  /* offset: 2597 */
    uint8_t m_dwNPCCounter;  /* offset: 2598 */
    uint8_t m_byLootCount;  /* offset: 2599 */
    uint8_t m_bIsCalled;  /* offset: 2600 */
    uint8_t m_bActivateCalled;  /* offset: 2601 */
    uint8_t m_bActivateCalled2;  /* offset: 2602 */
    uint32_t m_dwQuestOwner;  /* offset: 2604 */
    uint8_t m_byNoDeath;  /* offset: 2608 */
    uint8_t m_byKillNow;  /* offset: 2609 */
    uint32_t m_iPathType;  /* offset: 2612 */
    uint8_t m_byRemoveMode;  /* offset: 2616 */
    uint8_t m_bIsClicked;  /* offset: 2617 */
    uint8_t m_bIndiSpawn;  /* offset: 2618 */
    uint8_t m_cNoSpCoord;  /* offset: 2620 */
    uint16_t m_wdNoSpRad;  /* offset: 2632 */
    uint8_t m_bDoFly;  /* offset: 2634 */
    uint32_t m_dwActiveScanTick;  /* offset: 2636 */
    uint8_t m_byDoDropLoot;  /* offset: 2640 */
    uint8_t m_cVector;  /* offset: 2644 */
    uint8_t m_byKeepRange;  /* offset: 2656 */
    uint32_t m_fRange;  /* offset: 2660 */
    uint8_t m_byMoveType;  /* offset: 2664 */
    uint32_t m_dwCharID;  /* offset: 2668 */
    uint8_t m_byMovementStatus;  /* offset: 2672 */
    uint8_t m_bStateSwitched;  /* offset: 2673 */
    uint8_t m_dwInstanceIndex;  /* offset: 2674 */
    uint32_t m_dwCombatLastTick;  /* offset: 2676 */
    uint32_t m_dwSelfTarget;  /* offset: 2680 */
    uint8_t m_dwScanList;  /* offset: 2684 */
    uint32_t m_iScanCounter;  /* offset: 2884 */
    uint8_t m_bChangeSpeed;  /* offset: 2888 */
    uint8_t m_dwCallForHelpList;  /* offset: 2892 */
    uint32_t m_dwSecondaryTargetID;  /* offset: 2932 */
    uint32_t m_dwIdleTime;  /* offset: 2936 */
    uint8_t m_bRunScript;  /* offset: 2940 */
    uint16_t m_sFireResistCache;  /* offset: 2942 */
    uint16_t m_sColdResistCache;  /* offset: 2944 */
    uint16_t m_sLightningResistCache;  /* offset: 2946 */
    uint16_t m_sPoisonResistCache;  /* offset: 2948 */
    uint16_t m_sPhysicalResistCache;  /* offset: 2950 */
    uint32_t m_dwAttackCache;  /* offset: 2952 */
    uint32_t m_dwDefenseCache;  /* offset: 2956 */
    uint8_t m_bDoRemove;  /* offset: 2960 */
    uint8_t m_byMoveMode;  /* offset: 2961 */
    uint32_t m_dwTargetID;  /* offset: 2964 */
} NPCInfo;

/* Size: 8 bytes */
typedef struct _NPCGroupInfo {
    uint32_t m_pcNPCList;  /* offset: 4 */
} NPCGroupInfo;

/* Size: 4304008 bytes */
typedef struct _CNPCAttAccess {
    uint32_t m_pMemAccess;  /* offset: 4304000 */
    uint32_t m_pcNPCs;  /* offset: 4304004 */
} CNPCAttAccess;

/* Size: 32 bytes */
typedef struct _CSpawnMgr {
    uint8_t spawnmgr_mutex;  /* offset: 4 */
    uint32_t m_pcSpawnPt;  /* offset: 28 */
} CSpawnMgr;

/* Size: 16 bytes */
typedef struct _stLoc {
    uint8_t cVectPos;  /* offset: 0 */
    uint8_t byQuad;  /* offset: 12 */
    uint8_t byEdge;  /* offset: 13 */
} stLoc;

/* Size: 108 bytes */
typedef struct _stAttackerInfo {
    uint32_t dwTargetID;  /* offset: 0 */
    uint8_t dwAttacker;  /* offset: 4 */
    uint8_t attacker_mutex;  /* offset: 84 */
} stAttackerInfo;

/* Size: 16034008 bytes */
typedef struct _CAI {
    uint8_t m_pcPartnerList;  /* offset: 196808 */
    uint64_t m_cNPCS;  /* offset: 5629576 */
    uint8_t m_NPCFixedAtt;  /* offset: 5629584 */
    uint8_t m_cSpawnMgr;  /* offset: 9933592 */
    uint8_t m_cWayPointSceneMgr;  /* offset: 9933624 */
    uint32_t m_pcTargetList;  /* offset: 9966400 */
    uint64_t m_cPoolMgr;  /* offset: 10031940 */
    uint8_t m_cSharedData;  /* offset: 10031948 */
    uint8_t spawnpt_mutex;  /* offset: 10033556 */
    uint8_t npc_mutex;  /* offset: 10033580 */
    uint8_t npcaggro_mutex;  /* offset: 10033604 */
    uint8_t callforhelp_mutex;  /* offset: 10033628 */
    uint32_t m_dwCallForHelpTimer;  /* offset: 10033652 */
    uint8_t m_cLogClient;  /* offset: 10033656 */
    uint32_t m_iStatus;  /* offset: 16033960 */
    uint32_t fExit;  /* offset: 16033964 */
    uint32_t m_iALog;  /* offset: 16033968 */
    uint8_t m_bNPCExt;  /* offset: 16033972 */
    uint32_t m_dwScriptCount;  /* offset: 16033976 */
    uint32_t m_pSceneMgr;  /* offset: 16033980 */
    uint8_t ai_mutex;  /* offset: 16033984 */
} CAI;

/* Size: 8 bytes */
typedef struct _ScriptParams {
    uint64_t dwParams;  /* offset: 0 */
} ScriptParams;

/* Size: 1052 bytes */
typedef struct _Task {
    uint8_t byTaskType;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint16_t wEventID;  /* offset: 8 */
    uint32_t fUsed;  /* offset: 12 */
    uint16_t wSize;  /* offset: 16 */
    void* pSendThread;  /* offset: 20 */
    uint8_t byData;  /* offset: 24 */
} Task;

/* Size: 32 bytes */
typedef struct _TaskDef {
    uint8_t byTaskType;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint16_t wEventID;  /* offset: 8 */
    uint16_t wSize;  /* offset: 10 */
    void* pSendThread;  /* offset: 12 */
    void* pData;  /* offset: 16 */
    uint8_t bySecurity;  /* offset: 20 */
    uint32_t iCallCheck;  /* offset: 24 */
    void* pParams;  /* offset: 28 */
} TaskDef;

/* Size: 16 bytes */
typedef struct _ScriptData {
    uint32_t dwScriptID;  /* offset: 0 */
    uint32_t dwSize;  /* offset: 4 */
    void* pData;  /* offset: 8 */
} ScriptData;

/* Size: 60 bytes */
typedef struct _CVM {
    uint32_t L;  /* offset: 56 */
} CVM;

/* Size: 33520 bytes */
typedef struct _CGS {
    uint32_t L;  /* offset: 732 */
    uint32_t m_dwChatID;  /* offset: 736 */
    uint8_t m_pObjectList;  /* offset: 740 */
    uint32_t m_iMoveDebug;  /* offset: 33508 */
    uint32_t m_dwTrackID;  /* offset: 33512 */
    uint32_t m_dwTrack2ID;  /* offset: 33516 */
} CGS;

/* Size: 152 bytes */
typedef struct _CTaskMgr {
    uint32_t m_pDBAccess;  /* offset: 136 */
    uint32_t m_iSettingID;  /* offset: 140 */
    uint32_t m_dwProcessID;  /* offset: 144 */
    uint32_t m_iCallThreshold;  /* offset: 148 */
} CTaskMgr;

/* Size: 264 bytes */
typedef struct _ZoneInformation {
    uint32_t iZoneID;  /* offset: 0 */
    uint8_t chSceneFile;  /* offset: 4 */
    uint32_t iSceneVer;  /* offset: 260 */
} ZoneInformation;

/* Size: 24 bytes */
typedef struct _CProc {
    uint32_t iPID;  /* offset: 0 */
    uint32_t thread;  /* offset: 4 */
    void* pClass;  /* offset: 8 */
    uint32_t iType;  /* offset: 12 */
    uint32_t iStatus;  /* offset: 16 */
} CProc;

/* Size: 8 bytes */
typedef struct _ThreadParams {
    void* pClass;  /* offset: 0 */
    uint32_t iType;  /* offset: 4 */
} ThreadParams;

/* Size: 11860 bytes */
typedef struct _CProcMgr {
    uint32_t fExit;  /* offset: 368 */
    uint8_t SysProcCtrlBlk;  /* offset: 372 */
    uint32_t m_iStatus;  /* offset: 11852 */
    uint32_t m_iStartCount;  /* offset: 11856 */
} CProcMgr;

/* Size: 28 bytes */
typedef struct _random_data {
    uint32_t rptr;  /* offset: 4 */
    uint32_t state;  /* offset: 8 */
    uint32_t rand_type;  /* offset: 12 */
    uint32_t rand_deg;  /* offset: 16 */
    uint32_t rand_sep;  /* offset: 20 */
    uint32_t end_ptr;  /* offset: 24 */
} random_data;

/* Size: 24 bytes */
typedef struct _drand48_data {
    uint8_t __old_x;  /* offset: 6 */
    uint16_t __c;  /* offset: 12 */
    uint16_t __init;  /* offset: 14 */
    uint64_t __a;  /* offset: 16 */
} drand48_data;

/* Size: 144 bytes */
typedef struct _CTimer {
    uint32_t startdate;  /* offset: 0 */
    uint32_t start;  /* offset: 4 */
    uint32_t dwSeconds;  /* offset: 8 */
    uint32_t dwTimes;  /* offset: 12 */
    uint32_t dwInterval;  /* offset: 16 */
    uint32_t secbase;  /* offset: 140 */
} CTimer;

/* Size: 8 bytes */
typedef struct _iovec {
    uint32_t iov_base;  /* offset: 0 */
    uint32_t iov_len;  /* offset: 4 */
} iovec;

/* Size: 16 bytes */
typedef struct _sockaddr {
    int16_t sa_family;  /* offset: 0 */
} sockaddr;

/* Size: 128 bytes */
typedef struct _sockaddr_storage {
    int16_t ss_family;  /* offset: 0 */
    uint32_t __ss_align;  /* offset: 4 */
} sockaddr_storage;

/* Size: 28 bytes */
typedef struct _msghdr {
    uint32_t msg_name;  /* offset: 0 */
    uint32_t msg_namelen;  /* offset: 4 */
    uint32_t msg_iov;  /* offset: 8 */
    uint32_t msg_iovlen;  /* offset: 12 */
    uint32_t msg_control;  /* offset: 16 */
    uint32_t msg_controllen;  /* offset: 20 */
    uint32_t msg_flags;  /* offset: 24 */
} msghdr;

/* Size: 12 bytes */
typedef struct _cmsghdr {
    uint32_t cmsg_len;  /* offset: 0 */
    uint32_t cmsg_level;  /* offset: 4 */
    uint32_t cmsg_type;  /* offset: 8 */
} cmsghdr;

/* Size: 12 bytes */
typedef struct _ucred {
    void* pid;  /* offset: 0 */
    uint32_t uid;  /* offset: 4 */
    uint32_t gid;  /* offset: 8 */
} ucred;

/* Size: 8 bytes */
typedef struct _linger {
    uint32_t l_onoff;  /* offset: 0 */
    uint32_t l_linger;  /* offset: 4 */
} linger;

/* Size: 28 bytes */
typedef struct _random_data {
    uint32_t rptr;  /* offset: 4 */
    uint32_t state;  /* offset: 8 */
    uint32_t rand_type;  /* offset: 12 */
    uint32_t rand_deg;  /* offset: 16 */
    uint32_t rand_sep;  /* offset: 20 */
    uint32_t end_ptr;  /* offset: 24 */
} random_data;

/* Size: 24 bytes */
typedef struct _drand48_data {
    uint8_t __old_x;  /* offset: 6 */
    uint16_t __c;  /* offset: 12 */
    uint16_t __init;  /* offset: 14 */
    uint64_t __a;  /* offset: 16 */
} drand48_data;

/* Size: 12 bytes */
typedef struct _IO_marker {
    uint32_t _pos;  /* offset: 8 */
} IO_marker;

/* Size: 148 bytes */
typedef struct _IO_FILE {
    uint32_t _flags;  /* offset: 0 */
    uint32_t _IO_read_ptr;  /* offset: 4 */
    uint32_t _IO_read_end;  /* offset: 8 */
    uint32_t _IO_read_base;  /* offset: 12 */
    uint32_t _IO_write_base;  /* offset: 16 */
    uint32_t _IO_write_ptr;  /* offset: 20 */
    uint32_t _IO_write_end;  /* offset: 24 */
    uint32_t _IO_buf_base;  /* offset: 28 */
    uint32_t _IO_buf_end;  /* offset: 32 */
    uint32_t _IO_save_base;  /* offset: 36 */
    uint32_t _IO_backup_base;  /* offset: 40 */
    uint32_t _IO_save_end;  /* offset: 44 */
    uint32_t _markers;  /* offset: 48 */
    uint32_t _chain;  /* offset: 52 */
    uint32_t _fileno;  /* offset: 56 */
    uint32_t _blksize;  /* offset: 60 */
    uint32_t _old_offset;  /* offset: 64 */
    uint16_t _cur_column;  /* offset: 68 */
    uint8_t _vtable_offset;  /* offset: 70 */
    uint64_t _offset;  /* offset: 76 */
    uint32_t __pad1;  /* offset: 84 */
    uint32_t __pad2;  /* offset: 88 */
    uint32_t _mode;  /* offset: 92 */
} IO_FILE;

/* Size: 128 bytes */
typedef struct _siginfo {
    uint32_t s8_timer1;  /* offset: 0 */
    uint32_t s4si_addr;  /* offset: 0 */
    uint32_t s20si_pid;  /* offset: 0 */
    uint32_t s12si_pid;  /* offset: 0 */
    uint32_t si_signo;  /* offset: 0 */
    uint32_t s8si_band;  /* offset: 0 */
    uint32_t s8si_pid;  /* offset: 0 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_fd;  /* offset: 4 */
    uint32_t _timer2;  /* offset: 4 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_errno;  /* offset: 4 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_code;  /* offset: 8 */
    uint32_t si_status;  /* offset: 8 */
    uint32_t si_sigval;  /* offset: 8 */
    uint32_t si_utime;  /* offset: 12 */
    uint32_t si_stime;  /* offset: 16 */
} siginfo;

/* Size: 64 bytes */
typedef struct _sigevent {
    uint32_t sigev_value;  /* offset: 0 */
    uint32_t _attribute;  /* offset: 4 */
    uint32_t sigev_signo;  /* offset: 4 */
    uint32_t sigev_notify;  /* offset: 8 */
} sigevent;

/* Size: 140 bytes */
typedef struct _sigaction {
    uint32_t u4sa_handler;  /* offset: 0 */
    uint8_t sa_mask;  /* offset: 4 */
    uint32_t sa_flags;  /* offset: 132 */
} sigaction;

/* Size: 12 bytes */
typedef struct _sigvec {
    uint32_t sv_handler;  /* offset: 0 */
    uint32_t sv_mask;  /* offset: 4 */
    uint32_t sv_flags;  /* offset: 8 */
} sigvec;

/* Size: 10 bytes */
typedef struct _fpreg {
    uint16_t exponent;  /* offset: 8 */
} fpreg;

/* Size: 16 bytes */
typedef struct _fpxreg {
    uint64_t significand;  /* offset: 0 */
    uint16_t exponent;  /* offset: 8 */
    uint8_t padding;  /* offset: 10 */
} fpxreg;

/* Size: 624 bytes */
typedef struct _fpstate {
    uint32_t cw;  /* offset: 0 */
    uint32_t sw;  /* offset: 4 */
    uint32_t tag;  /* offset: 8 */
    uint32_t ipoff;  /* offset: 12 */
    uint32_t cssel;  /* offset: 16 */
    uint32_t dataoff;  /* offset: 20 */
    uint32_t datasel;  /* offset: 24 */
    int16_t status;  /* offset: 108 */
    uint16_t magic;  /* offset: 110 */
    uint32_t mxcsr;  /* offset: 136 */
    uint32_t reserved;  /* offset: 140 */
} fpstate;

/* Size: 88 bytes */
typedef struct _sigcontext {
    uint16_t gs;  /* offset: 0 */
    uint16_t __gsh;  /* offset: 2 */
    uint16_t fs;  /* offset: 4 */
    uint16_t __fsh;  /* offset: 6 */
    uint16_t es;  /* offset: 8 */
    uint16_t __esh;  /* offset: 10 */
    uint16_t ds;  /* offset: 12 */
    uint16_t __dsh;  /* offset: 14 */
    uint32_t edi;  /* offset: 16 */
    uint32_t esi;  /* offset: 20 */
    uint32_t ebp;  /* offset: 24 */
    uint32_t esp;  /* offset: 28 */
    uint32_t ebx;  /* offset: 32 */
    uint32_t edx;  /* offset: 36 */
    uint32_t ecx;  /* offset: 40 */
    uint32_t eax;  /* offset: 44 */
    uint32_t trapno;  /* offset: 48 */
    uint32_t err;  /* offset: 52 */
    uint32_t eip;  /* offset: 56 */
    uint16_t cs;  /* offset: 60 */
    uint16_t __csh;  /* offset: 62 */
    uint32_t eflags;  /* offset: 64 */
    uint32_t esp_at_signal;  /* offset: 68 */
    int16_t ss;  /* offset: 72 */
    uint16_t __ssh;  /* offset: 74 */
    uint32_t fpstate;  /* offset: 76 */
    uint32_t oldmask;  /* offset: 80 */
    uint32_t cr2;  /* offset: 84 */
} sigcontext;

/* Size: 10 bytes */
typedef struct _libc_fpreg {
    uint64_t significand;  /* offset: 0 */
    uint16_t exponent;  /* offset: 8 */
} libc_fpreg;

/* Size: 112 bytes */
typedef struct _libc_fpstate {
    uint32_t cw;  /* offset: 0 */
    uint32_t sw;  /* offset: 4 */
    uint32_t tag;  /* offset: 8 */
    uint32_t ipoff;  /* offset: 12 */
    uint32_t cssel;  /* offset: 16 */
    uint32_t dataoff;  /* offset: 20 */
    uint32_t datasel;  /* offset: 24 */
    uint32_t status;  /* offset: 108 */
} libc_fpstate;

/* Size: 348 bytes */
typedef struct _ucontext {
    uint32_t uc_flags;  /* offset: 0 */
    uint8_t uc_stack;  /* offset: 8 */
    uint8_t uc_mcontext;  /* offset: 20 */
    uint8_t uc_sigmask;  /* offset: 108 */
    uint8_t __fpregs_mem;  /* offset: 236 */
} ucontext;

/* Size: 56 bytes */
typedef struct _stLogMessage {
    uint32_t lSrcIP;  /* offset: 0 */
    uint32_t lSrcChar;  /* offset: 4 */
    uint32_t lSrcScript;  /* offset: 8 */
    uint32_t lLogID;  /* offset: 12 */
} stLogMessage;

/* Size: 60 bytes */
typedef struct _stLogQueue {
    uint8_t tLogMessage;  /* offset: 0 */
    uint8_t bUsed;  /* offset: 56 */
} stLogQueue;

/* Size: 6000304 bytes */
typedef struct _FWLogClient {
    uint32_t m_thread;  /* offset: 264 */
    uint32_t m_iWritePtr;  /* offset: 6000268 */
    uint32_t m_iReadPtr;  /* offset: 6000272 */
    uint8_t m_log_mutex;  /* offset: 6000276 */
    uint32_t m_iConn;  /* offset: 6000300 */
} FWLogClient;

/* Size: 2 bytes */
typedef struct _OKMsg {
    uint16_t wPortNum;  /* offset: 0 */
} OKMsg;

/* Size: 50 bytes */
typedef struct _WorldServer {
    uint8_t chAddress;  /* offset: 24 */
    uint16_t wNumPlayers;  /* offset: 48 */
} WorldServer;

/* Size: 56 bytes */
typedef struct _StartGameDataNetMsg {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwModelType;  /* offset: 8 */
    uint32_t x;  /* offset: 12 */
    uint32_t y;  /* offset: 16 */
    uint32_t z;  /* offset: 20 */
    uint32_t fFacing;  /* offset: 24 */
    uint32_t fGameTime;  /* offset: 28 */
    uint8_t chAddress;  /* offset: 32 */
} StartGameDataNetMsg;

/* Size: 24 bytes */
typedef struct _EchoNetMsg {
    uint8_t chMesg;  /* offset: 0 */
} EchoNetMsg;

/* Size: 264 bytes */
typedef struct _EndOfZoneMsg {
    uint32_t dwMapID;  /* offset: 0 */
    uint8_t byNumScenes;  /* offset: 260 */
} EndOfZoneMsg;

/* Size: 4 bytes */
typedef struct _TransferZoneMsg {
    uint32_t dwSceneID;  /* offset: 0 */
} TransferZoneMsg;

/* Size: 24 bytes */
typedef struct _ZoneDataMsg {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fFacing;  /* offset: 16 */
    uint32_t fGameTime;  /* offset: 20 */
} ZoneDataMsg;

/* Size: 8 bytes */
typedef struct _QueryIDDataMsg {
    uint8_t byType;  /* offset: 0 */
    uint32_t dwID;  /* offset: 4 */
} QueryIDDataMsg;

/* Size: 4 bytes */
typedef struct _ChangeChatBarMsg {
    uint32_t dwHash;  /* offset: 0 */
} ChangeChatBarMsg;

/* Size: 168 bytes */
typedef struct _ChatMsg {
    uint32_t dwParam;  /* offset: 0 */
    uint16_t wLen;  /* offset: 164 */
    uint8_t byType;  /* offset: 166 */
} ChatMsg;

/* Size: 164 bytes */
typedef struct _LeaveMsg {
    uint32_t dwHash;  /* offset: 0 */
    uint8_t wMesgA;  /* offset: 4 */
} LeaveMsg;

/* Size: 1 bytes */
typedef struct _MOTDEmailRequest {
    uint8_t bySelected;  /* offset: 0 */
} MOTDEmailRequest;

/* Size: 4 bytes */
typedef struct _IDResp1Msg {
    uint32_t dwAddr;  /* offset: 0 */
} IDResp1Msg;

/* Size: 20 bytes */
typedef struct _BroadcastMsg {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint32_t dwTypeParam1;  /* offset: 16 */
} BroadcastMsg;

/* Size: 40 bytes */
typedef struct _IDResp10Msg {
    uint8_t dwAddr;  /* offset: 0 */
} IDResp10Msg;

/* Size: 4 bytes */
typedef struct _DataMsg {
    uint16_t wEventID;  /* offset: 0 */
    uint16_t wSize;  /* offset: 2 */
} DataMsg;

/* Size: 4 bytes */
typedef struct _PartyUpdateMsg {
    uint32_t dwPartyID;  /* offset: 0 */
} PartyUpdateMsg;

/* Size: 4 bytes */
typedef struct _DropConnectionMsg {
    uint32_t dwCharID;  /* offset: 0 */
} DropConnectionMsg;

/* Size: 8 bytes */
typedef struct _GameEventsMsg {
    uint8_t byCmd;  /* offset: 0 */
    uint16_t wEventID;  /* offset: 2 */
    uint32_t dwServerID;  /* offset: 4 */
} GameEventsMsg;

/* Size: 20 bytes */
typedef struct _SysServicesMsg {
    uint16_t wEventID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint32_t dwParam3;  /* offset: 12 */
    uint32_t dwServerID;  /* offset: 16 */
} SysServicesMsg;

/* Size: 4 bytes */
typedef struct _ScenePopMsg {
    uint32_t dwSceneID;  /* offset: 0 */
} ScenePopMsg;

/* Size: 2 bytes */
typedef struct _PopMsg {
    uint16_t wPopCount;  /* offset: 0 */
} PopMsg;

/* Size: 1 bytes */
typedef struct _MOTDRequest1Msg {
    uint8_t byID;  /* offset: 0 */
} MOTDRequest1Msg;

/* Size: 2 bytes */
typedef struct _MOTDRequestMsg {
    uint8_t byID;  /* offset: 0 */
    uint8_t byMsgID;  /* offset: 1 */
} MOTDRequestMsg;

/* Size: 21 bytes */
typedef struct _DropUserMsg {
    uint8_t chUsername;  /* offset: 0 */
} DropUserMsg;

/* Size: 4 bytes */
typedef struct _ValidateCreditMsg {
    uint32_t dwID;  /* offset: 0 */
} ValidateCreditMsg;

/* Size: 4 bytes */
typedef struct _CreditRemainingMsg {
    uint32_t dwCredits;  /* offset: 0 */
} CreditRemainingMsg;

/* Size: 8 bytes */
typedef struct _MuteMsg {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t iMutedFlag;  /* offset: 4 */
} MuteMsg;

/* Size: 8 bytes */
typedef struct _FW_DATA_CHAR_STATISTIC {
    uint32_t lValue;  /* offset: 0 */
    uint32_t lValue2;  /* offset: 4 */
} FW_DATA_CHAR_STATISTIC;

/* Size: 10 bytes */
typedef struct _FW_DATA_CHAR_ALLPRIMATTR {
    uint16_t wStr;  /* offset: 0 */
    uint16_t wAgl;  /* offset: 2 */
    uint16_t wCon;  /* offset: 4 */
    uint16_t wMnd;  /* offset: 6 */
    uint16_t wPer;  /* offset: 8 */
} FW_DATA_CHAR_ALLPRIMATTR;

/* Size: 40 bytes */
typedef struct _FW_DATA_CHAR_ALLSECSTAT {
    uint8_t byPrestige;  /* offset: 0 */
    uint8_t byClan;  /* offset: 1 */
    uint8_t byMovement;  /* offset: 2 */
    uint32_t lFire;  /* offset: 4 */
    uint32_t lCold;  /* offset: 8 */
    uint32_t lPoison;  /* offset: 12 */
    uint32_t lLightning;  /* offset: 16 */
    uint32_t lPhysical;  /* offset: 20 */
    uint16_t wLevel;  /* offset: 24 */
    uint16_t wAttack;  /* offset: 26 */
    uint16_t wDefense;  /* offset: 28 */
    uint16_t wMinDmg;  /* offset: 30 */
    uint16_t wMaxDmg;  /* offset: 32 */
    uint16_t wWeightAll;  /* offset: 34 */
    uint32_t dwXP;  /* offset: 36 */
} FW_DATA_CHAR_ALLSECSTAT;

/* Size: 4 bytes */
typedef struct _FW_DATA_CHAR_DAMAGE {
    uint16_t wMinDmg;  /* offset: 0 */
    uint16_t wMaxDmg;  /* offset: 2 */
} FW_DATA_CHAR_DAMAGE;

/* Size: 20 bytes */
typedef struct _FW_DATA_CHAR_RESPAWN {
    uint16_t wSceneID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fGameTime;  /* offset: 16 */
} FW_DATA_CHAR_RESPAWN;

/* Size: 2 bytes */
typedef struct _FW_DATA_CHAR_NEW {
    uint8_t bySlot;  /* offset: 0 */
    uint8_t byLanguage;  /* offset: 1 */
} FW_DATA_CHAR_NEW;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_DELETE {
    uint8_t bySlotID;  /* offset: 0 */
} FW_DATA_CHAR_DELETE;

/* Size: 64 bytes */
typedef struct _FW_DATA_CHAR_CREATE {
    uint8_t bySlotID;  /* offset: 0 */
    uint32_t dwModelID;  /* offset: 4 */
    uint8_t byStance;  /* offset: 54 */
    uint8_t byLocation;  /* offset: 55 */
    uint8_t byStrength;  /* offset: 56 */
    uint8_t byConstitution;  /* offset: 57 */
    uint8_t byAgility;  /* offset: 58 */
    uint8_t byMind;  /* offset: 59 */
    uint8_t byPerception;  /* offset: 60 */
    uint8_t byGender;  /* offset: 61 */
    uint8_t byElementalAdv;  /* offset: 62 */
    uint8_t byTemplateID;  /* offset: 63 */
} FW_DATA_CHAR_CREATE;

/* Size: 660 bytes */
typedef struct _FW_DATA_CHAR_NEWDATA {
    uint8_t dwElement;  /* offset: 0 */
    uint8_t dwElementDesc;  /* offset: 20 */
    uint8_t byAttrPoints;  /* offset: 40 */
    uint8_t byStrength;  /* offset: 41 */
    uint8_t byMinStrength;  /* offset: 42 */
    uint8_t byMaxStrength;  /* offset: 43 */
    uint8_t byConstitution;  /* offset: 44 */
    uint8_t byMinConstitution;  /* offset: 45 */
    uint8_t byMaxConstitution;  /* offset: 46 */
    uint8_t byAgility;  /* offset: 47 */
    uint8_t byMinAgility;  /* offset: 48 */
    uint8_t byMaxAgility;  /* offset: 49 */
    uint8_t byMind;  /* offset: 50 */
    uint8_t byMinMind;  /* offset: 51 */
    uint8_t byMaxMind;  /* offset: 52 */
    uint8_t byPerception;  /* offset: 53 */
    uint8_t byMinPerception;  /* offset: 54 */
    uint8_t byMaxPerception;  /* offset: 55 */
    uint8_t dwTemplate;  /* offset: 56 */
    uint8_t dwTemplateDesc;  /* offset: 96 */
    uint8_t dwStance;  /* offset: 136 */
    uint8_t dwStanceDesc;  /* offset: 176 */
    uint8_t dwStanceID;  /* offset: 216 */
    uint8_t dwWeaponID;  /* offset: 256 */
    uint8_t bySkillPoints;  /* offset: 296 */
    uint8_t dwSkill;  /* offset: 300 */
    uint8_t dwSkillDesc;  /* offset: 380 */
    uint8_t dwLocation;  /* offset: 460 */
    uint8_t dwLocationDesc;  /* offset: 540 */
    uint8_t wSkillID;  /* offset: 620 */
} FW_DATA_CHAR_NEWDATA;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_REQTEMPLATE {
    uint8_t byTemplateID;  /* offset: 0 */
} FW_DATA_CHAR_REQTEMPLATE;

/* Size: 20 bytes */
typedef struct _FW_DATA_CHAR_TEMPLATEDATA {
    uint32_t dwModelID;  /* offset: 0 */
    uint8_t byStrength;  /* offset: 4 */
    uint8_t byConstitution;  /* offset: 5 */
    uint8_t byAgility;  /* offset: 6 */
    uint8_t byMind;  /* offset: 7 */
    uint8_t byPerception;  /* offset: 8 */
    uint8_t bySkills;  /* offset: 9 */
    uint8_t byStance;  /* offset: 15 */
    uint8_t byElementalAdv;  /* offset: 16 */
} FW_DATA_CHAR_TEMPLATEDATA;

/* Size: 2 bytes */
typedef struct _FW_DATA_CHAR_STATUS {
    uint16_t dwIndex;  /* offset: 0 */
} FW_DATA_CHAR_STATUS;

/* Size: 296 bytes */
typedef struct _FW_DATA_CHAR_LIST {
    uint8_t byCount;  /* offset: 0 */
    uint8_t byMaxChars;  /* offset: 1 */
    uint8_t wLevelA;  /* offset: 122 */
    uint8_t wClanString;  /* offset: 128 */
    uint8_t wLocationString;  /* offset: 134 */
    uint8_t dwStanceA;  /* offset: 272 */
    uint8_t dwWeaponA;  /* offset: 284 */
} FW_DATA_CHAR_LIST;

/* Size: 4 bytes */
typedef struct _FW_DATA_CHAR_ABILITYUP {
    uint32_t dwAbilityID;  /* offset: 0 */
} FW_DATA_CHAR_ABILITYUP;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_TEMPLATE {
    uint8_t byOn;  /* offset: 0 */
} FW_DATA_CHAR_TEMPLATE;

/* Size: 8 bytes */
typedef struct _FW_DATA_CHAR_FLAG {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwFlags;  /* offset: 4 */
} FW_DATA_CHAR_FLAG;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_LEVEL_GAUGE {
    uint8_t byPercent;  /* offset: 0 */
} FW_DATA_CHAR_LEVEL_GAUGE;

/* Size: 8 bytes */
typedef struct _FW_DATA_CHAR_MODEL {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwModelID;  /* offset: 4 */
} FW_DATA_CHAR_MODEL;

/* Size: 32 bytes */
typedef struct _FW_DATA_COMMS_PLAYING {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwModelType;  /* offset: 8 */
    uint32_t x;  /* offset: 12 */
    uint32_t y;  /* offset: 16 */
    uint32_t z;  /* offset: 20 */
    uint32_t fFacing;  /* offset: 24 */
    uint32_t fGameTime;  /* offset: 28 */
} FW_DATA_COMMS_PLAYING;

/* Size: 264 bytes */
typedef struct _FW_DATA_COMMS_END_OF_ZONE {
    uint32_t dwMapID;  /* offset: 0 */
    uint8_t dwSceneID;  /* offset: 4 */
    uint8_t byNumOfScenes;  /* offset: 260 */
} FW_DATA_COMMS_END_OF_ZONE;

/* Size: 24 bytes */
typedef struct _FW_DATA_COMMS_ZONE_DATA {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fFacing;  /* offset: 16 */
    uint32_t fGameTime;  /* offset: 20 */
} FW_DATA_COMMS_ZONE_DATA;

/* Size: 104 bytes */
typedef struct _FW_DATA_COMMS_MOTD_REPLY {
    uint8_t byRemaining;  /* offset: 20 */
    uint8_t dwParam1;  /* offset: 24 */
    uint8_t dwParam2;  /* offset: 64 */
} FW_DATA_COMMS_MOTD_REPLY;

/* Size: 202 bytes */
typedef struct _FW_DATA_COMMS_EMAIL_REPLY {
    uint8_t wNameA;  /* offset: 0 */
    uint8_t wMesgA;  /* offset: 40 */
    uint8_t byRemaining;  /* offset: 200 */
} FW_DATA_COMMS_EMAIL_REPLY;

/* Size: 1 bytes */
typedef struct __FW_DATA_COMMS_LOADING_PROGRESS {
    uint8_t byProgress;  /* offset: 0 */
} _FW_DATA_COMMS_LOADING_PROGRESS;

/* Size: 1 bytes */
typedef struct _FW_DATA_COMMS_MOTD_REQUEST_1 {
    uint8_t byID;  /* offset: 0 */
} FW_DATA_COMMS_MOTD_REQUEST_1;

/* Size: 12 bytes */
typedef struct _FW_DATA_COMMS_MOTD_VER {
    uint32_t dwVersion;  /* offset: 0 */
    uint8_t byNumMsgs;  /* offset: 4 */
    uint32_t dwCharIDCacheVersion;  /* offset: 8 */
} FW_DATA_COMMS_MOTD_VER;

/* Size: 2 bytes */
typedef struct _FW_DATA_COMMS_MOTD_REQUEST_MSG {
    uint8_t byID;  /* offset: 0 */
    uint8_t byMsgID;  /* offset: 1 */
} FW_DATA_COMMS_MOTD_REQUEST_MSG;

/* Size: 502 bytes */
typedef struct _FW_DATA_COMMS_MOTD_MSG {
    uint8_t byMsgID;  /* offset: 0 */
} FW_DATA_COMMS_MOTD_MSG;

/* Size: 24 bytes */
typedef struct _FW_DATA_MOVE_VECPOS {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwTime;  /* offset: 4 */
    uint32_t x;  /* offset: 8 */
    uint32_t y;  /* offset: 12 */
    uint32_t z;  /* offset: 16 */
    uint8_t byDir;  /* offset: 20 */
    uint8_t bySpeed;  /* offset: 21 */
    uint8_t byActionFlag;  /* offset: 22 */
} FW_DATA_MOVE_VECPOS;

/* Size: 28 bytes */
typedef struct _FW_DATA_MOVE_JUMP {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwTime;  /* offset: 4 */
    uint32_t x;  /* offset: 8 */
    uint32_t y;  /* offset: 12 */
    uint32_t z;  /* offset: 16 */
    uint32_t fDir;  /* offset: 20 */
    uint8_t bySpeed;  /* offset: 24 */
    uint8_t byJumpType;  /* offset: 25 */
} FW_DATA_MOVE_JUMP;

/* Size: 16 bytes */
typedef struct _FW_DATA_MOVE_ANIMATION {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint32_t dwTime;  /* offset: 8 */
    uint16_t wAnimID;  /* offset: 12 */
} FW_DATA_MOVE_ANIMATION;

/* Size: 1 bytes */
typedef struct _FW_DATA_MOVE_SPEED {
    uint8_t bySpeed;  /* offset: 0 */
} FW_DATA_MOVE_SPEED;

/* Size: 8 bytes */
typedef struct _FW_DATA_MOVE_ZONEOUT {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwMapID;  /* offset: 4 */
} FW_DATA_MOVE_ZONEOUT;

/* Size: 20 bytes */
typedef struct _FW_DATA_MOVE_MARK {
    uint32_t dwTime;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint8_t byDir;  /* offset: 16 */
    uint8_t bySpeed;  /* offset: 17 */
} FW_DATA_MOVE_MARK;

/* Size: 16 bytes */
typedef struct _FW_DATA_MOVE_OFFSET {
    uint32_t dwID;  /* offset: 0 */
    uint16_t x;  /* offset: 4 */
    uint16_t y;  /* offset: 6 */
    uint16_t z;  /* offset: 8 */
    uint8_t byDir;  /* offset: 10 */
    uint8_t bySpeed;  /* offset: 11 */
    uint8_t byActionFlag;  /* offset: 12 */
} FW_DATA_MOVE_OFFSET;

/* Size: 16 bytes */
typedef struct _FW_DATA_MOVE_RELIC {
    uint32_t dwID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
} FW_DATA_MOVE_RELIC;

/* Size: 1 bytes */
typedef struct _FW_DATA_MOVE_SPRINT {
    uint8_t byMoveRate;  /* offset: 0 */
} FW_DATA_MOVE_SPRINT;

/* Size: 20 bytes */
typedef struct _FW_DATA_MOVE_ANIMQUEUE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint32_t fAnimFactor;  /* offset: 8 */
    uint8_t wAnimA;  /* offset: 12 */
    uint8_t byCount;  /* offset: 18 */
} FW_DATA_MOVE_ANIMQUEUE;

/* Size: 1 bytes */
typedef struct _FW_DATA_UI_GENERIC {
    uint8_t byOpen;  /* offset: 0 */
} FW_DATA_UI_GENERIC;

/* Size: 3 bytes */
typedef struct _FW_DATA_UI_INVENTORY {
    uint8_t byOpen;  /* offset: 0 */
    uint8_t byGroup;  /* offset: 1 */
    uint8_t byGetAll;  /* offset: 2 */
} FW_DATA_UI_INVENTORY;

/* Size: 1 bytes */
typedef struct _FW_DATA_UI_STASH {
    uint8_t byTab;  /* offset: 0 */
} FW_DATA_UI_STASH;

/* Size: 2 bytes */
typedef struct _FW_DATA_UI_ICON {
    uint16_t wEffectID;  /* offset: 0 */
} FW_DATA_UI_ICON;

/* Size: 180 bytes */
typedef struct _FW_DATA_UI_CHAT {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 168 */
    uint32_t dwParam2;  /* offset: 172 */
    uint32_t dwParam3;  /* offset: 176 */
} FW_DATA_UI_CHAT;

/* Size: 168 bytes */
typedef struct _FW_DATA_UI_LEAVE_MESSAGE {
    uint32_t dwHash;  /* offset: 0 */
    uint8_t wMesg;  /* offset: 4 */
    uint16_t wLen;  /* offset: 164 */
} FW_DATA_UI_LEAVE_MESSAGE;

/* Size: 8 bytes */
typedef struct _FW_DATA_UI_WINDOW {
    uint8_t byCmd;  /* offset: 0 */
    uint16_t wWindowID;  /* offset: 2 */
    uint32_t dwParam1;  /* offset: 4 */
} FW_DATA_UI_WINDOW;

/* Size: 4 bytes */
typedef struct _FW_DATA_UI_OPTIONS {
    uint32_t dwOptions;  /* offset: 0 */
} FW_DATA_UI_OPTIONS;

/* Size: 1 bytes */
typedef struct _FW_DATA_UI_TUTORIALTRADE_WINDOW {
    uint8_t byFlag;  /* offset: 0 */
} FW_DATA_UI_TUTORIALTRADE_WINDOW;

/* Size: 8 bytes */
typedef struct _FW_DATA_UI_TUTORIALTRADE_SLOT {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t bySlot;  /* offset: 4 */
    uint8_t byQuantity;  /* offset: 5 */
} FW_DATA_UI_TUTORIALTRADE_SLOT;

/* Size: 8 bytes */
typedef struct _FW_DATA_UI_TUTORIALTRADE_GOLD {
    uint32_t dwGold;  /* offset: 0 */
    uint8_t bySlot;  /* offset: 4 */
} FW_DATA_UI_TUTORIALTRADE_GOLD;

/* Size: 2 bytes */
typedef struct _FW_DATA_UI_TUTORIALTRADE_CHECK {
    uint8_t byFlag;  /* offset: 0 */
    uint8_t bySlot;  /* offset: 1 */
} FW_DATA_UI_TUTORIALTRADE_CHECK;

/* Size: 8 bytes */
typedef struct _FW_DATA_UI_CAMERA_COMMAND {
    uint8_t byCmd;  /* offset: 0 */
    uint32_t fParam1;  /* offset: 4 */
} FW_DATA_UI_CAMERA_COMMAND;

/* Size: 4 bytes */
typedef struct _FW_DATA_UI_TUTORIALBUY_ITEM {
    uint32_t dwItemID;  /* offset: 0 */
} FW_DATA_UI_TUTORIALBUY_ITEM;

/* Size: 48 bytes */
typedef struct _FW_DATA_UI_TUTORIALBUY_DATA {
    uint8_t dwItemA;  /* offset: 0 */
    uint8_t dwPriceA;  /* offset: 24 */
} FW_DATA_UI_TUTORIALBUY_DATA;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_AUCTION_REQ {
    uint32_t dwSetID;  /* offset: 0 */
} FW_DATA_ITEM_AUCTION_REQ;

/* Size: 168 bytes */
typedef struct _FW_DATA_ITEM_AUCTION_LIST {
    uint32_t dwSetID;  /* offset: 0 */
    uint8_t byCount;  /* offset: 4 */
    uint8_t byClear;  /* offset: 5 */
    uint64_t dwItemID;  /* offset: 96 */
    uint64_t dwIdx;  /* offset: 144 */
    uint32_t wHardnessString;  /* offset: 156 */
    uint64_t dwHardnessStringParam;  /* offset: 160 */
} FW_DATA_ITEM_AUCTION_LIST;

/* Size: 16 bytes */
typedef struct _FW_DATA_ITEM_AUCTION_BID {
    uint32_t dwSetID;  /* offset: 0 */
    uint32_t dwIndex;  /* offset: 4 */
    uint32_t dwItemID;  /* offset: 8 */
    uint32_t dwGold;  /* offset: 12 */
} FW_DATA_ITEM_AUCTION_BID;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_AUCTION_AUCTION {
    uint32_t dwSetID;  /* offset: 0 */
    uint32_t dwGold;  /* offset: 4 */
} FW_DATA_ITEM_AUCTION_AUCTION;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_AUCTION_COLLECT {
    uint32_t dwSetID;  /* offset: 0 */
} FW_DATA_ITEM_AUCTION_COLLECT;

/* Size: 24 bytes */
typedef struct _FW_DATA_ITEM_MANIPULATE {
    uint32_t dwEntityID;  /* offset: 0 */
    uint32_t dwFromID;  /* offset: 4 */
    uint32_t dwItemID;  /* offset: 8 */
    uint16_t wQuantity;  /* offset: 12 */
    uint8_t byLocationTo;  /* offset: 14 */
    uint8_t byLocationFrom;  /* offset: 15 */
    uint8_t byIdentified;  /* offset: 16 */
    uint16_t wReserved;  /* offset: 18 */
    uint8_t byReserved;  /* offset: 20 */
} FW_DATA_ITEM_MANIPULATE;

/* Size: 12 bytes */
typedef struct _FW_DATA_ITEM_ACTIVATE {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint8_t byLocation;  /* offset: 8 */
} FW_DATA_ITEM_ACTIVATE;

/* Size: 16 bytes */
typedef struct _FW_DATA_ITEM_GOLD {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwFromID;  /* offset: 4 */
    uint32_t dwQuantity;  /* offset: 8 */
    uint8_t byLocationTo;  /* offset: 12 */
    uint8_t byLocationFrom;  /* offset: 13 */
} FW_DATA_ITEM_GOLD;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_TRADE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
} FW_DATA_ITEM_TRADE;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_TRADEAGREE {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byAgree;  /* offset: 4 */
} FW_DATA_ITEM_TRADEAGREE;

/* Size: 40 bytes */
typedef struct _FW_DATA_ITEM_BUYLIST {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint8_t dwItemA;  /* offset: 8 */
    uint8_t byItemQuantityA;  /* offset: 32 */
    uint8_t byCount;  /* offset: 38 */
    uint8_t byReserved;  /* offset: 39 */
} FW_DATA_ITEM_BUYLIST;

/* Size: 64 bytes */
typedef struct _FW_DATA_ITEM_SELLLIST {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint8_t dwItemA;  /* offset: 8 */
    uint8_t dwItemLocationA;  /* offset: 32 */
    uint8_t byItemQuantityA;  /* offset: 56 */
    uint8_t byCount;  /* offset: 62 */
    uint8_t byReserved;  /* offset: 63 */
} FW_DATA_ITEM_SELLLIST;

/* Size: 56 bytes */
typedef struct _FW_DATA_ITEM_CRAFTLIST {
    uint8_t dwItemA;  /* offset: 0 */
    uint8_t dwItemLocationA;  /* offset: 24 */
    uint8_t byItemQuantityA;  /* offset: 48 */
    uint8_t byCount;  /* offset: 54 */
    uint8_t byReserved;  /* offset: 55 */
} FW_DATA_ITEM_CRAFTLIST;

/* Size: 84 bytes */
typedef struct _FW_DATA_ITEM_IDENTIFYLIST {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint8_t dwItemA;  /* offset: 8 */
    uint8_t dwItemLocationA;  /* offset: 32 */
    uint8_t byItemQuantityA;  /* offset: 56 */
    uint8_t byCount;  /* offset: 80 */
    uint8_t byReserved;  /* offset: 81 */
} FW_DATA_ITEM_IDENTIFYLIST;

/* Size: 456 bytes */
typedef struct _FW_DATA_ITEM_MERCHANTINV {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t dwPriceA;  /* offset: 204 */
} FW_DATA_ITEM_MERCHANTINV;

/* Size: 12 bytes */
typedef struct _FW_DATA_ITEM_TAGITEM {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint8_t byCount;  /* offset: 8 */
    uint8_t byLocation;  /* offset: 9 */
    uint16_t wReserved;  /* offset: 10 */
} FW_DATA_ITEM_TAGITEM;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_TAGGOLD {
    uint32_t dwTargetID;  /* offset: 0 */
    uint32_t dwGold;  /* offset: 4 */
} FW_DATA_ITEM_TAGGOLD;

/* Size: 88 bytes */
typedef struct _FW_DATA_ITEM_TAGLIST {
    uint32_t dwCharID1;  /* offset: 0 */
    uint32_t dwCharID2;  /* offset: 4 */
    uint32_t dwGold1;  /* offset: 8 */
    uint32_t dwGold2;  /* offset: 12 */
    uint8_t dwItem1A;  /* offset: 16 */
    uint8_t dwItem2A;  /* offset: 40 */
    uint8_t byQuantity1A;  /* offset: 64 */
    uint8_t byQuantity2A;  /* offset: 70 */
    uint8_t byLocation1A;  /* offset: 76 */
    uint8_t byLocation2A;  /* offset: 82 */
} FW_DATA_ITEM_TAGLIST;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_MOUSESLOT {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t byQuantity;  /* offset: 4 */
    uint8_t byIdentified;  /* offset: 5 */
} FW_DATA_ITEM_MOUSESLOT;

/* Size: 108 bytes */
typedef struct _FW_DATA_ITEM_CONTAINER {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byQuantity;  /* offset: 68 */
    uint8_t byIdentified;  /* offset: 84 */
    uint8_t byCloseFlag;  /* offset: 100 */
    uint8_t byTab;  /* offset: 101 */
    uint32_t dwGold;  /* offset: 104 */
} FW_DATA_ITEM_CONTAINER;

/* Size: 36 bytes */
typedef struct _FW_DATA_ITEM_SIDEPOCKET {
    uint8_t dwItemID;  /* offset: 0 */
    uint8_t byQuantity;  /* offset: 24 */
    uint8_t byIdentified;  /* offset: 30 */
} FW_DATA_ITEM_SIDEPOCKET;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_GENERATE_TREASURE {
    uint32_t dwObjID;  /* offset: 0 */
    uint16_t wTreasureID;  /* offset: 4 */
    uint8_t byFlag;  /* offset: 6 */
} FW_DATA_ITEM_GENERATE_TREASURE;

/* Size: 12 bytes */
typedef struct _FW_DATA_ITEM_BUY {
    uint32_t dwMerchantID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint8_t byReserved;  /* offset: 8 */
} FW_DATA_ITEM_BUY;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_SELL {
    uint32_t dwMerchantID;  /* offset: 0 */
} FW_DATA_ITEM_SELL;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_APPRAISE {
    uint32_t dwMerchantID;  /* offset: 0 */
} FW_DATA_ITEM_APPRAISE;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_IDENTIFY {
    uint32_t dwMerchantID;  /* offset: 0 */
} FW_DATA_ITEM_IDENTIFY;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_CRAFTING {
    uint32_t dwItemID;  /* offset: 0 */
} FW_DATA_ITEM_CRAFTING;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_EVALUATE {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t byLocation;  /* offset: 4 */
} FW_DATA_ITEM_EVALUATE;

/* Size: 48 bytes */
typedef struct _FW_DATA_ITEM_EVALUATED {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t dwComponentIDA;  /* offset: 4 */
    uint16_t wDurabilityString;  /* offset: 24 */
    uint16_t wHardnessString;  /* offset: 26 */
    uint32_t dwDurabilityStringParam;  /* offset: 28 */
    uint32_t dwHardnessStringParam;  /* offset: 32 */
    uint8_t byComponentCount;  /* offset: 36 */
    uint8_t byIdentified;  /* offset: 37 */
    uint32_t dwSetID;  /* offset: 40 */
    uint8_t byLevel;  /* offset: 44 */
    uint8_t byMaxLevel;  /* offset: 45 */
    uint16_t wDecayString;  /* offset: 46 */
} FW_DATA_ITEM_EVALUATED;

/* Size: 48 bytes */
typedef struct _FW_DATA_ITEM_TRADEDATA {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t dwItemA;  /* offset: 4 */
    uint32_t dwTradeGold;  /* offset: 28 */
    uint8_t byQuantityA;  /* offset: 32 */
    uint8_t byIdentifiedA;  /* offset: 38 */
    uint8_t byTradeAgree;  /* offset: 44 */
} FW_DATA_ITEM_TRADEDATA;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_CURRENT_WEIGHT {
    uint16_t wCurWeight;  /* offset: 0 */
    uint16_t wMaxWeight;  /* offset: 2 */
} FW_DATA_ITEM_CURRENT_WEIGHT;

/* Size: 8 bytes */
typedef struct _FW_DATA_ITEM_SETITEM {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t byQuantity;  /* offset: 4 */
    uint8_t byLocation;  /* offset: 5 */
    uint8_t byFlags;  /* offset: 6 */
} FW_DATA_ITEM_SETITEM;

/* Size: 16 bytes */
typedef struct _FW_DATA_ITEM_SETITEM2 {
    uint64_t dwItemIDA;  /* offset: 0 */
    uint16_t byLocationA;  /* offset: 10 */
    uint16_t byFlagsA;  /* offset: 12 */
} FW_DATA_ITEM_SETITEM2;

/* Size: 2 bytes */
typedef struct _FW_DATA_ITEM_SLOTCLICKED {
    uint8_t byLocation;  /* offset: 0 */
    uint8_t byFlags;  /* offset: 1 */
} FW_DATA_ITEM_SLOTCLICKED;

/* Size: 4 bytes */
typedef struct _FW_DATA_ITEM_IDENTIFYPRICE {
    uint32_t dwGold;  /* offset: 0 */
} FW_DATA_ITEM_IDENTIFYPRICE;

/* Size: 12 bytes */
typedef struct _FW_DATA_ITEM_BREAK {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint32_t bySlotNum;  /* offset: 8 */
} FW_DATA_ITEM_BREAK;

/* Size: 2 bytes */
typedef struct _FW_DATA_ITEM_BREAKICON {
    uint8_t byItemType;  /* offset: 0 */
    uint8_t byOn;  /* offset: 1 */
} FW_DATA_ITEM_BREAKICON;

/* Size: 464 bytes */
typedef struct _FW_DATA_ITEM_CLANUPGRADEINV {
    uint32_t dwType;  /* offset: 456 */
    uint32_t dwLocID;  /* offset: 460 */
} FW_DATA_ITEM_CLANUPGRADEINV;

/* Size: 12 bytes */
typedef struct _FW_DATA_ITEM_BUYCLANUPGRADE {
    uint32_t dwType;  /* offset: 0 */
    uint32_t dwLocID;  /* offset: 4 */
    uint32_t dwUpgradeID;  /* offset: 8 */
} FW_DATA_ITEM_BUYCLANUPGRADE;

/* Size: 20 bytes */
typedef struct _FW_DATA_GEN_EFFECT {
    uint32_t dwEffectID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint32_t x;  /* offset: 8 */
    uint32_t y;  /* offset: 12 */
    uint32_t z;  /* offset: 16 */
} FW_DATA_GEN_EFFECT;

/* Size: 4 bytes */
typedef struct _FW_DATA_GEN_EFFECTID {
    uint32_t dwEffectID;  /* offset: 0 */
} FW_DATA_GEN_EFFECTID;

/* Size: 16 bytes */
typedef struct _FW_DATA_GEN_STRING {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
} FW_DATA_GEN_STRING;

/* Size: 144 bytes */
typedef struct _FW_DATA_GEN_NPCMESSAGE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwLabel;  /* offset: 4 */
    uint8_t wMsgStrID;  /* offset: 8 */
    uint8_t dwVar1;  /* offset: 28 */
    uint8_t dwVar2;  /* offset: 68 */
    uint8_t wOptID;  /* offset: 126 */
} FW_DATA_GEN_NPCMESSAGE;

/* Size: 216 bytes */
typedef struct _FW_DATA_GEN_NPCMESSAGE_1 {
    uint8_t dwOptVar2;  /* offset: 180 */
} FW_DATA_GEN_NPCMESSAGE_1;

/* Size: 1 bytes */
typedef struct _FW_DATA_GEN_WEATHER {
    uint8_t byWeatherID;  /* offset: 0 */
} FW_DATA_GEN_WEATHER;

/* Size: 8 bytes */
typedef struct _FW_DATA_GEN_GAMETIME {
    uint32_t fGameTime;  /* offset: 0 */
    uint32_t fTimeSpeed;  /* offset: 4 */
} FW_DATA_GEN_GAMETIME;

/* Size: 1 bytes */
typedef struct _FW_DATA_GEN_ACTION {
    uint8_t byAction;  /* offset: 0 */
} FW_DATA_GEN_ACTION;

/* Size: 4 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR0 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 2 */
} FW_DATA_GEN_STRING_VAR0;

/* Size: 12 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR1 {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam;  /* offset: 4 */
    uint8_t byType;  /* offset: 8 */
} FW_DATA_GEN_STRING_VAR1;

/* Size: 16 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR2 {
    uint16_t wStringID;  /* offset: 0 */
    uint64_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 12 */
} FW_DATA_GEN_STRING_VAR2;

/* Size: 20 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR3 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 16 */
} FW_DATA_GEN_STRING_VAR3;

/* Size: 24 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR4 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 20 */
} FW_DATA_GEN_STRING_VAR4;

/* Size: 28 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR5 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 24 */
} FW_DATA_GEN_STRING_VAR5;

/* Size: 32 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR6 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 28 */
} FW_DATA_GEN_STRING_VAR6;

/* Size: 36 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR7 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 32 */
} FW_DATA_GEN_STRING_VAR7;

/* Size: 40 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR8 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 36 */
} FW_DATA_GEN_STRING_VAR8;

/* Size: 44 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR9 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 40 */
} FW_DATA_GEN_STRING_VAR9;

/* Size: 48 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR10 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 44 */
} FW_DATA_GEN_STRING_VAR10;

/* Size: 52 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR11 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 48 */
} FW_DATA_GEN_STRING_VAR11;

/* Size: 56 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR12 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 52 */
} FW_DATA_GEN_STRING_VAR12;

/* Size: 60 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR13 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 56 */
} FW_DATA_GEN_STRING_VAR13;

/* Size: 64 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR14 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 60 */
} FW_DATA_GEN_STRING_VAR14;

/* Size: 68 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR15 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 64 */
} FW_DATA_GEN_STRING_VAR15;

/* Size: 72 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR16 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 68 */
} FW_DATA_GEN_STRING_VAR16;

/* Size: 8 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI3 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 6 */
} FW_DATA_GEN_STRINGS_MULTI3;

/* Size: 10 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI4 {
    uint64_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 8 */
} FW_DATA_GEN_STRINGS_MULTI4;

/* Size: 12 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI5 {
    uint8_t byType;  /* offset: 10 */
} FW_DATA_GEN_STRINGS_MULTI5;

/* Size: 14 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI6 {
    uint8_t byType;  /* offset: 12 */
} FW_DATA_GEN_STRINGS_MULTI6;

/* Size: 16 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI7 {
    uint8_t byType;  /* offset: 14 */
} FW_DATA_GEN_STRINGS_MULTI7;

/* Size: 18 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI8 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 16 */
} FW_DATA_GEN_STRINGS_MULTI8;

/* Size: 20 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI9 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 18 */
} FW_DATA_GEN_STRINGS_MULTI9;

/* Size: 22 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI10 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 20 */
} FW_DATA_GEN_STRINGS_MULTI10;

/* Size: 56 bytes */
typedef struct _FW_DATA_GEN_BUFFERSTRING {
    uint8_t wBufferA;  /* offset: 0 */
    uint16_t wStringID;  /* offset: 40 */
    uint32_t dwParam1;  /* offset: 44 */
    uint32_t dwParam2;  /* offset: 48 */
    uint8_t byType;  /* offset: 52 */
} FW_DATA_GEN_BUFFERSTRING;

/* Size: 12 bytes */
typedef struct _FW_DATA_GEN_EMOTE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint16_t wEmote;  /* offset: 8 */
} FW_DATA_GEN_EMOTE;

/* Size: 8 bytes */
typedef struct _FW_DATA_GEN_CONSTEFFECTS {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwEffects;  /* offset: 4 */
} FW_DATA_GEN_CONSTEFFECTS;

/* Size: 4 bytes */
typedef struct _FW_DATA_SKILL_ACTIVATE {
    uint32_t dwTargetID;  /* offset: 0 */
} FW_DATA_SKILL_ACTIVATE;

/* Size: 8 bytes */
typedef struct _FW_DATA_SKILL_RANK {
    uint32_t dwPlayerID;  /* offset: 0 */
    uint8_t bySkill;  /* offset: 4 */
    uint8_t byRank;  /* offset: 5 */
} FW_DATA_SKILL_RANK;

/* Size: 36 bytes */
typedef struct _FW_DATA_SKILL_ITEMCRAFT {
    uint32_t dwItemID;  /* offset: 0 */
    uint8_t dwComponentsA;  /* offset: 4 */
    uint16_t wCurSkillRank;  /* offset: 28 */
    uint16_t wReqSkillRank;  /* offset: 30 */
    uint8_t byMaxComponents;  /* offset: 32 */
} FW_DATA_SKILL_ITEMCRAFT;

/* Size: 40 bytes */
typedef struct _FW_DATA_SKILL_WEAPONCRAFT {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwWeaponID;  /* offset: 4 */
    uint8_t dwComponentsA;  /* offset: 8 */
    uint16_t wCurSkillRank;  /* offset: 32 */
    uint16_t wReqSkillRank;  /* offset: 34 */
    uint8_t byMaxComponents;  /* offset: 36 */
} FW_DATA_SKILL_WEAPONCRAFT;

/* Size: 4 bytes */
typedef struct _FW_DATA_SKILL_RESUSCITATE {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_SKILL_RESUSCITATE;

/* Size: 1 bytes */
typedef struct _FW_DATA_SKILL_REPAIRITEMS {
    uint8_t bySlotID;  /* offset: 0 */
} FW_DATA_SKILL_REPAIRITEMS;

/* Size: 16 bytes */
typedef struct _FW_DATA_SKILL_GUARDOFFER {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wLevel;  /* offset: 4 */
    uint16_t wRank;  /* offset: 6 */
    uint32_t dwOldCharID;  /* offset: 8 */
    uint16_t wOldLevel;  /* offset: 12 */
    uint16_t wOldRank;  /* offset: 14 */
} FW_DATA_SKILL_GUARDOFFER;

/* Size: 8 bytes */
typedef struct _FW_DATA_SKILL_GUARDRANGE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwRange;  /* offset: 4 */
} FW_DATA_SKILL_GUARDRANGE;

/* Size: 8 bytes */
typedef struct _FW_DATA_SKILL_GUARDACCEPTREJECT {
    uint32_t dwGuardID;  /* offset: 0 */
    uint32_t dwGuardedID;  /* offset: 4 */
} FW_DATA_SKILL_GUARDACCEPTREJECT;

/* Size: 364 bytes */
typedef struct _FW_DATA_RELATION_CLANACTIVITY_LOG {
    uint32_t dwClanID;  /* offset: 0 */
    uint8_t dwTime;  /* offset: 4 */
    uint8_t wStringID;  /* offset: 84 */
    uint8_t dwData1;  /* offset: 124 */
    uint8_t dwData2;  /* offset: 204 */
    uint8_t dwData3;  /* offset: 284 */
} FW_DATA_RELATION_CLANACTIVITY_LOG;

/* Size: 344 bytes */
typedef struct _FW_DATA_RELATION_PRESTIGE_LOG {
    uint32_t dwClanID;  /* offset: 0 */
    uint8_t dwEntityID;  /* offset: 4 */
    uint8_t wReason;  /* offset: 84 */
    uint8_t dwTime;  /* offset: 164 */
    uint8_t dwData;  /* offset: 244 */
} FW_DATA_RELATION_PRESTIGE_LOG;

/* Size: 84 bytes */
typedef struct _FW_DATA_RELATION_HALL_TOPPK {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t dwRedPointsA;  /* offset: 40 */
    uint8_t byCount;  /* offset: 80 */
} FW_DATA_RELATION_HALL_TOPPK;

/* Size: 84 bytes */
typedef struct _FW_DATA_RELATION_WARDECLARE {
    uint8_t dwID;  /* offset: 0 */
    uint8_t byData;  /* offset: 80 */
    uint8_t byCount;  /* offset: 81 */
} FW_DATA_RELATION_WARDECLARE;

/* Size: 348 bytes */
typedef struct _FW_DATA_RELATION_WARLIST {
    uint8_t dwWarEventID;  /* offset: 0 */
    uint8_t dwAttID;  /* offset: 80 */
    uint8_t dwDefID;  /* offset: 160 */
    uint8_t dwResData;  /* offset: 240 */
    uint8_t byType;  /* offset: 320 */
    uint32_t dwData;  /* offset: 340 */
    uint8_t byCount;  /* offset: 344 */
} FW_DATA_RELATION_WARLIST;

/* Size: 16 bytes */
typedef struct _FW_DATA_RELATION_GENERIC {
    uint32_t dwInviterID;  /* offset: 0 */
    uint32_t dwInviteeID;  /* offset: 4 */
    uint32_t dwRelationID;  /* offset: 8 */
    uint8_t byMsgType;  /* offset: 12 */
} FW_DATA_RELATION_GENERIC;

/* Size: 2 bytes */
typedef struct _FW_DATA_RELATION_CLAN_BOUNTY {
    uint16_t wGold;  /* offset: 0 */
} FW_DATA_RELATION_CLAN_BOUNTY;

/* Size: 4 bytes */
typedef struct _FW_DATA_RELATION_CLAN_GENERIC {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_RELATION_CLAN_GENERIC;

/* Size: 2 bytes */
typedef struct _FW_DATA_RELATION_CLAN_VOTE {
    uint8_t byVoteID;  /* offset: 0 */
    uint8_t byVote;  /* offset: 1 */
} FW_DATA_RELATION_CLAN_VOTE;

/* Size: 476 bytes */
typedef struct _FW_DATA_RELATION_CLAN_MEMBERLIST {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t wRankA;  /* offset: 440 */
    uint8_t byCount;  /* offset: 470 */
    uint16_t wIndex;  /* offset: 472 */
    uint16_t wTotal;  /* offset: 474 */
} FW_DATA_RELATION_CLAN_MEMBERLIST;

/* Size: 484 bytes */
typedef struct _FW_DATA_RELATION_CLAN_MEMBERLIST_INITIAL {
    uint16_t wClanName;  /* offset: 476 */
    uint32_t dwPrestige;  /* offset: 480 */
} FW_DATA_RELATION_CLAN_MEMBERLIST_INITIAL;

/* Size: 140 bytes */
typedef struct _FW_DATA_RELATION_GUILD_LIST {
    uint8_t byCount;  /* offset: 132 */
    uint16_t wIndex;  /* offset: 134 */
    uint16_t wTotal;  /* offset: 136 */
} FW_DATA_RELATION_GUILD_LIST;

/* Size: 160 bytes */
typedef struct _FW_DATA_GUILD_LIST_INITIAL {
    uint16_t wClanName;  /* offset: 140 */
    uint32_t dwPrestige;  /* offset: 144 */
    uint16_t wJobStr;  /* offset: 148 */
    uint32_t dwMyGuildID;  /* offset: 152 */
    uint16_t wMyNameStr;  /* offset: 156 */
} FW_DATA_GUILD_LIST_INITIAL;

/* Size: 76 bytes */
typedef struct _FW_DATA_RELATION_GUILD_MEMBERLIST {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t wRankA;  /* offset: 40 */
    uint8_t byStatus;  /* offset: 60 */
    uint8_t byCount;  /* offset: 70 */
    uint16_t wIndex;  /* offset: 72 */
    uint16_t wTotal;  /* offset: 74 */
} FW_DATA_RELATION_GUILD_MEMBERLIST;

/* Size: 88 bytes */
typedef struct _FW_DATA_RELATION_GUILD_MEMBERLIST_INITIAL {
    uint32_t dwGuildID;  /* offset: 76 */
    uint16_t wNameStr;  /* offset: 80 */
    uint32_t dwPrestige;  /* offset: 84 */
} FW_DATA_RELATION_GUILD_MEMBERLIST_INITIAL;

/* Size: 140 bytes */
typedef struct _FW_DATA_RELATION_GUILD_OFFICERLIST {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t wRankA;  /* offset: 40 */
    uint8_t byStatus;  /* offset: 60 */
    uint8_t wNameStr;  /* offset: 70 */
    uint8_t dwGuildID;  /* offset: 92 */
    uint8_t byCount;  /* offset: 132 */
    uint16_t wIndex;  /* offset: 134 */
    uint16_t wTotal;  /* offset: 136 */
} FW_DATA_RELATION_GUILD_OFFICERLIST;

/* Size: 152 bytes */
typedef struct _FW_DATA_RELATION_GUILD_OFFICERLIST_INITIAL {
    uint32_t dwMyGuildID;  /* offset: 140 */
    uint16_t wMyNameStr;  /* offset: 144 */
    uint32_t dwPrestige;  /* offset: 148 */
} FW_DATA_RELATION_GUILD_OFFICERLIST_INITIAL;

/* Size: 48 bytes */
typedef struct _FW_DATA_RELATION_CLAN_VOTELIST {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wIssueTopicString;  /* offset: 4 */
    uint8_t wCharNameA;  /* offset: 6 */
    uint8_t byIssueID;  /* offset: 46 */
    uint8_t byTotalVotes;  /* offset: 47 */
} FW_DATA_RELATION_CLAN_VOTELIST;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_CLAN_GENERIC_NEW {
    uint8_t byCmdType;  /* offset: 0 */
    uint32_t dwData;  /* offset: 4 */
} FW_DATA_RELATION_CLAN_GENERIC_NEW;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_CLAN_RANK {
    uint8_t byCmdType;  /* offset: 0 */
    uint8_t byRank;  /* offset: 1 */
    uint32_t dwData;  /* offset: 4 */
} FW_DATA_RELATION_CLAN_RANK;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_CLAN_BOUNTY_NEW {
    uint8_t byCmdType;  /* offset: 0 */
    uint16_t wGold;  /* offset: 2 */
    uint32_t dwData;  /* offset: 4 */
} FW_DATA_RELATION_CLAN_BOUNTY_NEW;

/* Size: 448 bytes */
typedef struct _FW_DATA_RELATION_CLAN_BARLIST {
    uint8_t wNameA;  /* offset: 0 */
    uint8_t dwID;  /* offset: 400 */
    uint8_t byCount;  /* offset: 440 */
    uint16_t wIndex;  /* offset: 442 */
    uint16_t wTotal;  /* offset: 444 */
} FW_DATA_RELATION_CLAN_BARLIST;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_BROTHERKICK {
    uint32_t dwID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
} FW_DATA_RELATION_BROTHERKICK;

/* Size: 16 bytes */
typedef struct _FW_DATA_RELATION_CLAN_UPDATE {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwGuildID;  /* offset: 4 */
    uint16_t wClanStrID;  /* offset: 8 */
    uint16_t wJobStrID;  /* offset: 10 */
    uint8_t byFlags;  /* offset: 12 */
} FW_DATA_RELATION_CLAN_UPDATE;

/* Size: 44 bytes */
typedef struct _FW_DATA_RELATION_GUILDNAME {
    uint32_t dwGuildID;  /* offset: 0 */
    uint8_t wNameA;  /* offset: 4 */
} FW_DATA_RELATION_GUILDNAME;

/* Size: 40 bytes */
typedef struct _FW_DATA_RELATION_GUILD_CREATE {
    uint8_t wNameA;  /* offset: 0 */
} FW_DATA_RELATION_GUILD_CREATE;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_TRANSFERHALL {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwHallID;  /* offset: 4 */
} FW_DATA_RELATION_TRANSFERHALL;

/* Size: 12 bytes */
typedef struct _FW_DATA_RELATION_TRANSFEROFFER {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwHallID;  /* offset: 4 */
    uint16_t wNameStr;  /* offset: 8 */
} FW_DATA_RELATION_TRANSFEROFFER;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_TRANSFERACCEPT {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwHallID;  /* offset: 4 */
} FW_DATA_RELATION_TRANSFERACCEPT;

/* Size: 8 bytes */
typedef struct _FW_DATA_RELATION_CLAN_TREASURY {
    uint32_t dwAmount;  /* offset: 0 */
    uint8_t byFlag;  /* offset: 4 */
} FW_DATA_RELATION_CLAN_TREASURY;

/* Size: 12 bytes */
typedef struct _FW_DATA_CLIENTREC_GUILD_INFO {
    uint16_t wClanID;  /* offset: 0 */
    uint32_t dwPrestige;  /* offset: 4 */
    uint32_t dwGuildID;  /* offset: 8 */
} FW_DATA_CLIENTREC_GUILD_INFO;

/* Size: 16 bytes */
typedef struct _FW_DATA_CLIENTREC_WHOIS {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wNameStr;  /* offset: 4 */
    uint32_t dwPKPoints;  /* offset: 8 */
    uint16_t wJob;  /* offset: 12 */
} FW_DATA_CLIENTREC_WHOIS;

/* Size: 372 bytes */
typedef struct _FW_DATA_CLIENTREC_CLAN_INFO {
    uint16_t wClanID;  /* offset: 0 */
    uint32_t dwPrestige;  /* offset: 4 */
    uint32_t dwGold;  /* offset: 8 */
    uint8_t byWarStatus;  /* offset: 12 */
    uint8_t bySecStatus;  /* offset: 32 */
    uint8_t dwStartTime;  /* offset: 52 */
    uint8_t dwTimeToStart;  /* offset: 132 */
    uint8_t dwEndTime;  /* offset: 212 */
    uint8_t dwTimeToEnd;  /* offset: 292 */
} FW_DATA_CLIENTREC_CLAN_INFO;

/* Size: 148 bytes */
typedef struct _FW_DATA_CLIENTREC_WAR_EVENTS {
    uint8_t byNumEvents;  /* offset: 0 */
    uint8_t dwAID;  /* offset: 4 */
    uint8_t dwDID;  /* offset: 44 */
    uint8_t dwTime;  /* offset: 84 */
    uint8_t byType;  /* offset: 124 */
    uint8_t byState;  /* offset: 134 */
    uint8_t byClanFlag;  /* offset: 144 */
} FW_DATA_CLIENTREC_WAR_EVENTS;

/* Size: 102 bytes */
typedef struct _FW_DATA_CLIENTREC_CHAIN_POWERS {
    uint8_t byNumChainPowers;  /* offset: 0 */
} FW_DATA_CLIENTREC_CHAIN_POWERS;

/* Size: 4 bytes */
typedef struct _FW_DATA_CLIENTREQ_CHAR {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_CLIENTREQ_CHAR;

/* Size: 52 bytes */
typedef struct _FW_DATA_CLIENTREC_CHAR {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wHitPoints;  /* offset: 4 */
    uint8_t wNameA;  /* offset: 6 */
    uint8_t byClanID;  /* offset: 46 */
    uint8_t byClanStatus;  /* offset: 47 */
    uint16_t wLevel;  /* offset: 48 */
} FW_DATA_CLIENTREC_CHAR;

/* Size: 188 bytes */
typedef struct _FW_DATA_CLIENTREC_VOTES {
    uint32_t dwClanID;  /* offset: 0 */
    uint32_t dwSubject;  /* offset: 4 */
    uint32_t dwVote1;  /* offset: 8 */
    uint32_t dwVote2;  /* offset: 12 */
    uint32_t dwVote3;  /* offset: 16 */
    uint32_t dwVote4;  /* offset: 20 */
    uint8_t wName1;  /* offset: 24 */
    uint8_t wName2;  /* offset: 64 */
    uint8_t wName3;  /* offset: 104 */
    uint8_t wName4;  /* offset: 144 */
    uint8_t byAction;  /* offset: 184 */
} FW_DATA_CLIENTREC_VOTES;

/* Size: 44 bytes */
typedef struct _FW_DATA_CLIENTREC_NAME {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t wNameA;  /* offset: 4 */
} FW_DATA_CLIENTREC_NAME;

/* Size: 8 bytes */
typedef struct _FW_DATA_CLIENTREQ_CONTAINER {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwContainerID;  /* offset: 4 */
} FW_DATA_CLIENTREQ_CONTAINER;

/* Size: 8 bytes */
typedef struct _FW_DATA_CLIENTREC_HITPOINTS {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wCurHitPoints;  /* offset: 4 */
    uint16_t wMaxHitPoints;  /* offset: 6 */
} FW_DATA_CLIENTREC_HITPOINTS;

/* Size: 52 bytes */
typedef struct _FW_DATA_CLIENTREC_PLAYERINFO_1 {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwModelID;  /* offset: 4 */
    uint32_t dwFlags;  /* offset: 8 */
    uint32_t dwStanceID;  /* offset: 12 */
    uint32_t dwWeaponID;  /* offset: 16 */
    uint32_t dwReadyWeapon;  /* offset: 20 */
    uint32_t dwGuildID;  /* offset: 24 */
    uint8_t wAttachmentsA;  /* offset: 28 */
    uint16_t wClanID;  /* offset: 48 */
    uint8_t byState;  /* offset: 50 */
} FW_DATA_CLIENTREC_PLAYERINFO_1;

/* Size: 92 bytes */
typedef struct _FW_DATA_CLIENTREC_PLAYERINFO {
    uint8_t wNameA;  /* offset: 52 */
} FW_DATA_CLIENTREC_PLAYERINFO;

/* Size: 36 bytes */
typedef struct _FW_DATA_CLIENTREC_NPCINFO {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTypeID;  /* offset: 4 */
    uint32_t dwCategory;  /* offset: 8 */
    uint32_t dwStanceID;  /* offset: 12 */
    uint32_t dwWeaponID;  /* offset: 16 */
    uint32_t dwLabel;  /* offset: 20 */
    uint32_t dwNameID;  /* offset: 24 */
    uint16_t wClanID;  /* offset: 28 */
    uint8_t byMoveRate;  /* offset: 30 */
    uint8_t byState;  /* offset: 31 */
    uint8_t byHalfMoveRate;  /* offset: 32 */
} FW_DATA_CLIENTREC_NPCINFO;

/* Size: 12 bytes */
typedef struct _FW_DATA_CLIENTREC_OBJINFO {
    uint32_t dwObjID;  /* offset: 0 */
    uint32_t dwTypeID;  /* offset: 4 */
    uint32_t dwLabel;  /* offset: 8 */
} FW_DATA_CLIENTREC_OBJINFO;

/* Size: 60 bytes */
typedef struct _FW_DATA_CLIENTREC_SPECIALOBJINFO {
    uint32_t dwObjID;  /* offset: 0 */
    uint32_t dwTypeID;  /* offset: 4 */
    uint32_t dwLabel;  /* offset: 8 */
    uint32_t dwFlags;  /* offset: 12 */
    uint32_t dwAnimation;  /* offset: 16 */
    uint8_t dwReserved;  /* offset: 20 */
} FW_DATA_CLIENTREC_SPECIALOBJINFO;

/* Size: 252 bytes */
typedef struct _FW_DATA_CLIENTREC_PCDATA {
    uint16_t wCurHitPoints;  /* offset: 0 */
    uint16_t wMaxHitPoints;  /* offset: 2 */
    uint16_t wCurChiPoints;  /* offset: 4 */
    uint16_t wMaxChiPoints;  /* offset: 6 */
    uint32_t dwFlags;  /* offset: 8 */
    uint32_t dwMouseSlot;  /* offset: 12 */
    uint32_t dwReadyWeapon;  /* offset: 16 */
    uint8_t wAttachmentsA;  /* offset: 220 */
    uint8_t byMouseSlotQuantity;  /* offset: 240 */
    uint8_t byMouseSlotIdent;  /* offset: 241 */
    uint8_t byAttackMode;  /* offset: 242 */
    uint8_t byMovementMode;  /* offset: 243 */
    uint8_t byWeather;  /* offset: 244 */
    uint8_t byXPPercent;  /* offset: 245 */
    uint32_t fGameTime;  /* offset: 248 */
} FW_DATA_CLIENTREC_PCDATA;

/* Size: 124 bytes */
typedef struct _FW_DATA_CLIENTREC_ATTRIBUTES {
    uint32_t dwXP;  /* offset: 0 */
    int16_t sFireResist;  /* offset: 4 */
    int16_t sColdResist;  /* offset: 6 */
    int16_t sPoisonResist;  /* offset: 8 */
    int16_t sLightnResist;  /* offset: 10 */
    int16_t sPhysResist;  /* offset: 12 */
    uint8_t wNameA;  /* offset: 14 */
    uint8_t byStr;  /* offset: 54 */
    uint8_t byBaseStr;  /* offset: 55 */
    uint8_t byPer;  /* offset: 56 */
    uint8_t byBasePer;  /* offset: 57 */
    uint8_t byAgl;  /* offset: 58 */
    uint8_t byBaseAgl;  /* offset: 59 */
    uint8_t byMin;  /* offset: 60 */
    uint8_t byBaseMin;  /* offset: 61 */
    uint8_t byCon;  /* offset: 62 */
    uint8_t byBaseCon;  /* offset: 63 */
    uint16_t wMaxChi;  /* offset: 64 */
    uint16_t wCurChi;  /* offset: 66 */
    uint16_t wMaxHP;  /* offset: 68 */
    uint16_t wCurHP;  /* offset: 70 */
    uint16_t wMinDmg;  /* offset: 72 */
    uint16_t wMaxDmg;  /* offset: 74 */
    uint16_t wMinFireDmg;  /* offset: 76 */
    uint16_t wMaxFireDmg;  /* offset: 78 */
    uint16_t wMinColdDmg;  /* offset: 80 */
    uint16_t wMaxColdDmg;  /* offset: 82 */
    uint16_t wMinPoisonDmg;  /* offset: 84 */
    uint16_t wMaxPoisonDmg;  /* offset: 86 */
    uint16_t wMinLightningDmg;  /* offset: 88 */
    uint16_t wMaxLightningDmg;  /* offset: 90 */
    uint16_t wAtt;  /* offset: 92 */
    uint16_t wDef;  /* offset: 94 */
    int16_t sPrestige;  /* offset: 96 */
    uint16_t wWeightAll;  /* offset: 98 */
    uint8_t wLevel;  /* offset: 100 */
    uint16_t wClanID;  /* offset: 102 */
    uint16_t wClanStatus;  /* offset: 104 */
    uint16_t wAttPoints;  /* offset: 106 */
    uint8_t byTemplate;  /* offset: 108 */
    uint32_t dwDuelScore;  /* offset: 112 */
    uint32_t dwHeroPoints;  /* offset: 116 */
    uint32_t dwRedPoints;  /* offset: 120 */
} FW_DATA_CLIENTREC_ATTRIBUTES;

/* Size: 116 bytes */
typedef struct _FW_DATA_CLIENTREC_INVENTORY {
    uint8_t byTab;  /* offset: 0 */
    uint8_t dwInvItemsA;  /* offset: 4 */
    uint8_t byInvIdentA;  /* offset: 100 */
} FW_DATA_CLIENTREC_INVENTORY;

/* Size: 164 bytes */
typedef struct _FW_DATA_CLIENTREC_INVENTORY_1 {
    uint32_t dwTorsoItem;  /* offset: 116 */
    uint32_t dwNeckItem;  /* offset: 120 */
    uint32_t dwArmItem;  /* offset: 124 */
    uint32_t dwFeetItem;  /* offset: 128 */
    uint32_t dwShoulderItem;  /* offset: 132 */
    uint32_t dwHeadItem;  /* offset: 136 */
    uint64_t dwRingItemA;  /* offset: 140 */
    uint32_t dwGold;  /* offset: 148 */
    uint32_t dwStashGold;  /* offset: 152 */
    uint16_t wCurWeight;  /* offset: 156 */
    uint16_t wMaxWeight;  /* offset: 158 */
    uint32_t dwReadyWeapon;  /* offset: 160 */
} FW_DATA_CLIENTREC_INVENTORY_1;

/* Size: 60 bytes */
typedef struct _FW_DATA_CLIENTREC_ABILITY {
    uint16_t wNum;  /* offset: 0 */
    uint16_t wCurIndex;  /* offset: 2 */
    uint16_t wPoints;  /* offset: 4 */
    uint8_t dwID;  /* offset: 8 */
    uint8_t byRank;  /* offset: 48 */
} FW_DATA_CLIENTREC_ABILITY;

/* Size: 8 bytes */
typedef struct _FW_DATA_CLIENTREC_TARGETDATA {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byHitPoints;  /* offset: 4 */
    uint8_t byClanRating;  /* offset: 5 */
} FW_DATA_CLIENTREC_TARGETDATA;

/* Size: 144 bytes */
typedef struct _FW_DATA_CLIENTREC_PARTYUPDATE {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t byHitPointsA;  /* offset: 40 */
    uint8_t byChiPointsA;  /* offset: 50 */
    uint8_t byCount;  /* offset: 140 */
} FW_DATA_CLIENTREC_PARTYUPDATE;

/* Size: 44 bytes */
typedef struct _FW_DATA_CLIENTREC_PARTY {
    uint8_t dwCharIDA;  /* offset: 0 */
    uint8_t byCount;  /* offset: 40 */
} FW_DATA_CLIENTREC_PARTY;

/* Size: 52 bytes */
typedef struct _FW_DATA_CLIENTREC_YOUNGERBROTHERS {
    uint8_t dwID;  /* offset: 0 */
    uint8_t byStatus;  /* offset: 40 */
    uint8_t byCount;  /* offset: 50 */
    uint8_t byTotal;  /* offset: 51 */
} FW_DATA_CLIENTREC_YOUNGERBROTHERS;

/* Size: 60 bytes */
typedef struct _FW_DATA_CLIENTREC_BROTHERHOOD {
    uint32_t dwElderBID;  /* offset: 52 */
    uint8_t byElderStatus;  /* offset: 56 */
} FW_DATA_CLIENTREC_BROTHERHOOD;

/* Size: 4 bytes */
typedef struct _FW_DATA_CLIENTREC_CLAN {
    uint32_t dwTemp;  /* offset: 0 */
} FW_DATA_CLIENTREC_CLAN;

/* Size: 156 bytes */
typedef struct _FW_DATA_CLIENTREC_QUEST {
    uint8_t wQuestString;  /* offset: 0 */
} FW_DATA_CLIENTREC_QUEST;

/* Size: 114 bytes */
typedef struct _FW_DATA_CLIENTREC_QUEST_STORY {
    uint16_t wNum;  /* offset: 0 */
    uint16_t wCurIndex;  /* offset: 2 */
    uint8_t wID;  /* offset: 4 */
    uint8_t wStringID;  /* offset: 48 */
} FW_DATA_CLIENTREC_QUEST_STORY;

/* Size: 448 bytes */
typedef struct _FW_DATA_CLIENTREC_IGNORELIST {
    uint8_t wNameA;  /* offset: 0 */
    uint8_t dwID;  /* offset: 400 */
    uint8_t byCount;  /* offset: 440 */
    uint16_t wIndex;  /* offset: 442 */
    uint16_t wTotal;  /* offset: 444 */
} FW_DATA_CLIENTREC_IGNORELIST;

/* Size: 60 bytes */
typedef struct _FW_DATA_CLIENTREC_FRIENDLIST {
    uint8_t byStatus;  /* offset: 0 */
    uint8_t dwID;  /* offset: 12 */
    uint8_t byCount;  /* offset: 52 */
    uint16_t wIndex;  /* offset: 54 */
    uint16_t wTotal;  /* offset: 56 */
} FW_DATA_CLIENTREC_FRIENDLIST;

/* Size: 68 bytes */
typedef struct _FW_DATA_CLIENTREC_WHO {
    uint8_t wLevel;  /* offset: 0 */
    uint8_t dwID;  /* offset: 20 */
    uint8_t byCount;  /* offset: 60 */
    uint16_t wIndex;  /* offset: 62 */
    uint16_t wTotal;  /* offset: 64 */
} FW_DATA_CLIENTREC_WHO;

/* Size: 408 bytes */
typedef struct _FW_DATA_CLIENTREC_PARTYFIND {
    uint8_t wLevel;  /* offset: 320 */
    uint8_t wStance;  /* offset: 336 */
    uint8_t wClan;  /* offset: 352 */
    uint8_t dwID;  /* offset: 368 */
    uint8_t byCount;  /* offset: 400 */
    uint16_t wIndex;  /* offset: 402 */
    uint16_t wTotal;  /* offset: 404 */
} FW_DATA_CLIENTREC_PARTYFIND;

/* Size: 448 bytes */
typedef struct _FW_DATA_CLIENTREC_GMWHO {
    uint8_t wNameA;  /* offset: 0 */
    uint8_t dwID;  /* offset: 400 */
    uint8_t byCount;  /* offset: 440 */
    uint16_t wIndex;  /* offset: 442 */
    uint16_t wTotal;  /* offset: 444 */
} FW_DATA_CLIENTREC_GMWHO;

/* Size: 80 bytes */
typedef struct _FW_DATA_CLIENTREC_ARENA_SCORE {
    uint8_t dwCharID;  /* offset: 0 */
    uint8_t dwScore;  /* offset: 40 */
} FW_DATA_CLIENTREC_ARENA_SCORE;

/* Size: 1104 bytes */
typedef struct _FW_DATA_CLIENTREC_GMHELPLIST {
    uint8_t dwCharID;  /* offset: 0 */
    uint8_t wLevel;  /* offset: 200 */
    uint8_t dwSceneID;  /* offset: 300 */
    uint8_t fY;  /* offset: 700 */
    uint8_t fZ;  /* offset: 900 */
    uint8_t byCount;  /* offset: 1100 */
} FW_DATA_CLIENTREC_GMHELPLIST;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_WHOIS {
    uint32_t dwNameHash;  /* offset: 0 */
} FW_DATA_GAMESVC_WHOIS;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_CHECK_WARSCORE {
    uint32_t dwIndex;  /* offset: 0 */
    uint16_t wAClanID;  /* offset: 4 */
    uint16_t wDClanID;  /* offset: 6 */
} FW_DATA_GAMESVC_CHECK_WARSCORE;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_DELETESPAWNNPCGRP {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwGrp;  /* offset: 4 */
} FW_DATA_GAMESVC_DELETESPAWNNPCGRP;

/* Size: 12 bytes */
typedef struct _FW_DATA_GAMESVC_RESETSPAWNGRPATTRIB {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwGrp;  /* offset: 4 */
    uint8_t byDeleteFlag;  /* offset: 8 */
} FW_DATA_GAMESVC_RESETSPAWNGRPATTRIB;

/* Size: 12 bytes */
typedef struct _FW_DATA_GAMESVC_RESET_SPAWNGRP {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwGrp;  /* offset: 4 */
    uint8_t byDeleteFlag;  /* offset: 8 */
} FW_DATA_GAMESVC_RESET_SPAWNGRP;

/* Size: 12 bytes */
typedef struct _FW_DATA_GAMESVC_RESET_SPAWNATTRIB {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwSpawnID;  /* offset: 4 */
    uint8_t byDeleteFlag;  /* offset: 8 */
} FW_DATA_GAMESVC_RESET_SPAWNATTRIB;

/* Size: 12 bytes */
typedef struct _FW_DATA_GAMESVC_SPAWNGRP {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwGrp;  /* offset: 4 */
    uint32_t dwAttribID;  /* offset: 8 */
} FW_DATA_GAMESVC_SPAWNGRP;

/* Size: 2 bytes */
typedef struct _FW_DATA_GAMESVC_CLAN_INFO {
    uint16_t wClanID;  /* offset: 0 */
} FW_DATA_GAMESVC_CLAN_INFO;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_AUCTION_REQ {
    uint32_t dwSetID;  /* offset: 0 */
} FW_DATA_GAMESVC_AUCTION_REQ;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_REQ_UNKNOWNID {
    uint32_t dwID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
} FW_DATA_GAMESVC_REQ_UNKNOWNID;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_TIME_SYNC {
    uint32_t dwTickCount;  /* offset: 0 */
    uint32_t fGameTime;  /* offset: 4 */
} FW_DATA_GAMESVC_TIME_SYNC;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_ZONE_OUT {
    uint32_t dwMapID;  /* offset: 0 */
    uint32_t dwSceneID;  /* offset: 4 */
} FW_DATA_GAMESVC_ZONE_OUT;

/* Size: 2 bytes */
typedef struct _FW_DATA_GAMESVC_LISTREQUEST {
    uint16_t wIndex;  /* offset: 0 */
} FW_DATA_GAMESVC_LISTREQUEST;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_GM_CLANLIST {
    uint16_t wIndex;  /* offset: 0 */
    uint16_t wClanID;  /* offset: 2 */
} FW_DATA_GAMESVC_GM_CLANLIST;

/* Size: 180 bytes */
typedef struct _FW_DATA_GAMESVC_CHAT {
    uint8_t wMesg;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 160 */
    uint32_t dwParam2;  /* offset: 164 */
    uint32_t dwParam3;  /* offset: 168 */
    uint32_t dwParam4;  /* offset: 172 */
    uint32_t dwParam5;  /* offset: 176 */
} FW_DATA_GAMESVC_CHAT;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_SET_STANCE {
    uint16_t wStanceID;  /* offset: 0 */
    void* pObject;  /* offset: 4 */
} FW_DATA_GAMESVC_SET_STANCE;

/* Size: 44 bytes */
typedef struct _FW_DATA_GAMESVC_PARTYUPDATE {
    uint8_t dwCharID;  /* offset: 0 */
    uint8_t byCount;  /* offset: 40 */
} FW_DATA_GAMESVC_PARTYUPDATE;

/* Size: 20 bytes */
typedef struct _FW_DATA_GAMESVC_BROADCAST {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint32_t dwTypeParam1;  /* offset: 16 */
} FW_DATA_GAMESVC_BROADCAST;

/* Size: 24 bytes */
typedef struct _FW_DATA_GAMESVC_SENDMSG {
    uint32_t dwID;  /* offset: 0 */
    uint32_t wStringID;  /* offset: 4 */
    uint32_t dwParam1;  /* offset: 8 */
    uint32_t dwParam2;  /* offset: 12 */
    uint32_t fRadius;  /* offset: 16 */
    uint8_t byFilter;  /* offset: 20 */
} FW_DATA_GAMESVC_SENDMSG;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_GENERICEMOTE {
    uint32_t dwTargetID;  /* offset: 0 */
    uint16_t wEmote;  /* offset: 4 */
} FW_DATA_GAMESVC_GENERICEMOTE;

/* Size: 2 bytes */
typedef struct _FW_DATA_GAMESVC_CLANMEMBERLIST {
    uint8_t byType;  /* offset: 0 */
    uint8_t byValue;  /* offset: 1 */
} FW_DATA_GAMESVC_CLANMEMBERLIST;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_CHATBAR {
    uint32_t dwData;  /* offset: 0 */
} FW_DATA_GAMESVC_CHATBAR;

/* Size: 2 bytes */
typedef struct _FW_DATA_GAMESVC_WHO {
    uint8_t byType;  /* offset: 0 */
    uint8_t byValue;  /* offset: 1 */
} FW_DATA_GAMESVC_WHO;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_DEBUG {
    uint32_t dwParam1;  /* offset: 0 */
    uint32_t dwParam2;  /* offset: 4 */
} FW_DATA_GAMESVC_DEBUG;

/* Size: 16 bytes */
typedef struct _FW_DATA_GAMESVC_PCDATA {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwFilter;  /* offset: 4 */
    uint32_t dwOptions;  /* offset: 8 */
    uint32_t dwFriendly;  /* offset: 12 */
} FW_DATA_GAMESVC_PCDATA;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_SET_CHAT_FILTER {
    uint32_t dwFilter;  /* offset: 0 */
} FW_DATA_GAMESVC_SET_CHAT_FILTER;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_SET_OPTIONS {
    uint32_t dwOptions;  /* offset: 0 */
} FW_DATA_GAMESVC_SET_OPTIONS;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_SET_FRIENDLY {
    uint32_t dwFriendly;  /* offset: 0 */
} FW_DATA_GAMESVC_SET_FRIENDLY;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_GAME_EVENTS {
    uint8_t byCmd;  /* offset: 0 */
    uint16_t wEventID;  /* offset: 2 */
} FW_DATA_GAMESVC_GAME_EVENTS;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_BUGREPORT {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTime;  /* offset: 4 */
} FW_DATA_GAMESVC_BUGREPORT;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_RELOAD_SPAWNPT {
    uint32_t dwSpawnPtID;  /* offset: 0 */
} FW_DATA_GAMESVC_RELOAD_SPAWNPT;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_RELOAD_NPCATTRIB {
    uint32_t dwAttribID;  /* offset: 0 */
} FW_DATA_GAMESVC_RELOAD_NPCATTRIB;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_RELOAD_EVENTSVC {
    uint32_t dwEventID;  /* offset: 0 */
} FW_DATA_GAMESVC_RELOAD_EVENTSVC;

/* Size: 12 bytes */
typedef struct _FW_DATA_GAMESVC_ACTIVATE_QUESTPT {
    uint32_t dwSceneSpawnID;  /* offset: 0 */
    uint32_t dwQuestOwner;  /* offset: 4 */
    uint32_t dwExpectedCount;  /* offset: 8 */
} FW_DATA_GAMESVC_ACTIVATE_QUESTPT;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_PURGEMEMORY {
    uint32_t dwCategory;  /* offset: 0 */
    uint32_t dwPrimaryKey;  /* offset: 4 */
} FW_DATA_GAMESVC_PURGEMEMORY;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_DROP_CONNECTION {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_GAMESVC_DROP_CONNECTION;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_UPDATE_CHARACTER {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_GAMESVC_UPDATE_CHARACTER;

/* Size: 8 bytes */
typedef struct _FW_DATA_GAMESVC_GUILDMEMBERLIST {
    uint32_t dwGuildID;  /* offset: 0 */
    uint16_t wIndex;  /* offset: 4 */
} FW_DATA_GAMESVC_GUILDMEMBERLIST;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_GUILDNAME {
    uint32_t dwGuildID;  /* offset: 0 */
} FW_DATA_GAMESVC_GUILDNAME;

/* Size: 2 bytes */
typedef struct _FW_DATA_GAMESVC_GM_CHECKWAR {
    uint16_t wClanID;  /* offset: 0 */
} FW_DATA_GAMESVC_GM_CHECKWAR;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_NAME_REQUEST {
    uint32_t dwCharID;  /* offset: 0 */
} FW_DATA_GAMESVC_NAME_REQUEST;

/* Size: 4 bytes */
typedef struct _FW_DATA_GAMESVC_TARGETDATA {
    uint32_t dwTargetID;  /* offset: 0 */
} FW_DATA_GAMESVC_TARGETDATA;

/* Size: 1 bytes */
typedef struct _FW_DATA_GAMESVC_GMHELPLIST {
    uint8_t byPriority;  /* offset: 0 */
} FW_DATA_GAMESVC_GMHELPLIST;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_GROUPSCENE {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwRadius;  /* offset: 4 */
    uint32_t dwFlags;  /* offset: 8 */
} FW_DATA_ADMIN_GROUPSCENE;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_GENERIC {
    uint32_t dwParam1;  /* offset: 0 */
    uint32_t dwParam2;  /* offset: 4 */
    uint32_t dwParam3;  /* offset: 8 */
} FW_DATA_ADMIN_GENERIC;

/* Size: 16 bytes */
typedef struct _FW_DATA_ADMIN_ITEM {
    uint32_t dwItemID;  /* offset: 0 */
    uint32_t dwQuantity;  /* offset: 4 */
    uint32_t dwRange;  /* offset: 8 */
    uint8_t byLocation;  /* offset: 12 */
    uint8_t byFlags;  /* offset: 13 */
} FW_DATA_ADMIN_ITEM;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_XP {
    uint32_t slXP;  /* offset: 0 */
    uint32_t dwRange;  /* offset: 4 */
    uint8_t byType;  /* offset: 8 */
} FW_DATA_ADMIN_XP;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_CLAN {
    uint32_t dwFindID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
    uint8_t byClanID;  /* offset: 5 */
    uint8_t byClanStatus;  /* offset: 6 */
} FW_DATA_ADMIN_CLAN;

/* Size: 20 bytes */
typedef struct _FW_DATA_ADMIN_NPCSPAWN {
    uint32_t dwNPC;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint16_t wRadius;  /* offset: 16 */
    uint8_t byTag;  /* offset: 18 */
    uint8_t byCount;  /* offset: 19 */
} FW_DATA_ADMIN_NPCSPAWN;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_NPCCOMMAND {
    uint8_t byCmdType;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
} FW_DATA_ADMIN_NPCCOMMAND;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_FINDER {
    uint32_t dwFindID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
} FW_DATA_ADMIN_FINDER;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_KICK {
    uint32_t dwFindID;  /* offset: 0 */
    uint16_t wDuration;  /* offset: 4 */
    uint8_t byType;  /* offset: 6 */
} FW_DATA_ADMIN_KICK;

/* Size: 1 bytes */
typedef struct _FW_DATA_ADMIN_VISIBLE {
    uint8_t byFlag;  /* offset: 0 */
} FW_DATA_ADMIN_VISIBLE;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_NOMINATE {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
    uint8_t byNominate;  /* offset: 5 */
} FW_DATA_ADMIN_NOMINATE;

/* Size: 20 bytes */
typedef struct _FW_DATA_ADMIN_SPAWNSTATUS {
    uint32_t dwSpawnID;  /* offset: 0 */
    uint8_t byStatus;  /* offset: 4 */
    uint32_t dwData1;  /* offset: 8 */
    uint32_t dwData2;  /* offset: 12 */
    uint32_t dwData3;  /* offset: 16 */
} FW_DATA_ADMIN_SPAWNSTATUS;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_OBJSTATUS {
    uint32_t dwEntityID;  /* offset: 0 */
    uint8_t byStatus;  /* offset: 4 */
} FW_DATA_ADMIN_OBJSTATUS;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_GMSTATUS {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
    uint8_t byStatus;  /* offset: 5 */
} FW_DATA_ADMIN_GMSTATUS;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_TELEPORT {
    uint32_t x;  /* offset: 0 */
    uint32_t y;  /* offset: 4 */
    uint32_t z;  /* offset: 8 */
} FW_DATA_ADMIN_TELEPORT;

/* Size: 1 bytes */
typedef struct _FW_DATA_ADMIN_COMBATFLAG {
    uint8_t byFlag;  /* offset: 0 */
} FW_DATA_ADMIN_COMBATFLAG;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_SPAWNDATA {
    uint32_t dwSpawnID;  /* offset: 0 */
    uint32_t dwAttribID;  /* offset: 4 */
    uint32_t dwNameString;  /* offset: 8 */
} FW_DATA_ADMIN_SPAWNDATA;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_SHOWSPAWNPT {
    uint32_t x;  /* offset: 0 */
    uint32_t y;  /* offset: 4 */
    uint32_t z;  /* offset: 8 */
} FW_DATA_ADMIN_SHOWSPAWNPT;

/* Size: 16 bytes */
typedef struct _FW_DATA_ADMIN_SPAWNPOS {
    uint32_t dwSpawnID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
} FW_DATA_ADMIN_SPAWNPOS;

/* Size: 4 bytes */
typedef struct _FW_DATA_ADMIN_SPAWNDETAILREQ {
    uint32_t dwSpawnID;  /* offset: 0 */
} FW_DATA_ADMIN_SPAWNDETAILREQ;

/* Size: 20 bytes */
typedef struct _FW_DATA_ADMIN_SPAWNDETAIL {
    uint32_t dwSpawnID;  /* offset: 0 */
    uint32_t dwAttribID;  /* offset: 4 */
    uint16_t wTotalCounter;  /* offset: 8 */
    uint8_t byMaxFlag;  /* offset: 10 */
    uint8_t byOnFlag;  /* offset: 11 */
    uint32_t dwNameID;  /* offset: 12 */
    uint16_t wLevel;  /* offset: 16 */
} FW_DATA_ADMIN_SPAWNDETAIL;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_SERVERSPAWNINFO {
    uint32_t dwOnCount;  /* offset: 0 */
    uint32_t dwMaxCount;  /* offset: 4 */
    uint32_t dwActualCount;  /* offset: 8 */
} FW_DATA_ADMIN_SERVERSPAWNINFO;

/* Size: 16 bytes */
typedef struct _FW_DATA_ADMIN_CLONE {
    uint32_t dwID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
} FW_DATA_ADMIN_CLONE;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_TAG {
    uint32_t dwNPCID;  /* offset: 0 */
    uint8_t byTag;  /* offset: 4 */
} FW_DATA_ADMIN_TAG;

/* Size: 16 bytes */
typedef struct _FW_DATA_ADMIN_HPCP {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwRange;  /* offset: 4 */
    uint32_t slVal;  /* offset: 8 */
    uint8_t byPerc;  /* offset: 12 */
    uint8_t byAbs;  /* offset: 13 */
} FW_DATA_ADMIN_HPCP;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_CHECKINV {
    uint32_t dwID;  /* offset: 0 */
    uint8_t byMinRange;  /* offset: 4 */
    uint8_t byMaxRange;  /* offset: 5 */
} FW_DATA_ADMIN_CHECKINV;

/* Size: 12 bytes */
typedef struct _FW_DATA_ADMIN_DELINV {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwItemID;  /* offset: 4 */
    uint8_t byType;  /* offset: 8 */
    uint8_t byMinRange;  /* offset: 9 */
    uint8_t byMaxRange;  /* offset: 10 */
} FW_DATA_ADMIN_DELINV;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_RES {
    uint32_t dwID;  /* offset: 0 */
    uint8_t byType;  /* offset: 4 */
} FW_DATA_ADMIN_RES;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_SCENE {
    uint32_t dwID;  /* offset: 0 */
    uint16_t wSceneID;  /* offset: 4 */
} FW_DATA_ADMIN_SCENE;

/* Size: 188 bytes */
typedef struct _FW_DATA_ADMIN_WAREVENT {
    uint8_t byNumEvents;  /* offset: 0 */
    uint8_t dwAID;  /* offset: 4 */
    uint8_t dwDID;  /* offset: 44 */
    uint8_t dwTime;  /* offset: 84 */
    uint8_t byType;  /* offset: 124 */
    uint8_t byState;  /* offset: 134 */
    uint8_t dwSceneID;  /* offset: 144 */
    uint8_t byClanFlag;  /* offset: 184 */
} FW_DATA_ADMIN_WAREVENT;

/* Size: 2 bytes */
typedef struct _FW_DATA_ADMIN_TAPCHAT {
    uint8_t byType;  /* offset: 0 */
    uint8_t dwID;  /* offset: 1 */
} FW_DATA_ADMIN_TAPCHAT;

/* Size: 16 bytes */
typedef struct _FW_DATA_ADMIN_MUTE {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwRadius;  /* offset: 4 */
    uint32_t dwTime;  /* offset: 8 */
    uint8_t byFlag;  /* offset: 12 */
} FW_DATA_ADMIN_MUTE;

/* Size: 4 bytes */
typedef struct _FW_DATA_ADMIN_FIND_PLAYER {
    uint32_t dwHash;  /* offset: 0 */
} FW_DATA_ADMIN_FIND_PLAYER;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_FIND_MONSTER {
    uint32_t dwType;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
} FW_DATA_ADMIN_FIND_MONSTER;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_GMHELP_REMOVE {
    uint32_t dwCharID;  /* offset: 0 */
    uint8_t byPriority;  /* offset: 4 */
} FW_DATA_ADMIN_GMHELP_REMOVE;

/* Size: 8 bytes */
typedef struct _FW_DATA_ADMIN_SCENEIGR {
    uint32_t dwID;  /* offset: 0 */
    uint16_t wSceneID;  /* offset: 4 */
    uint8_t byType;  /* offset: 6 */
    uint8_t byTeam;  /* offset: 7 */
} FW_DATA_ADMIN_SCENEIGR;

/* Size: 144 bytes */
typedef struct _CTimer {
    uint32_t startdate;  /* offset: 0 */
    uint32_t start;  /* offset: 4 */
    uint32_t dwSeconds;  /* offset: 8 */
    uint32_t dwTimes;  /* offset: 12 */
    uint32_t dwInterval;  /* offset: 16 */
    uint8_t dwParams;  /* offset: 20 */
    uint8_t chModuleName;  /* offset: 60 */
    uint32_t secbase;  /* offset: 140 */
} CTimer;

/* Size: 224 bytes */
typedef struct _Connection {
    uint8_t address;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 16 */
    uint32_t lastsend;  /* offset: 20 */
    uint32_t lastrecv;  /* offset: 24 */
    uint32_t SendQueue;  /* offset: 28 */
    uint32_t SendImmediate;  /* offset: 32 */
    uint32_t lastcheckpc;  /* offset: 36 */
    uint32_t recvtime;  /* offset: 40 */
    uint32_t closetime;  /* offset: 44 */
    uint32_t RecvQueue;  /* offset: 48 */
    uint8_t chTicket;  /* offset: 52 */
    uint32_t m_iTimeOut;  /* offset: 68 */
    uint32_t fZoningFlag;  /* offset: 72 */
    uint32_t fDelFlag;  /* offset: 76 */
    uint32_t fClosingFlag;  /* offset: 80 */
    uint32_t fUsed;  /* offset: 84 */
    uint32_t fErrorFlag;  /* offset: 88 */
    uint32_t iSocket;  /* offset: 92 */
    uint16_t wPortNum;  /* offset: 96 */
    uint32_t iSendInterval;  /* offset: 100 */
    uint32_t m_dwPacketTime;  /* offset: 104 */
    uint32_t m_dwPacketCount;  /* offset: 108 */
    uint8_t send_mutex;  /* offset: 112 */
    uint8_t recv_mutex;  /* offset: 136 */
    uint8_t send_imm_mutex;  /* offset: 160 */
    uint8_t gen_mutex;  /* offset: 184 */
    uint32_t iFirst;  /* offset: 208 */
    uint32_t m_dwRecvBuffSize;  /* offset: 212 */
    void* pPrev;  /* offset: 220 */
} Connection;

/* Size: 824 bytes */
typedef struct _CSession {
    uint32_t m_iNumConnects;  /* offset: 748 */
    uint32_t iPortNum;  /* offset: 752 */
    uint32_t iStartupFlag;  /* offset: 756 */
    uint32_t iDeleteFlag;  /* offset: 760 */
    uint32_t fExit;  /* offset: 764 */
    uint32_t m_iLogLevel;  /* offset: 768 */
    uint32_t m_iALog;  /* offset: 772 */
    uint8_t defaultaddr;  /* offset: 776 */
    uint8_t wc_addr;  /* offset: 792 */
    uint32_t m_iStatus;  /* offset: 808 */
    uint32_t m_iDebug;  /* offset: 812 */
    void* pPrev;  /* offset: 820 */
} CSession;

/* Size: 792 bytes */
typedef struct _tPCDef {
    void* pszBody;  /* offset: 4 */
    void* pszSetup;  /* offset: 8 */
    uint8_t szAnimation;  /* offset: 12 */
    uint8_t szAnimList;  /* offset: 268 */
    uint8_t szActionList;  /* offset: 524 */
    uint32_t iHeadCount;  /* offset: 780 */
    uint32_t iBodyCount;  /* offset: 784 */
    uint32_t iSetupCount;  /* offset: 788 */
} tPCDef;

/* Size: 1288 bytes */
typedef struct _tNPCTypeData {
    uint8_t szModelName;  /* offset: 0 */
    uint8_t szAnimationName;  /* offset: 256 */
    uint8_t szVADName;  /* offset: 512 */
    uint8_t szActionList;  /* offset: 768 */
    uint8_t szAnimList;  /* offset: 1024 */
    uint32_t dwWeaponID;  /* offset: 1280 */
    uint32_t dwMatID;  /* offset: 1284 */
} tNPCTypeData;

/* Size: 36 bytes */
typedef struct _tObjectCache {
    uint32_t dwID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fDir;  /* offset: 16 */
    uint8_t byMoveState;  /* offset: 20 */
    uint8_t bySpeed;  /* offset: 21 */
    uint32_t iCount;  /* offset: 24 */
    void* pPrev;  /* offset: 32 */
} tObjectCache;

/* Size: 204 bytes */
typedef struct _tObjectHandle {
    uint8_t matTM;  /* offset: 0 */
    uint64_t byProcessFlag;  /* offset: 64 */
    uint8_t vHalfExtents;  /* offset: 104 */
    void* pScene;  /* offset: 116 */
    void* pSendThread;  /* offset: 124 */
    uint32_t dwID;  /* offset: 128 */
    uint32_t fSize;  /* offset: 132 */
    uint32_t fRadius;  /* offset: 136 */
    uint32_t fDir;  /* offset: 140 */
    uint32_t dwFlags;  /* offset: 144 */
    uint32_t dwModelID;  /* offset: 148 */
    uint32_t dwScript;  /* offset: 152 */
    uint32_t dwTimeStamp;  /* offset: 156 */
    uint32_t dwSendCount;  /* offset: 160 */
    uint32_t iMinX;  /* offset: 164 */
    uint32_t iMaxX;  /* offset: 168 */
    uint32_t iMinY;  /* offset: 172 */
    uint32_t iMaxY;  /* offset: 176 */
    uint32_t dwInScene;  /* offset: 180 */
    uint32_t iOnlineFlag;  /* offset: 184 */
    uint16_t wGMOptions;  /* offset: 188 */
    uint16_t wLevel;  /* offset: 190 */
    uint16_t wStanceID;  /* offset: 192 */
    uint16_t wClanID;  /* offset: 194 */
    uint8_t byType;  /* offset: 196 */
    uint8_t bySpeed;  /* offset: 197 */
    uint8_t byLock;  /* offset: 198 */
    uint8_t byMoveState;  /* offset: 199 */
    uint8_t byIsGM;  /* offset: 200 */
    uint8_t byMoveLock;  /* offset: 201 */
    uint8_t byInvisible;  /* offset: 202 */
} tObjectHandle;

/* Size: 200 bytes */
typedef struct _tBoundingBox {
    uint8_t matTM;  /* offset: 0 */
    uint8_t vHalfAxis;  /* offset: 64 */
    uint32_t dwID;  /* offset: 76 */
    uint32_t dwFlags;  /* offset: 80 */
    uint32_t dwScript;  /* offset: 84 */
    uint32_t dwCheckFlag;  /* offset: 184 */
    uint64_t byProcessFlag;  /* offset: 188 */
    void* pOwner;  /* offset: 196 */
} tBoundingBox;

/* Size: 28 bytes */
typedef struct _tPoint {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwFlags;  /* offset: 4 */
    uint32_t dwProperty;  /* offset: 8 */
    uint8_t vPos;  /* offset: 12 */
    uint32_t bCheck;  /* offset: 24 */
} tPoint;

/* Size: 8 bytes */
typedef struct _tWayPointNetID {
    uint64_t dwPointa;  /* offset: 0 */
} tWayPointNetID;

/* Size: 8 bytes */
typedef struct _tChunk {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwSize;  /* offset: 4 */
} tChunk;

/* Size: 1608 bytes */
typedef struct _CSceneSharedData {
    uint8_t m_CPCList;  /* offset: 0 */
    uint64_t m_CNPCList;  /* offset: 1584 */
    uint8_t m_CCollisionList;  /* offset: 1592 */
} CSceneSharedData;

/* Size: 132540 bytes */
typedef struct _CScene {
    uint8_t scenelock;  /* offset: 132492 */
    uint8_t m_byWeather;  /* offset: 132524 */
    uint8_t m_byWeatherType;  /* offset: 132525 */
    uint8_t m_byKillZoneFlag;  /* offset: 132526 */
    uint32_t m_dwTimeOffset;  /* offset: 132528 */
    uint32_t m_dwScriptID;  /* offset: 132532 */
} CScene;

/* Size: 464 bytes */
typedef struct _STLootInfo {
    uint8_t dwInvID;  /* offset: 0 */
    uint8_t byInvCnt;  /* offset: 64 */
    uint8_t byDurability;  /* offset: 400 */
    uint8_t byHardness;  /* offset: 432 */
    uint8_t bHardAlloc;  /* offset: 448 */
} STLootInfo;

/* Size: 68 bytes */
typedef struct _NPCPool {
    uint32_t dwSceneID;  /* offset: 64 */
} NPCPool;

/* Size: 92 bytes */
typedef struct _STTargetList {
    uint8_t m_bAllocated;  /* offset: 0 */
    uint32_t dwCurrentTarget;  /* offset: 4 */
    uint8_t targetlist_mutex;  /* offset: 68 */
} STTargetList;

/* Size: 8 bytes */
typedef struct _NPCPart {
    uint32_t dwID;  /* offset: 0 */
    uint32_t fDist;  /* offset: 4 */
} NPCPart;

/* Size: 24 bytes */
typedef struct _CEffectElement {
    uint32_t dwCharID;  /* offset: 0 */
    uint16_t wEffectID;  /* offset: 4 */
    uint16_t wDuration;  /* offset: 6 */
    uint32_t dwTimeStamp;  /* offset: 8 */
    uint8_t byPowerRank;  /* offset: 12 */
    uint32_t dwImmunityID;  /* offset: 16 */
    uint8_t byAllocated;  /* offset: 20 */
} CEffectElement;

/* Size: 36 bytes */
typedef struct _STSpawnRec {
    uint32_t dwSpawnPtID;  /* offset: 0 */
    uint32_t X;  /* offset: 4 */
    uint32_t Y;  /* offset: 8 */
    uint32_t Z;  /* offset: 12 */
    uint32_t dwAttribID;  /* offset: 16 */
    uint32_t dwTotalCounter;  /* offset: 20 */
    uint8_t bySpawnMax;  /* offset: 24 */
    uint8_t byIsOn;  /* offset: 25 */
    uint32_t dwNameID;  /* offset: 28 */
    uint16_t wdLevel;  /* offset: 32 */
} STSpawnRec;

/* Size: 116 bytes */
typedef struct _CSpawnPoint {
    uint32_t m_pcScene;  /* offset: 0 */
    uint32_t m_dwAttribID;  /* offset: 4 */
    uint16_t m_wdCount;  /* offset: 8 */
    uint16_t m_wdDeadCounter;  /* offset: 10 */
    uint16_t m_wdCounter;  /* offset: 12 */
    uint16_t m_wdRadius;  /* offset: 14 */
    uint32_t m_dwTickLimit;  /* offset: 16 */
    uint8_t m_bySpawnMax;  /* offset: 20 */
    uint32_t m_fFacing;  /* offset: 24 */
    uint8_t m_byIsOn;  /* offset: 28 */
    uint8_t m_byAllocated;  /* offset: 29 */
    uint32_t m_dwTickCount;  /* offset: 32 */
    uint8_t m_bPriortyTarget;  /* offset: 36 */
    uint32_t m_dwPriortyTargetID;  /* offset: 40 */
    uint32_t dwInstanceIndex;  /* offset: 44 */
    uint8_t spawnpt_mutex;  /* offset: 48 */
    uint32_t m_pcPoint;  /* offset: 72 */
    uint8_t m_byUseTime;  /* offset: 76 */
    uint8_t m_byUseDate;  /* offset: 77 */
    uint8_t m_byUseRangeHour;  /* offset: 78 */
    uint8_t m_byUseRangeDate;  /* offset: 79 */
    uint32_t m_dwBeginHour;  /* offset: 80 */
    uint32_t m_dwEndHour;  /* offset: 84 */
    uint32_t m_dwBeginDay;  /* offset: 88 */
    uint32_t m_dwBeginMonth;  /* offset: 92 */
    uint32_t m_dwEndDay;  /* offset: 96 */
    uint32_t m_dwEndMonth;  /* offset: 100 */
    uint32_t m_dwGrp;  /* offset: 104 */
    uint32_t m_dwScan;  /* offset: 108 */
    uint32_t m_dwExScan;  /* offset: 112 */
} CSpawnPoint;

/* Size: 40 bytes */
typedef struct _CWayPoints {
    uint8_t m_CoordPt;  /* offset: 0 */
    uint8_t m_cGroundPt;  /* offset: 12 */
    uint32_t m_dwID;  /* offset: 24 */
    uint8_t m_bAllocated;  /* offset: 28 */
    uint32_t m_dwNeighbourCount;  /* offset: 32 */
} CWayPoints;

/* Size: 4 bytes */
typedef struct _CWayPIndex {
    uint32_t m_dwIndex;  /* offset: 0 */
} CWayPIndex;

/* Size: 16 bytes */
typedef struct _CPathFinder {
    uint32_t m_dwFromIndex;  /* offset: 0 */
    uint32_t m_dwToIndex;  /* offset: 4 */
    uint32_t m_dwIndexCount;  /* offset: 8 */
    uint32_t IndexList;  /* offset: 12 */
} CPathFinder;

/* Size: 48 bytes */
typedef struct _CWayPointMgr {
    uint32_t m_pcWayPoints;  /* offset: 4 */
    uint32_t m_dwWayPointCount;  /* offset: 8 */
    uint8_t m_cPathTable;  /* offset: 12 */
    uint8_t m_bAllocated;  /* offset: 28 */
    uint32_t m_dwSceneID;  /* offset: 32 */
    uint32_t m_dwTotalNeighbourMem;  /* offset: 36 */
    uint32_t m_dwTotalPathMem;  /* offset: 40 */
} CWayPointMgr;

/* Size: 32776 bytes */
typedef struct _CWayPointSceneMgr {
    uint32_t m_pcWayPointMgr;  /* offset: 4 */
} CWayPointSceneMgr;

/* Size: 1076 bytes */
typedef struct _CNPCAttribute {
    uint8_t m_bAllocated;  /* offset: 0 */
    uint8_t m_bInvalid;  /* offset: 1 */
    uint32_t m_dwAttribID;  /* offset: 4 */
    uint32_t m_dwModelID;  /* offset: 8 */
    uint8_t m_byAttachmentID;  /* offset: 12 */
    uint32_t m_dwAttRating;  /* offset: 16 */
    uint32_t m_dwDefRating;  /* offset: 20 */
    uint16_t m_wdMinFireDmg;  /* offset: 24 */
    uint16_t m_wdMaxFireDmg;  /* offset: 26 */
    uint16_t m_wdMinColdDmg;  /* offset: 28 */
    uint16_t m_wdMaxColdDmg;  /* offset: 30 */
    uint16_t m_wdMinLightningDmg;  /* offset: 32 */
    uint16_t m_wdMaxLightningDmg;  /* offset: 34 */
    uint16_t m_wdMinPoisonDmg;  /* offset: 36 */
    uint16_t m_wdMaxPoisonDmg;  /* offset: 38 */
    uint16_t m_wdMinPhysicalDmg;  /* offset: 40 */
    uint16_t m_wdMaxPhysicalDmg;  /* offset: 42 */
    uint32_t m_dwMaxHitPoints;  /* offset: 44 */
    uint16_t m_wdHitPointRegen;  /* offset: 48 */
    uint16_t m_sFireResist;  /* offset: 50 */
    uint16_t m_sColdResist;  /* offset: 52 */
    uint16_t m_sLightningResist;  /* offset: 54 */
    uint16_t m_sPoisonResist;  /* offset: 56 */
    uint16_t m_sPhysicalResist;  /* offset: 58 */
    uint8_t m_byMoveRate;  /* offset: 60 */
    uint8_t m_dwXPPerHP;  /* offset: 61 */
    uint32_t m_dwXPValue;  /* offset: 64 */
    uint16_t m_wdLevel;  /* offset: 68 */
    uint32_t m_dwClan;  /* offset: 72 */
    uint8_t m_byStanceID;  /* offset: 76 */
    uint16_t m_wdAnimStanceID;  /* offset: 78 */
    uint16_t m_wdPowerID1;  /* offset: 80 */
    uint8_t m_byPowerRank1;  /* offset: 82 */
    uint16_t m_wdPowerID2;  /* offset: 84 */
    uint8_t m_byPowerRank2;  /* offset: 86 */
    uint16_t m_wdPowerID3;  /* offset: 88 */
    uint8_t m_byPowerRank3;  /* offset: 90 */
    uint16_t m_wdPowerID4;  /* offset: 92 */
    uint8_t m_byPowerRank4;  /* offset: 94 */
    uint16_t m_wdPowerID5;  /* offset: 96 */
    uint8_t m_byPowerRank5;  /* offset: 98 */
    uint16_t m_wdPowerID6;  /* offset: 100 */
    uint8_t m_byPowerRank6;  /* offset: 102 */
    uint16_t m_wdPowerID7;  /* offset: 104 */
    uint8_t m_byPowerRank7;  /* offset: 106 */
    uint16_t m_wdPowerID8;  /* offset: 108 */
    uint8_t m_byPowerRank8;  /* offset: 110 */
    uint16_t m_wdPowerID9;  /* offset: 112 */
    uint8_t m_byPowerRank9;  /* offset: 114 */
    uint16_t m_wdPowerID10;  /* offset: 116 */
    uint8_t m_byPowerRank10;  /* offset: 118 */
    uint16_t m_wdTreasureTableID;  /* offset: 120 */
    uint8_t m_byInvisible;  /* offset: 122 */
    uint8_t m_byAggressiveFlag;  /* offset: 123 */
    uint16_t m_wdRetreatHitPoints;  /* offset: 124 */
    uint16_t m_wdAggroValue;  /* offset: 126 */
    uint8_t m_byScanOption;  /* offset: 128 */
    uint8_t m_byPowerMultiplier;  /* offset: 129 */
    uint8_t m_byMeleeMultiplier;  /* offset: 130 */
    uint8_t m_byRangeMultiplier;  /* offset: 131 */
    uint8_t m_byReturnFlag;  /* offset: 132 */
    uint16_t m_wdChallengeLevel;  /* offset: 134 */
    uint32_t m_dwScriptID;  /* offset: 136 */
    uint32_t m_dwNameID;  /* offset: 140 */
    uint8_t m_byTargetType;  /* offset: 144 */
    uint8_t m_byMeleePerc;  /* offset: 145 */
    uint8_t m_byPowerPerc1;  /* offset: 146 */
    uint8_t m_byPowerPerc2;  /* offset: 147 */
    uint8_t m_byPowerPerc3;  /* offset: 148 */
    uint8_t m_byPowerPerc4;  /* offset: 149 */
    uint8_t m_byPowerPerc5;  /* offset: 150 */
    uint8_t m_byPowerPerc6;  /* offset: 151 */
    uint8_t m_byPowerPerc7;  /* offset: 152 */
    uint8_t m_byPowerPerc8;  /* offset: 153 */
    uint8_t m_byPowerPerc9;  /* offset: 154 */
    uint8_t m_byPowerPerc10;  /* offset: 155 */
    uint8_t m_byIsGuard;  /* offset: 156 */
    uint8_t m_byHalfMoveRate;  /* offset: 157 */
    uint16_t m_wdMeleeRange;  /* offset: 158 */
    uint16_t m_wdPowerRange1;  /* offset: 160 */
    uint16_t m_wdPowerRange2;  /* offset: 162 */
    uint16_t m_wdPowerRange3;  /* offset: 164 */
    uint16_t m_wdPowerRange4;  /* offset: 166 */
    uint16_t m_wdPowerRange5;  /* offset: 168 */
    uint16_t m_wdPowerRange6;  /* offset: 170 */
    uint16_t m_wdPowerRange7;  /* offset: 172 */
    uint16_t m_wdPowerRange8;  /* offset: 174 */
    uint16_t m_wdPowerRange9;  /* offset: 176 */
    uint16_t m_wdPowerRange10;  /* offset: 178 */
    uint16_t m_wdEffectID;  /* offset: 180 */
    uint16_t m_wdScanAreaRange;  /* offset: 182 */
    uint8_t m_byDoClanRating;  /* offset: 184 */
    uint8_t m_byEnemyClan;  /* offset: 185 */
    uint8_t m_byUpValue;  /* offset: 186 */
    uint8_t m_byDownValue;  /* offset: 187 */
    uint8_t m_byIsSNPC;  /* offset: 188 */
    uint8_t m_byInvisiblePerc;  /* offset: 189 */
    uint8_t m_byMaxItemCount;  /* offset: 190 */
    uint8_t m_byPermanentDeath;  /* offset: 191 */
    uint8_t m_byIsDead;  /* offset: 192 */
    uint16_t m_sWeaponSpeed;  /* offset: 194 */
    uint16_t m_sStunResist;  /* offset: 916 */
    uint16_t m_sSlowResist;  /* offset: 918 */
    uint16_t m_sEntangledResist;  /* offset: 920 */
    uint32_t m_dwAggroRate;  /* offset: 924 */
    uint16_t m_wdDetectHiddenRate;  /* offset: 928 */
    uint8_t m_byCallHelpRatio;  /* offset: 930 */
    uint16_t m_wdCombatTimeout;  /* offset: 932 */
    uint8_t m_bySplitChance;  /* offset: 934 */
    uint8_t m_bySplitDamageWeakness;  /* offset: 935 */
    uint8_t m_bySplitMax;  /* offset: 936 */
    uint32_t m_dwSplitID;  /* offset: 940 */
    uint16_t m_wdSplitFX;  /* offset: 944 */
    uint8_t m_bySpawnChildChance;  /* offset: 946 */
    uint32_t m_dwSpawnChildID;  /* offset: 948 */
    uint16_t m_wdSpawnChildAnim;  /* offset: 952 */
    uint32_t m_dwBossID;  /* offset: 956 */
    uint16_t m_wdBossFXID;  /* offset: 960 */
    uint8_t m_byScatterChance;  /* offset: 962 */
    uint8_t m_byScatterDamageWeakness;  /* offset: 963 */
    uint8_t m_byScatterMax;  /* offset: 964 */
    uint32_t m_dwScatterID;  /* offset: 968 */
    uint16_t m_wdScatterFXID;  /* offset: 972 */
    uint16_t m_wdEaterThreshold;  /* offset: 974 */
    uint8_t m_byEaterChance;  /* offset: 976 */
    uint16_t m_wdEaterRange;  /* offset: 978 */
    uint32_t m_dwEaterID;  /* offset: 980 */
    uint16_t m_wdEaterHPGain;  /* offset: 984 */
    uint16_t m_wdEaterAnim;  /* offset: 986 */
    uint8_t m_byPowerType1;  /* offset: 988 */
    uint8_t m_byPowerType2;  /* offset: 989 */
    uint8_t m_byPowerType3;  /* offset: 990 */
    uint8_t m_byPowerType4;  /* offset: 991 */
    uint8_t m_byPowerType5;  /* offset: 992 */
    uint8_t m_byPowerType6;  /* offset: 993 */
    uint8_t m_byPowerType7;  /* offset: 994 */
    uint8_t m_byPowerType8;  /* offset: 995 */
    uint8_t m_byPowerType9;  /* offset: 996 */
    uint8_t m_byPowerType10;  /* offset: 997 */
    uint32_t m_dwScanScriptID;  /* offset: 1000 */
    uint8_t m_byCheckDelete;  /* offset: 1004 */
    uint8_t m_byInvisibilityPerc;  /* offset: 1005 */
    uint32_t m_dwCheckNPCScriptID;  /* offset: 1008 */
    uint8_t m_byMoveAwayPerc;  /* offset: 1012 */
    uint8_t m_byLure;  /* offset: 1013 */
    uint8_t m_bySwarm;  /* offset: 1014 */
    uint32_t m_dwCallForHelpID;  /* offset: 1016 */
    uint8_t m_byPersistent;  /* offset: 1020 */
    uint32_t m_dwTargetLostID;  /* offset: 1024 */
    uint32_t m_dwArrivedID;  /* offset: 1028 */
    uint8_t m_byBodyGuard;  /* offset: 1032 */
    uint8_t m_byAOEHunter;  /* offset: 1033 */
    uint32_t m_dwAttackScriptID;  /* offset: 1036 */
    uint32_t m_dwStuckScriptID;  /* offset: 1040 */
    uint8_t m_byNPCCheckOW;  /* offset: 1044 */
    uint8_t m_byCallForHelpOW;  /* offset: 1045 */
    uint32_t m_dwRangeCheckID;  /* offset: 1048 */
    uint8_t m_byRangeCheckOW;  /* offset: 1052 */
    uint8_t m_byAttackScriptOW;  /* offset: 1053 */
    uint32_t m_dwPowerScriptID;  /* offset: 1056 */
    uint8_t m_byPowerScriptOW;  /* offset: 1060 */
    uint32_t m_dwProperties;  /* offset: 1064 */
    uint16_t m_wdIdleTime;  /* offset: 1068 */
    uint8_t m_byBreakSprint;  /* offset: 1070 */
    uint8_t m_byHitFilter;  /* offset: 1071 */
    uint8_t m_byRotate;  /* offset: 1072 */
    uint16_t m_wdLureRadius;  /* offset: 1074 */
} CNPCAttribute;

/* Size: 20 bytes */
typedef struct _TargetInfo {
    uint8_t m_bAllocated;  /* offset: 0 */
    uint32_t m_dwID;  /* offset: 4 */
    uint32_t m_dwDamage;  /* offset: 8 */
    uint32_t m_dwPartyID;  /* offset: 12 */
    uint8_t m_byAOE;  /* offset: 16 */
} TargetInfo;

/* Size: 12 bytes */
typedef struct _BPoint {
    uint32_t dwTickPass;  /* offset: 0 */
    uint32_t dwIndexFrom;  /* offset: 4 */
    uint32_t dwIndexTo;  /* offset: 8 */
} BPoint;

/* Size: 2968 bytes */
typedef struct _NPCInfo {
    uint8_t npc_mutex;  /* offset: 0 */
    uint8_t targetlist;  /* offset: 24 */
    uint8_t m_cEffectElements;  /* offset: 568 */
    uint8_t m_dwInvID;  /* offset: 1288 */
    uint8_t m_byInvCnt;  /* offset: 1352 */
    uint8_t m_dwComponent;  /* offset: 1368 */
    uint8_t m_byHardness;  /* offset: 1688 */
    uint8_t m_byDurability;  /* offset: 1704 */
    uint32_t m_iTargetCount;  /* offset: 1720 */
    uint8_t m_byBlockCount;  /* offset: 1724 */
    uint32_t m_dwMaxDamage;  /* offset: 1728 */
    uint8_t m_byMaxIndex;  /* offset: 1732 */
    uint32_t m_dwMinDamage;  /* offset: 1736 */
    uint8_t m_byMinIndex;  /* offset: 1740 */
    uint32_t m_dwNPCType;  /* offset: 1744 */
    uint8_t m_byState;  /* offset: 1748 */
    uint32_t m_dwCurrentHitPoints;  /* offset: 1752 */
    uint8_t m_byScratchData;  /* offset: 1756 */
    uint8_t m_byAttackType;  /* offset: 2268 */
    uint32_t m_dwAttackTimeStamp;  /* offset: 2272 */
    uint32_t m_dwSpawnIndex;  /* offset: 2276 */
    uint32_t m_dwSuicideTimeStamp;  /* offset: 2280 */
    uint32_t m_dwDeadTimeStamp;  /* offset: 2284 */
    uint32_t m_dwMoveIntervalTimeStamp;  /* offset: 2288 */
    uint8_t m_bAllocated;  /* offset: 2292 */
    uint8_t m_bInFight;  /* offset: 2293 */
    uint8_t m_cDstVector;  /* offset: 2296 */
    uint16_t m_wdRange;  /* offset: 2308 */
    uint32_t m_dwPrevTargetID;  /* offset: 2312 */
    uint32_t m_dwCurrentTargetID;  /* offset: 2316 */
    uint8_t m_bOnWayPointTransit;  /* offset: 2320 */
    uint32_t m_dwEnemyScanTick;  /* offset: 2324 */
    uint8_t m_bToggleAggression;  /* offset: 2328 */
    uint32_t m_dwTreasureTableID;  /* offset: 2332 */
    uint8_t m_byAttackState;  /* offset: 2336 */
    uint8_t m_byActiveCombat;  /* offset: 2337 */
    uint8_t m_byCombatState;  /* offset: 2338 */
    uint8_t m_byMoveState;  /* offset: 2339 */
    uint8_t m_byEnemyScanState;  /* offset: 2340 */
    uint8_t m_byQuad;  /* offset: 2341 */
    uint8_t m_byEdge;  /* offset: 2342 */
    uint16_t m_wdStanceID;  /* offset: 2344 */
    uint32_t m_dwKillerID;  /* offset: 2348 */
    uint8_t m_bScanNow;  /* offset: 2352 */
    uint8_t m_byLootFlag;  /* offset: 2353 */
    uint8_t m_byForceRetreatState;  /* offset: 2354 */
    uint32_t m_dwPosTrackTick;  /* offset: 2356 */
    uint8_t m_cConfirmTargetVect;  /* offset: 2360 */
    uint8_t m_bDecideAttack;  /* offset: 2372 */
    uint32_t m_dwPrevTick;  /* offset: 2376 */
    uint32_t m_dwCurrTick;  /* offset: 2380 */
    uint32_t m_dwCheckTick;  /* offset: 2384 */
    uint32_t m_cWayPath;  /* offset: 2388 */
    uint32_t m_dwPathFindIndex;  /* offset: 2392 */
    uint8_t m_bPriortyTarget;  /* offset: 2396 */
    uint32_t m_dwPriortyTargetID;  /* offset: 2400 */
    uint8_t m_bForceRetreat;  /* offset: 2404 */
    uint8_t m_bIsLoot;  /* offset: 2405 */
    uint32_t m_dwCombatWayPointTick;  /* offset: 2408 */
    uint8_t m_byPosTrackCount;  /* offset: 2532 */
    uint8_t m_byDoGrav;  /* offset: 2533 */
    uint8_t m_cFalseVector;  /* offset: 2536 */
    uint8_t m_cPrevTargetVector;  /* offset: 2548 */
    uint8_t m_byPossessed;  /* offset: 2560 */
    uint32_t m_pSelf;  /* offset: 2564 */
    uint8_t m_bOnTarget;  /* offset: 2568 */
    uint32_t m_ptrSlot;  /* offset: 2576 */
    uint8_t m_bySlotID;  /* offset: 2580 */
    uint8_t m_byCombatMoveState;  /* offset: 2581 */
    uint8_t m_cCombatStartPoint;  /* offset: 2584 */
    uint8_t m_byInvisible;  /* offset: 2596 */
    uint8_t m_byCurrentItemCount;  /* offset: 2597 */
    uint8_t m_dwNPCCounter;  /* offset: 2598 */
    uint8_t m_byLootCount;  /* offset: 2599 */
    uint8_t m_bIsCalled;  /* offset: 2600 */
    uint8_t m_bActivateCalled;  /* offset: 2601 */
    uint8_t m_bActivateCalled2;  /* offset: 2602 */
    uint32_t m_dwQuestOwner;  /* offset: 2604 */
    uint8_t m_byNoDeath;  /* offset: 2608 */
    uint8_t m_byKillNow;  /* offset: 2609 */
    uint32_t m_iPathType;  /* offset: 2612 */
    uint8_t m_byRemoveMode;  /* offset: 2616 */
    uint8_t m_bIsClicked;  /* offset: 2617 */
    uint8_t m_bIndiSpawn;  /* offset: 2618 */
    uint8_t m_cNoSpCoord;  /* offset: 2620 */
    uint16_t m_wdNoSpRad;  /* offset: 2632 */
    uint8_t m_bDoFly;  /* offset: 2634 */
    uint32_t m_dwActiveScanTick;  /* offset: 2636 */
    uint8_t m_byDoDropLoot;  /* offset: 2640 */
    uint8_t m_cVector;  /* offset: 2644 */
    uint8_t m_byKeepRange;  /* offset: 2656 */
    uint32_t m_fRange;  /* offset: 2660 */
    uint8_t m_byMoveType;  /* offset: 2664 */
    uint32_t m_dwCharID;  /* offset: 2668 */
    uint8_t m_byMovementStatus;  /* offset: 2672 */
    uint8_t m_bStateSwitched;  /* offset: 2673 */
    uint8_t m_dwInstanceIndex;  /* offset: 2674 */
    uint32_t m_dwCombatLastTick;  /* offset: 2676 */
    uint32_t m_dwSelfTarget;  /* offset: 2680 */
    uint8_t m_dwScanList;  /* offset: 2684 */
    uint32_t m_iScanCounter;  /* offset: 2884 */
    uint8_t m_bChangeSpeed;  /* offset: 2888 */
    uint8_t m_dwCallForHelpList;  /* offset: 2892 */
    uint32_t m_dwSecondaryTargetID;  /* offset: 2932 */
    uint32_t m_dwIdleTime;  /* offset: 2936 */
    uint8_t m_bRunScript;  /* offset: 2940 */
    uint16_t m_sFireResistCache;  /* offset: 2942 */
    uint16_t m_sColdResistCache;  /* offset: 2944 */
    uint16_t m_sLightningResistCache;  /* offset: 2946 */
    uint16_t m_sPoisonResistCache;  /* offset: 2948 */
    uint16_t m_sPhysicalResistCache;  /* offset: 2950 */
    uint32_t m_dwAttackCache;  /* offset: 2952 */
    uint32_t m_dwDefenseCache;  /* offset: 2956 */
    uint8_t m_bDoRemove;  /* offset: 2960 */
    uint8_t m_byMoveMode;  /* offset: 2961 */
    uint32_t m_dwTargetID;  /* offset: 2964 */
} NPCInfo;

/* Size: 8 bytes */
typedef struct _NPCGroupInfo {
    uint32_t m_pcNPCList;  /* offset: 4 */
} NPCGroupInfo;

/* Size: 4304008 bytes */
typedef struct _CNPCAttAccess {
    uint32_t m_pMemAccess;  /* offset: 4304000 */
    uint32_t m_pcNPCs;  /* offset: 4304004 */
} CNPCAttAccess;

/* Size: 32 bytes */
typedef struct _CSpawnMgr {
    uint8_t spawnmgr_mutex;  /* offset: 4 */
    uint32_t m_pcSpawnPt;  /* offset: 28 */
} CSpawnMgr;

/* Size: 16 bytes */
typedef struct _stLoc {
    uint8_t cVectPos;  /* offset: 0 */
    uint8_t byQuad;  /* offset: 12 */
    uint8_t byEdge;  /* offset: 13 */
} stLoc;

/* Size: 108 bytes */
typedef struct _stAttackerInfo {
    uint32_t dwTargetID;  /* offset: 0 */
    uint8_t dwAttacker;  /* offset: 4 */
    uint8_t attacker_mutex;  /* offset: 84 */
} stAttackerInfo;

/* Size: 16034008 bytes */
typedef struct _CAI {
    uint8_t m_pcPartnerList;  /* offset: 196808 */
    uint64_t m_cNPCS;  /* offset: 5629576 */
    uint8_t m_NPCFixedAtt;  /* offset: 5629584 */
    uint8_t m_cSpawnMgr;  /* offset: 9933592 */
    uint8_t m_cWayPointSceneMgr;  /* offset: 9933624 */
    uint32_t m_pcTargetList;  /* offset: 9966400 */
    uint64_t m_cPoolMgr;  /* offset: 10031940 */
    uint8_t m_cSharedData;  /* offset: 10031948 */
    uint8_t spawnpt_mutex;  /* offset: 10033556 */
    uint8_t npc_mutex;  /* offset: 10033580 */
    uint8_t npcaggro_mutex;  /* offset: 10033604 */
    uint8_t callforhelp_mutex;  /* offset: 10033628 */
    uint32_t m_dwCallForHelpTimer;  /* offset: 10033652 */
    uint8_t m_cLogClient;  /* offset: 10033656 */
    uint32_t m_iStatus;  /* offset: 16033960 */
    uint32_t fExit;  /* offset: 16033964 */
    uint32_t m_iALog;  /* offset: 16033968 */
    uint8_t m_bNPCExt;  /* offset: 16033972 */
    uint32_t m_dwScriptCount;  /* offset: 16033976 */
    uint32_t m_pSceneMgr;  /* offset: 16033980 */
    uint8_t ai_mutex;  /* offset: 16033984 */
} CAI;

/* Size: 264 bytes */
typedef struct _ZoneInformation {
    uint32_t iZoneID;  /* offset: 0 */
    uint8_t chSceneFile;  /* offset: 4 */
    uint32_t iSceneVer;  /* offset: 260 */
} ZoneInformation;

/* Size: 20 bytes */
typedef struct _Params {
    uint8_t dwParam;  /* offset: 0 */
} Params;

/* Size: 8 bytes */
typedef struct _AttribValues {
    uint32_t lValue1;  /* offset: 0 */
    uint32_t lValue2;  /* offset: 4 */
} AttribValues;

/* Size: 84 bytes */
typedef struct _Binding {
    uint8_t chFunctionName;  /* offset: 0 */
} Binding;

/* Size: 16 bytes */
typedef struct _nodeTag {
    void* pNext;  /* offset: 0 */
    uint64_t hKey;  /* offset: 4 */
    uint32_t Data;  /* offset: 12 */
} nodeTag;

/* Size: 16 bytes */
typedef struct _nodeTag {
    void* pNext;  /* offset: 0 */
    uint64_t hKey;  /* offset: 4 */
    uint32_t Data;  /* offset: 12 */
} nodeTag;

/* Size: 16 bytes */
typedef struct _nodeTag {
    void* pNext;  /* offset: 0 */
    uint64_t hKey;  /* offset: 4 */
    uint32_t Data;  /* offset: 12 */
} nodeTag;

/* Size: 16 bytes */
typedef struct _nodeTag {
    void* pNext;  /* offset: 0 */
    uint64_t hKey;  /* offset: 4 */
    uint32_t Data;  /* offset: 12 */
} nodeTag;

/* Size: 16 bytes */
typedef struct _nodeTag {
    void* pNext;  /* offset: 0 */
    uint64_t hKey;  /* offset: 4 */
    uint32_t Data;  /* offset: 12 */
} nodeTag;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 16 bytes */
typedef struct _nodeTag {
    void* pNext;  /* offset: 0 */
    uint64_t hKey;  /* offset: 4 */
    uint32_t Data;  /* offset: 12 */
} nodeTag;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 4 bytes */
typedef struct _CWayPtIndex {
    uint32_t m_dwIndex;  /* offset: 0 */
} CWayPtIndex;

/* Size: 16 bytes */
typedef struct _CPathStackNode {
    uint32_t m_dwIndex;  /* offset: 0 */
    uint32_t m_fCost;  /* offset: 4 */
    uint32_t m_dwWayPtCnt;  /* offset: 8 */
    uint32_t m_pdwWayPtIndices;  /* offset: 12 */
} CPathStackNode;

/* Size: 4 bytes */
typedef struct _CSetStack {
    uint32_t m_dwIndex;  /* offset: 0 */
} CSetStack;

/* Size: 20 bytes */
typedef struct _stack_st {
    uint32_t num;  /* offset: 0 */
    uint32_t sorted;  /* offset: 8 */
    uint32_t num_alloc;  /* offset: 12 */
} stack_st;

/* Size: 8 bytes */
typedef struct _crypto_ex_data_st {
    uint32_t dummy;  /* offset: 4 */
} crypto_ex_data_st;

/* Size: 20 bytes */
typedef struct _crypto_ex_data_func_st {
    uint32_t argl;  /* offset: 0 */
    uint32_t argp;  /* offset: 4 */
} crypto_ex_data_func_st;

/* Size: 32 bytes */
typedef struct _comp_method_st {
    uint32_t type;  /* offset: 0 */
    uint32_t name;  /* offset: 4 */
    uint32_t compress;  /* offset: 16 */
    uint32_t expand;  /* offset: 20 */
    uint32_t callback_ctrl;  /* offset: 28 */
} comp_method_st;

/* Size: 28 bytes */
typedef struct _comp_ctx_st {
    uint32_t compress_in;  /* offset: 4 */
    uint32_t compress_out;  /* offset: 8 */
    uint32_t expand_in;  /* offset: 12 */
    uint32_t expand_out;  /* offset: 16 */
    uint64_t ex_data;  /* offset: 20 */
} comp_ctx_st;

/* Size: 40 bytes */
typedef struct _bio_method_st {
    uint32_t type;  /* offset: 0 */
    uint32_t name;  /* offset: 4 */
    uint32_t bgets;  /* offset: 20 */
    uint32_t destroy;  /* offset: 32 */
} bio_method_st;

/* Size: 64 bytes */
typedef struct _bio_st {
    uint32_t cb_arg;  /* offset: 8 */
    uint32_t init;  /* offset: 12 */
    uint32_t shutdown;  /* offset: 16 */
    uint32_t flags;  /* offset: 20 */
    uint32_t retry_reason;  /* offset: 24 */
    uint32_t num;  /* offset: 28 */
    void* ptr;  /* offset: 32 */
    void* prev_bio;  /* offset: 40 */
    uint32_t references;  /* offset: 44 */
    uint32_t num_read;  /* offset: 48 */
    uint32_t num_write;  /* offset: 52 */
    uint64_t ex_data;  /* offset: 56 */
} bio_st;

/* Size: 32 bytes */
typedef struct _bio_f_buffer_ctx_struct {
    uint32_t ibuf_size;  /* offset: 0 */
    uint32_t obuf_size;  /* offset: 4 */
    uint32_t ibuf;  /* offset: 8 */
    uint32_t ibuf_len;  /* offset: 12 */
    uint32_t ibuf_off;  /* offset: 16 */
    uint32_t obuf;  /* offset: 20 */
    uint32_t obuf_len;  /* offset: 24 */
    uint32_t obuf_off;  /* offset: 28 */
} bio_f_buffer_ctx_struct;

/* Size: 12 bytes */
typedef struct _buf_mem_st {
    uint32_t length;  /* offset: 0 */
    uint32_t data;  /* offset: 4 */
    uint32_t max;  /* offset: 8 */
} buf_mem_st;

/* Size: 148 bytes */
typedef struct _MD2state_st {
    uint32_t num;  /* offset: 0 */
    uint8_t state;  /* offset: 84 */
} MD2state_st;

/* Size: 92 bytes */
typedef struct _MD4state_st {
    uint32_t A;  /* offset: 0 */
    uint32_t B;  /* offset: 4 */
    uint32_t C;  /* offset: 8 */
    uint32_t D;  /* offset: 12 */
    uint32_t Nl;  /* offset: 16 */
    uint32_t Nh;  /* offset: 20 */
    uint8_t data;  /* offset: 24 */
    uint32_t num;  /* offset: 88 */
} MD4state_st;

/* Size: 92 bytes */
typedef struct _MD5state_st {
    uint32_t A;  /* offset: 0 */
    uint32_t B;  /* offset: 4 */
    uint32_t C;  /* offset: 8 */
    uint32_t D;  /* offset: 12 */
    uint32_t Nl;  /* offset: 16 */
    uint32_t Nh;  /* offset: 20 */
    uint8_t data;  /* offset: 24 */
    uint32_t num;  /* offset: 88 */
} MD5state_st;

/* Size: 96 bytes */
typedef struct _SHAstate_st {
    uint32_t h0;  /* offset: 0 */
    uint32_t h1;  /* offset: 4 */
    uint32_t h2;  /* offset: 8 */
    uint32_t h3;  /* offset: 12 */
    uint32_t h4;  /* offset: 16 */
    uint32_t Nl;  /* offset: 20 */
    uint32_t Nh;  /* offset: 24 */
    uint8_t data;  /* offset: 28 */
    uint32_t num;  /* offset: 92 */
} SHAstate_st;

/* Size: 96 bytes */
typedef struct _RIPEMD160state_st {
    uint32_t A;  /* offset: 0 */
    uint32_t B;  /* offset: 4 */
    uint32_t C;  /* offset: 8 */
    uint32_t D;  /* offset: 12 */
    uint32_t E;  /* offset: 16 */
    uint32_t Nl;  /* offset: 20 */
    uint32_t Nh;  /* offset: 24 */
    uint8_t data;  /* offset: 28 */
    uint32_t num;  /* offset: 92 */
} RIPEMD160state_st;

/* Size: 12 bytes */
typedef struct _des_ks_struct {
    uint64_t u8cblock;  /* offset: 0 */
    uint32_t weak_key;  /* offset: 8 */
} des_ks_struct;

/* Size: 1032 bytes */
typedef struct _rc4_key_st {
    uint32_t x;  /* offset: 0 */
    uint32_t y;  /* offset: 4 */
} rc4_key_st;

/* Size: 132 bytes */
typedef struct _cast_key_st {
    uint8_t data;  /* offset: 0 */
    uint32_t short_key;  /* offset: 128 */
} cast_key_st;

/* Size: 20 bytes */
typedef struct _bignum_st {
    uint32_t top;  /* offset: 4 */
    uint32_t dmax;  /* offset: 8 */
    uint32_t neg;  /* offset: 12 */
    uint32_t flags;  /* offset: 16 */
} bignum_st;

/* Size: 384 bytes */
typedef struct _bignum_ctx {
    uint32_t tos;  /* offset: 0 */
    uint32_t flags;  /* offset: 324 */
    uint32_t depth;  /* offset: 328 */
    uint32_t too_many;  /* offset: 380 */
} bignum_ctx;

/* Size: 16 bytes */
typedef struct _bn_blinding_st {
    uint32_t init;  /* offset: 0 */
    uint32_t Ai;  /* offset: 8 */
    uint32_t mod;  /* offset: 12 */
} bn_blinding_st;

/* Size: 72 bytes */
typedef struct _bn_mont_ctx_st {
    uint32_t ri;  /* offset: 0 */
    uint8_t RR;  /* offset: 4 */
    uint8_t N;  /* offset: 24 */
    uint8_t Ni;  /* offset: 44 */
    uint32_t n0;  /* offset: 64 */
    uint32_t flags;  /* offset: 68 */
} bn_mont_ctx_st;

/* Size: 52 bytes */
typedef struct _bn_recp_ctx_st {
    uint8_t N;  /* offset: 0 */
    uint8_t Nr;  /* offset: 20 */
    uint32_t num_bits;  /* offset: 40 */
    uint32_t shift;  /* offset: 44 */
    uint32_t flags;  /* offset: 48 */
} bn_recp_ctx_st;

/* Size: 52 bytes */
typedef struct _rsa_meth_st {
    uint32_t name;  /* offset: 0 */
    uint32_t rsa_pub_dec;  /* offset: 8 */
    uint32_t rsa_priv_enc;  /* offset: 12 */
    uint32_t rsa_priv_dec;  /* offset: 16 */
    uint32_t finish;  /* offset: 32 */
    uint32_t flags;  /* offset: 36 */
    uint32_t app_data;  /* offset: 40 */
} rsa_meth_st;

/* Size: 80 bytes */
typedef struct _rsa_st {
    void* pad;  /* offset: 0 */
    uint32_t version;  /* offset: 4 */
    uint32_t n;  /* offset: 12 */
    uint32_t e;  /* offset: 16 */
    uint32_t d;  /* offset: 20 */
    uint32_t p;  /* offset: 24 */
    uint32_t q;  /* offset: 28 */
    uint32_t dmp1;  /* offset: 32 */
    uint32_t dmq1;  /* offset: 36 */
    uint32_t iqmp;  /* offset: 40 */
    uint64_t ex_data;  /* offset: 44 */
    uint32_t references;  /* offset: 52 */
    uint32_t flags;  /* offset: 56 */
    uint32_t _method_mod_p;  /* offset: 64 */
    uint32_t _method_mod_q;  /* offset: 68 */
    uint32_t bignum_data;  /* offset: 72 */
} rsa_st;

/* Size: 32 bytes */
typedef struct _dh_method {
    uint32_t name;  /* offset: 0 */
    uint32_t init;  /* offset: 16 */
    uint32_t finish;  /* offset: 20 */
    uint32_t flags;  /* offset: 24 */
    uint32_t app_data;  /* offset: 28 */
} dh_method;

/* Size: 72 bytes */
typedef struct _dh_st {
    void* pad;  /* offset: 0 */
    uint32_t version;  /* offset: 4 */
    uint32_t p;  /* offset: 8 */
    uint32_t g;  /* offset: 12 */
    uint32_t length;  /* offset: 16 */
    void* pub_key;  /* offset: 20 */
    void* priv_key;  /* offset: 24 */
    uint32_t flags;  /* offset: 28 */
    uint32_t method_mont_p;  /* offset: 32 */
    uint32_t q;  /* offset: 36 */
    uint32_t j;  /* offset: 40 */
    uint32_t seed;  /* offset: 44 */
    uint32_t seedlen;  /* offset: 48 */
    uint32_t counter;  /* offset: 52 */
    uint32_t references;  /* offset: 56 */
    uint64_t ex_data;  /* offset: 60 */
} dh_st;

/* Size: 8 bytes */
typedef struct _DSA_SIG_st {
    uint32_t r;  /* offset: 0 */
    uint32_t s;  /* offset: 4 */
} DSA_SIG_st;

/* Size: 40 bytes */
typedef struct _dsa_method {
    uint32_t name;  /* offset: 0 */
    uint32_t finish;  /* offset: 28 */
    uint32_t flags;  /* offset: 32 */
    uint32_t app_data;  /* offset: 36 */
} dsa_method;

/* Size: 64 bytes */
typedef struct _dsa_st {
    void* pad;  /* offset: 0 */
    uint32_t version;  /* offset: 4 */
    uint32_t write_params;  /* offset: 8 */
    uint32_t p;  /* offset: 12 */
    uint32_t q;  /* offset: 16 */
    uint32_t g;  /* offset: 20 */
    void* pub_key;  /* offset: 24 */
    void* priv_key;  /* offset: 28 */
    uint32_t kinv;  /* offset: 32 */
    uint32_t r;  /* offset: 36 */
    uint32_t flags;  /* offset: 40 */
    uint32_t method_mont_p;  /* offset: 44 */
    uint32_t references;  /* offset: 48 */
    uint64_t ex_data;  /* offset: 52 */
} dsa_st;

/* Size: 44 bytes */
typedef struct _asn1_ctx_st {
    uint32_t p;  /* offset: 0 */
    uint32_t eos;  /* offset: 4 */
    uint32_t error;  /* offset: 8 */
    uint32_t inf;  /* offset: 12 */
    uint32_t tag;  /* offset: 16 */
    uint32_t xclass;  /* offset: 20 */
    uint32_t slen;  /* offset: 24 */
    uint32_t max;  /* offset: 28 */
    uint32_t q;  /* offset: 32 */
    uint32_t line;  /* offset: 40 */
} asn1_ctx_st;

/* Size: 24 bytes */
typedef struct _asn1_object_st {
    uint32_t sn;  /* offset: 0 */
    uint32_t ln;  /* offset: 4 */
    uint32_t nid;  /* offset: 8 */
    uint32_t length;  /* offset: 12 */
    uint32_t data;  /* offset: 16 */
    uint32_t flags;  /* offset: 20 */
} asn1_object_st;

/* Size: 16 bytes */
typedef struct _asn1_string_st {
    uint32_t length;  /* offset: 0 */
    uint32_t type;  /* offset: 4 */
    uint32_t data;  /* offset: 8 */
    uint32_t flags;  /* offset: 12 */
} asn1_string_st;

/* Size: 20 bytes */
typedef struct _asn1_string_table_st {
    uint32_t nid;  /* offset: 0 */
    uint32_t minsize;  /* offset: 4 */
    uint32_t maxsize;  /* offset: 8 */
    uint32_t mask;  /* offset: 12 */
    uint32_t flags;  /* offset: 16 */
} asn1_string_table_st;

/* Size: 8 bytes */
typedef struct _asn1_type_st {
    uint32_t set;  /* offset: 0 */
    uint32_t sequence;  /* offset: 0 */
    uint32_t boolean;  /* offset: 0 */
    uint32_t type;  /* offset: 0 */
    uint32_t u4ptr;  /* offset: 0 */
} asn1_type_st;

/* Size: 16 bytes */
typedef struct _asn1_method_st {
    uint32_t i2d;  /* offset: 0 */
    uint32_t create;  /* offset: 8 */
    uint32_t destroy;  /* offset: 12 */
} asn1_method_st;

/* Size: 12 bytes */
typedef struct _asn1_header_st {
    uint32_t header;  /* offset: 0 */
    uint32_t data;  /* offset: 4 */
} asn1_header_st;

/* Size: 12 bytes */
typedef struct _BIT_STRING_BITNAME_st {
    uint32_t bitnum;  /* offset: 0 */
    uint32_t lname;  /* offset: 4 */
    uint32_t sname;  /* offset: 8 */
} BIT_STRING_BITNAME_st;

/* Size: 16 bytes */
typedef struct _obj_name_st {
    uint32_t type;  /* offset: 0 */
    uint32_t alias;  /* offset: 4 */
    uint32_t name;  /* offset: 8 */
    uint32_t data;  /* offset: 12 */
} obj_name_st;

/* Size: 24 bytes */
typedef struct _evp_pkey_st {
    uint32_t rsa;  /* offset: 0 */
    uint32_t dsa;  /* offset: 0 */
    uint32_t dh;  /* offset: 0 */
    uint32_t u4ptr;  /* offset: 0 */
    uint32_t type;  /* offset: 0 */
    uint32_t save_type;  /* offset: 4 */
    uint32_t references;  /* offset: 8 */
    uint32_t save_parameters;  /* offset: 16 */
    uint32_t attributes;  /* offset: 20 */
} evp_pkey_st;

/* Size: 60 bytes */
typedef struct _env_md_st {
    uint32_t type;  /* offset: 0 */
    void* pkey_type;  /* offset: 4 */
    uint32_t md_size;  /* offset: 8 */
    uint32_t init;  /* offset: 12 */
    uint32_t update;  /* offset: 16 */
    uint32_t final;  /* offset: 20 */
    uint32_t sign;  /* offset: 24 */
    uint32_t verify;  /* offset: 28 */
    uint32_t block_size;  /* offset: 52 */
    uint32_t ctx_size;  /* offset: 56 */
} env_md_st;

/* Size: 152 bytes */
typedef struct _env_md_ctx_st {
    uint8_t ripemd160;  /* offset: 0 */
    uint8_t sha;  /* offset: 0 */
    uint8_t md4;  /* offset: 0 */
    uint8_t md2;  /* offset: 0 */
    uint8_t md5;  /* offset: 0 */
} env_md_ctx_st;

/* Size: 52 bytes */
typedef struct _evp_cipher_st {
    uint32_t nid;  /* offset: 0 */
    uint32_t block_size;  /* offset: 4 */
    uint32_t key_len;  /* offset: 8 */
    uint32_t iv_len;  /* offset: 12 */
    uint32_t flags;  /* offset: 16 */
    uint32_t ctx_size;  /* offset: 32 */
    uint32_t get_asn1_parameters;  /* offset: 40 */
    uint32_t app_data;  /* offset: 48 */
} evp_cipher_st;

/* Size: 12 bytes */
typedef struct _evp_cipher_info_st {
    uint64_t iv;  /* offset: 4 */
} evp_cipher_info_st;

/* Size: 4216 bytes */
typedef struct _evp_cipher_ctx_st {
    uint8_t des_ks;  /* offset: 0 */
    uint8_t cast_ks;  /* offset: 0 */
    uint8_t s1048key;  /* offset: 0 */
    uint8_t s208ks;  /* offset: 0 */
    uint8_t bf_ks;  /* offset: 0 */
    uint32_t s260key_bits;  /* offset: 0 */
    uint8_t s576ks1;  /* offset: 0 */
    uint32_t cipher;  /* offset: 0 */
    uint8_t ks;  /* offset: 4 */
    uint32_t encrypt;  /* offset: 4 */
    uint32_t buf_len;  /* offset: 8 */
    uint64_t oiv;  /* offset: 12 */
    uint8_t ks;  /* offset: 16 */
    uint64_t iv;  /* offset: 20 */
    uint64_t buf;  /* offset: 28 */
    uint32_t num;  /* offset: 36 */
    uint32_t app_data;  /* offset: 40 */
    uint32_t key_len;  /* offset: 44 */
    uint64_t inw;  /* offset: 192 */
    uint8_t ks2;  /* offset: 192 */
    uint64_t outw;  /* offset: 200 */
    uint8_t ks3;  /* offset: 384 */
} evp_cipher_ctx_st;

/* Size: 96 bytes */
typedef struct _evp_Encode_Ctx_st {
    uint32_t num;  /* offset: 0 */
    uint32_t length;  /* offset: 4 */
    uint32_t line_num;  /* offset: 88 */
    uint32_t expect_nl;  /* offset: 92 */
} evp_Encode_Ctx_st;

/* Size: 12 bytes */
typedef struct _X509_objects_st {
    uint32_t nid;  /* offset: 0 */
    uint32_t a2i;  /* offset: 4 */
    uint32_t i2a;  /* offset: 8 */
} X509_objects_st;

/* Size: 8 bytes */
typedef struct _X509_algor_st {
    uint32_t algorithm;  /* offset: 0 */
} X509_algor_st;

/* Size: 8 bytes */
typedef struct _X509_val_st {
    uint32_t notAfter;  /* offset: 4 */
} X509_val_st;

/* Size: 12 bytes */
typedef struct _X509_pubkey_st {
    void* public_key;  /* offset: 4 */
} X509_pubkey_st;

/* Size: 8 bytes */
typedef struct _X509_sig_st {
    uint32_t algor;  /* offset: 0 */
    uint32_t digest;  /* offset: 4 */
} X509_sig_st;

/* Size: 16 bytes */
typedef struct _X509_name_entry_st {
    uint32_t object;  /* offset: 0 */
    uint32_t value;  /* offset: 4 */
    uint32_t set;  /* offset: 8 */
    uint32_t size;  /* offset: 12 */
} X509_name_entry_st;

/* Size: 16 bytes */
typedef struct _X509_name_st {
    uint32_t entries;  /* offset: 0 */
    uint32_t modified;  /* offset: 4 */
    uint32_t hash;  /* offset: 12 */
} X509_name_st;

/* Size: 20 bytes */
typedef struct _X509_extension_st {
    uint32_t object;  /* offset: 0 */
    uint16_t critical;  /* offset: 4 */
    uint16_t netscape_hack;  /* offset: 6 */
    uint32_t value;  /* offset: 8 */
    uint32_t ext_val;  /* offset: 16 */
} X509_extension_st;

/* Size: 12 bytes */
typedef struct _x509_attributes_st {
    uint32_t set;  /* offset: 0 */
    uint32_t single;  /* offset: 0 */
    uint32_t u4ptr;  /* offset: 0 */
    uint32_t object;  /* offset: 0 */
    uint32_t set;  /* offset: 4 */
} x509_attributes_st;

/* Size: 28 bytes */
typedef struct _X509_req_info_st {
    uint32_t asn1;  /* offset: 0 */
    uint32_t length;  /* offset: 4 */
    uint32_t version;  /* offset: 8 */
    uint32_t attributes;  /* offset: 20 */
    uint32_t req_kludge;  /* offset: 24 */
} X509_req_info_st;

/* Size: 16 bytes */
typedef struct _X509_req_st {
    uint32_t sig_alg;  /* offset: 4 */
    uint32_t signature;  /* offset: 8 */
    uint32_t references;  /* offset: 12 */
} X509_req_st;

/* Size: 40 bytes */
typedef struct _x509_cinf_st {
    uint32_t version;  /* offset: 0 */
    uint32_t serialNumber;  /* offset: 4 */
    uint32_t signature;  /* offset: 8 */
    uint32_t issuer;  /* offset: 12 */
    uint32_t subject;  /* offset: 20 */
    uint32_t key;  /* offset: 24 */
    uint32_t issuerUID;  /* offset: 28 */
    uint32_t subjectUID;  /* offset: 32 */
    uint32_t extensions;  /* offset: 36 */
} x509_cinf_st;

/* Size: 20 bytes */
typedef struct _x509_cert_aux_st {
    uint32_t trust;  /* offset: 0 */
    uint32_t reject;  /* offset: 4 */
    uint32_t alias;  /* offset: 8 */
    uint32_t keyid;  /* offset: 12 */
    uint32_t other;  /* offset: 16 */
} x509_cert_aux_st;

/* Size: 84 bytes */
typedef struct _x509_st {
    uint32_t sig_alg;  /* offset: 4 */
    uint32_t signature;  /* offset: 8 */
    uint32_t valid;  /* offset: 12 */
    uint32_t references;  /* offset: 16 */
    uint32_t name;  /* offset: 20 */
    uint64_t ex_data;  /* offset: 24 */
    uint32_t ex_pathlen;  /* offset: 32 */
    uint32_t ex_flags;  /* offset: 36 */
    uint32_t ex_kusage;  /* offset: 40 */
    uint32_t ex_xkusage;  /* offset: 44 */
    uint32_t ex_nscert;  /* offset: 48 */
    uint32_t skid;  /* offset: 52 */
} x509_st;

/* Size: 24 bytes */
typedef struct _x509_trust_st {
    uint32_t trust;  /* offset: 0 */
    uint32_t flags;  /* offset: 4 */
    uint32_t name;  /* offset: 12 */
    uint32_t arg1;  /* offset: 16 */
    uint32_t arg2;  /* offset: 20 */
} x509_trust_st;

/* Size: 16 bytes */
typedef struct _X509_revoked_st {
    uint32_t serialNumber;  /* offset: 0 */
    uint32_t revocationDate;  /* offset: 4 */
    uint32_t extensions;  /* offset: 8 */
    uint32_t sequence;  /* offset: 12 */
} X509_revoked_st;

/* Size: 28 bytes */
typedef struct _X509_crl_info_st {
    uint32_t version;  /* offset: 0 */
    uint32_t sig_alg;  /* offset: 4 */
    uint32_t issuer;  /* offset: 8 */
    uint32_t lastUpdate;  /* offset: 12 */
    uint32_t nextUpdate;  /* offset: 16 */
    uint32_t revoked;  /* offset: 20 */
    uint32_t extensions;  /* offset: 24 */
} X509_crl_info_st;

/* Size: 16 bytes */
typedef struct _X509_crl_st {
    uint32_t sig_alg;  /* offset: 4 */
    uint32_t signature;  /* offset: 8 */
    uint32_t references;  /* offset: 12 */
} X509_crl_st;

/* Size: 44 bytes */
typedef struct _private_key_st {
    uint32_t version;  /* offset: 0 */
    uint32_t enc_algor;  /* offset: 4 */
    uint32_t enc_pkey;  /* offset: 8 */
    uint32_t dec_pkey;  /* offset: 12 */
    uint32_t key_length;  /* offset: 16 */
    uint32_t key_data;  /* offset: 20 */
    uint32_t key_free;  /* offset: 24 */
    uint8_t cipher;  /* offset: 28 */
    uint32_t references;  /* offset: 40 */
} private_key_st;

/* Size: 36 bytes */
typedef struct _X509_info_st {
    uint8_t enc_cipher;  /* offset: 12 */
    uint32_t enc_len;  /* offset: 24 */
    uint32_t enc_data;  /* offset: 28 */
    uint32_t references;  /* offset: 32 */
} X509_info_st;

/* Size: 8 bytes */
typedef struct _Netscape_spkac_st {
    void* pubkey;  /* offset: 0 */
    uint32_t challenge;  /* offset: 4 */
} Netscape_spkac_st;

/* Size: 12 bytes */
typedef struct _Netscape_spki_st {
    uint32_t sig_algor;  /* offset: 4 */
    uint32_t signature;  /* offset: 8 */
} Netscape_spki_st;

/* Size: 8 bytes */
typedef struct _Netscape_certificate_sequence {
    uint32_t type;  /* offset: 0 */
    uint32_t certs;  /* offset: 4 */
} Netscape_certificate_sequence;

/* Size: 8 bytes */
typedef struct _CBCParameter_st {
    uint64_t iv;  /* offset: 0 */
} CBCParameter_st;

/* Size: 8 bytes */
typedef struct _PBEPARAM_st {
    uint32_t salt;  /* offset: 0 */
    uint32_t iter;  /* offset: 4 */
} PBEPARAM_st;

/* Size: 8 bytes */
typedef struct _PBE2PARAM_st {
    uint32_t keyfunc;  /* offset: 0 */
    uint32_t encryption;  /* offset: 4 */
} PBE2PARAM_st;

/* Size: 16 bytes */
typedef struct _PBKDF2PARAM_st {
    uint32_t salt;  /* offset: 0 */
    uint32_t iter;  /* offset: 4 */
    uint32_t keylength;  /* offset: 8 */
    void* prf;  /* offset: 12 */
} PBKDF2PARAM_st;

/* Size: 20 bytes */
typedef struct _pkcs8_priv_key_info_st {
    uint32_t broken;  /* offset: 0 */
    uint32_t version;  /* offset: 4 */
    void* pkeyalg;  /* offset: 8 */
    void* pkey;  /* offset: 12 */
    uint32_t attributes;  /* offset: 16 */
} pkcs8_priv_key_info_st;

/* Size: 12 bytes */
typedef struct _lhash_node_st {
    uint32_t data;  /* offset: 0 */
    uint32_t hash;  /* offset: 8 */
} lhash_node_st;

/* Size: 96 bytes */
typedef struct _lhash_st {
    uint32_t comp;  /* offset: 4 */
    uint32_t num_nodes;  /* offset: 12 */
    uint32_t num_alloc_nodes;  /* offset: 16 */
    uint32_t p;  /* offset: 20 */
    void* pmax;  /* offset: 24 */
    uint32_t up_load;  /* offset: 28 */
    uint32_t down_load;  /* offset: 32 */
    uint32_t num_items;  /* offset: 36 */
    uint32_t num_expands;  /* offset: 40 */
    uint32_t num_expand_reallocs;  /* offset: 44 */
    uint32_t num_contracts;  /* offset: 48 */
    uint32_t num_contract_reallocs;  /* offset: 52 */
    uint32_t num_hash_calls;  /* offset: 56 */
    uint32_t num_comp_calls;  /* offset: 60 */
    uint32_t num_insert;  /* offset: 64 */
    uint32_t num_replace;  /* offset: 68 */
    uint32_t num_delete;  /* offset: 72 */
    uint32_t num_no_delete;  /* offset: 76 */
    uint32_t num_retrieve;  /* offset: 80 */
    uint32_t num_retrieve_miss;  /* offset: 84 */
    uint32_t num_hash_comps;  /* offset: 88 */
    uint32_t error;  /* offset: 92 */
} lhash_st;

/* Size: 16 bytes */
typedef struct _x509_hash_dir_st {
    uint32_t num_dirs;  /* offset: 0 */
    uint32_t dirs;  /* offset: 4 */
    uint32_t num_dirs_alloced;  /* offset: 12 */
} x509_hash_dir_st;

/* Size: 16 bytes */
typedef struct _x509_file_st {
    uint32_t num_paths;  /* offset: 0 */
    uint32_t num_alloced;  /* offset: 4 */
    void* paths;  /* offset: 8 */
    void* path_type;  /* offset: 12 */
} x509_file_st;

/* Size: 8 bytes */
typedef struct _x509_object_st {
    uint32_t crl;  /* offset: 0 */
    void* pkey;  /* offset: 0 */
    uint32_t x509;  /* offset: 0 */
    uint32_t type;  /* offset: 0 */
    uint32_t u4ptr;  /* offset: 0 */
} x509_object_st;

/* Size: 40 bytes */
typedef struct _x509_lookup_method_st {
    uint32_t name;  /* offset: 0 */
    uint32_t init;  /* offset: 12 */
    uint32_t shutdown;  /* offset: 16 */
} x509_lookup_method_st;

/* Size: 36 bytes */
typedef struct _x509_store_st {
    uint32_t cache;  /* offset: 0 */
    uint32_t objs;  /* offset: 4 */
    uint32_t get_cert_methods;  /* offset: 8 */
    uint64_t ex_data;  /* offset: 20 */
    uint32_t references;  /* offset: 28 */
    uint32_t depth;  /* offset: 32 */
} x509_store_st;

/* Size: 20 bytes */
typedef struct _x509_lookup_st {
    uint32_t init;  /* offset: 0 */
    uint32_t skip;  /* offset: 4 */
    uint32_t method_data;  /* offset: 12 */
} x509_lookup_st;

/* Size: 96 bytes */
typedef struct _x509_store_ctx_st {
    uint32_t ctx;  /* offset: 0 */
    uint32_t current_method;  /* offset: 4 */
    uint32_t cert;  /* offset: 8 */
    uint32_t untrusted;  /* offset: 12 */
    void* purpose;  /* offset: 16 */
    uint32_t trust;  /* offset: 20 */
    uint32_t check_time;  /* offset: 24 */
    uint32_t flags;  /* offset: 28 */
    uint32_t other_ctx;  /* offset: 32 */
    uint32_t verify;  /* offset: 36 */
    uint32_t verify_cb;  /* offset: 40 */
    uint32_t cleanup;  /* offset: 52 */
    uint32_t depth;  /* offset: 56 */
    uint32_t valid;  /* offset: 60 */
    uint32_t last_untrusted;  /* offset: 64 */
    uint32_t chain;  /* offset: 68 */
    uint32_t error_depth;  /* offset: 72 */
    uint32_t error;  /* offset: 76 */
    uint32_t current_cert;  /* offset: 80 */
    uint32_t current_issuer;  /* offset: 84 */
    uint64_t ex_data;  /* offset: 88 */
} x509_store_ctx_st;

/* Size: 8 bytes */
typedef struct _pkcs7_issuer_and_serial_st {
    uint32_t issuer;  /* offset: 0 */
    uint32_t serial;  /* offset: 4 */
} pkcs7_issuer_and_serial_st;

/* Size: 32 bytes */
typedef struct _pkcs7_signer_info_st {
    uint32_t version;  /* offset: 0 */
    uint32_t digest_alg;  /* offset: 8 */
    uint32_t auth_attr;  /* offset: 12 */
    uint32_t digest_enc_alg;  /* offset: 16 */
    uint32_t enc_digest;  /* offset: 20 */
    uint32_t unauth_attr;  /* offset: 24 */
    void* pkey;  /* offset: 28 */
} pkcs7_signer_info_st;

/* Size: 20 bytes */
typedef struct _pkcs7_recip_info_st {
    uint32_t version;  /* offset: 0 */
    uint32_t issuer_and_serial;  /* offset: 4 */
    uint32_t key_enc_algor;  /* offset: 8 */
    uint32_t enc_key;  /* offset: 12 */
    uint32_t cert;  /* offset: 16 */
} pkcs7_recip_info_st;

/* Size: 24 bytes */
typedef struct _pkcs7_signed_st {
    uint32_t version;  /* offset: 0 */
    uint32_t md_algs;  /* offset: 4 */
    uint32_t cert;  /* offset: 8 */
    uint32_t crl;  /* offset: 12 */
    uint32_t signer_info;  /* offset: 16 */
} pkcs7_signed_st;

/* Size: 16 bytes */
typedef struct _pkcs7_enc_content_st {
    uint32_t content_type;  /* offset: 0 */
    uint32_t algorithm;  /* offset: 4 */
    uint32_t enc_data;  /* offset: 8 */
    uint32_t cipher;  /* offset: 12 */
} pkcs7_enc_content_st;

/* Size: 12 bytes */
typedef struct _pkcs7_enveloped_st {
    uint32_t version;  /* offset: 0 */
    uint32_t recipientinfo;  /* offset: 4 */
} pkcs7_enveloped_st;

/* Size: 28 bytes */
typedef struct _pkcs7_signedandenveloped_st {
    uint32_t version;  /* offset: 0 */
    uint32_t md_algs;  /* offset: 4 */
    uint32_t cert;  /* offset: 8 */
    uint32_t crl;  /* offset: 12 */
    uint32_t signer_info;  /* offset: 16 */
    uint32_t enc_data;  /* offset: 20 */
    uint32_t recipientinfo;  /* offset: 24 */
} pkcs7_signedandenveloped_st;

/* Size: 16 bytes */
typedef struct _pkcs7_digest_st {
    uint32_t version;  /* offset: 0 */
    uint32_t md;  /* offset: 4 */
    uint32_t contents;  /* offset: 8 */
    uint32_t digest;  /* offset: 12 */
} pkcs7_digest_st;

/* Size: 8 bytes */
typedef struct _pkcs7_encrypted_st {
    uint32_t version;  /* offset: 0 */
    uint32_t enc_data;  /* offset: 4 */
} pkcs7_encrypted_st;

/* Size: 24 bytes */
typedef struct _pkcs7_st {
    uint32_t other;  /* offset: 0 */
    uint32_t u4ptr;  /* offset: 0 */
    uint32_t data;  /* offset: 0 */
    uint32_t asn1;  /* offset: 0 */
    uint32_t length;  /* offset: 4 */
    uint32_t state;  /* offset: 8 */
    uint32_t detached;  /* offset: 12 */
    uint32_t type;  /* offset: 16 */
} pkcs7_st;

/* Size: 4464 bytes */
typedef struct _PEM_Encode_Seal_st {
    uint8_t encode;  /* offset: 0 */
    uint8_t md;  /* offset: 96 */
    uint8_t cipher;  /* offset: 248 */
} PEM_Encode_Seal_st;

/* Size: 24 bytes */
typedef struct _pem_recip_st {
    uint32_t name;  /* offset: 0 */
    uint32_t dn;  /* offset: 4 */
    uint32_t cipher;  /* offset: 8 */
    uint32_t key_enc;  /* offset: 12 */
} pem_recip_st;

/* Size: 92 bytes */
typedef struct _pem_ctx_st {
    uint32_t s12cipher;  /* offset: 0 */
    uint32_t s8version;  /* offset: 0 */
    uint32_t type;  /* offset: 0 */
    uint32_t mode;  /* offset: 4 */
    uint64_t iv;  /* offset: 4 */
    uint32_t domain;  /* offset: 12 */
    uint32_t num_recipient;  /* offset: 32 */
    uint32_t x509_chain;  /* offset: 40 */
    uint32_t md_enc;  /* offset: 48 */
    uint32_t md_len;  /* offset: 52 */
    uint32_t md_data;  /* offset: 56 */
    uint32_t key_len;  /* offset: 64 */
    uint32_t key;  /* offset: 68 */
    uint64_t iv;  /* offset: 72 */
    uint32_t data_enc;  /* offset: 80 */
    uint32_t data_len;  /* offset: 84 */
    uint32_t data;  /* offset: 88 */
} pem_ctx_st;

/* Size: 40 bytes */
typedef struct _ssl_cipher_st {
    uint32_t valid;  /* offset: 0 */
    uint32_t name;  /* offset: 4 */
    uint32_t id;  /* offset: 8 */
    uint32_t algorithms;  /* offset: 12 */
    uint32_t algo_strength;  /* offset: 16 */
    uint32_t algorithm2;  /* offset: 20 */
    uint32_t strength_bits;  /* offset: 24 */
    uint32_t alg_bits;  /* offset: 28 */
    uint32_t mask;  /* offset: 32 */
    uint32_t mask_strength;  /* offset: 36 */
} ssl_cipher_st;

/* Size: 100 bytes */
typedef struct _ssl_method_st {
    uint32_t version;  /* offset: 0 */
    uint32_t ssl_free;  /* offset: 12 */
    uint32_t ssl_accept;  /* offset: 16 */
    uint32_t ssl_connect;  /* offset: 20 */
    uint32_t ssl_peek;  /* offset: 28 */
    uint32_t ssl_shutdown;  /* offset: 36 */
    uint32_t ssl_renegotiate;  /* offset: 40 */
    uint32_t ssl_renegotiate_check;  /* offset: 44 */
    uint32_t ssl_pending;  /* offset: 64 */
    uint32_t num_ciphers;  /* offset: 68 */
    uint32_t get_timeout;  /* offset: 80 */
    uint32_t ssl_version;  /* offset: 88 */
} ssl_method_st;

/* Size: 200 bytes */
typedef struct _ssl_session_st {
    uint32_t ssl_version;  /* offset: 0 */
    uint32_t key_arg_length;  /* offset: 4 */
    uint64_t key_arg;  /* offset: 8 */
    uint32_t master_key_length;  /* offset: 16 */
    uint32_t session_id_length;  /* offset: 68 */
    uint32_t sid_ctx_length;  /* offset: 104 */
    uint8_t sid_ctx;  /* offset: 108 */
    uint32_t not_resumable;  /* offset: 140 */
    void* peer;  /* offset: 148 */
    uint32_t verify_result;  /* offset: 152 */
    uint32_t references;  /* offset: 156 */
    uint32_t timeout;  /* offset: 160 */
    uint32_t time;  /* offset: 164 */
    uint32_t compress_meth;  /* offset: 168 */
    uint32_t cipher;  /* offset: 172 */
    uint32_t cipher_id;  /* offset: 176 */
    uint32_t ciphers;  /* offset: 180 */
    uint64_t ex_data;  /* offset: 184 */
    uint32_t next;  /* offset: 196 */
} ssl_session_st;

/* Size: 12 bytes */
typedef struct _ssl_comp_st {
    uint32_t id;  /* offset: 0 */
    uint32_t name;  /* offset: 4 */
    uint32_t method;  /* offset: 8 */
} ssl_comp_st;

/* Size: 232 bytes */
typedef struct _ssl_ctx_st {
    uint32_t s44sess_connect;  /* offset: 0 */
    uint32_t sess_connect_renegotiate;  /* offset: 4 */
    uint32_t options;  /* offset: 4 */
    uint32_t mode;  /* offset: 8 */
    uint32_t sess_connect_good;  /* offset: 8 */
    uint32_t sess_accept;  /* offset: 12 */
    uint32_t cipher_list;  /* offset: 12 */
    uint32_t sess_accept_renegotiate;  /* offset: 16 */
    uint32_t cipher_list_by_id;  /* offset: 16 */
    uint32_t sess_accept_good;  /* offset: 20 */
    uint32_t cert_store;  /* offset: 20 */
    uint32_t sessions;  /* offset: 24 */
    uint32_t sess_miss;  /* offset: 24 */
    uint32_t sess_timeout;  /* offset: 28 */
    uint32_t session_cache_size;  /* offset: 28 */
    uint32_t sess_cache_full;  /* offset: 32 */
    uint32_t session_cache_head;  /* offset: 32 */
    uint32_t session_cache_tail;  /* offset: 36 */
    uint32_t sess_hit;  /* offset: 36 */
    uint32_t sess_cb_hit;  /* offset: 40 */
    uint32_t session_cache_mode;  /* offset: 40 */
    uint32_t session_timeout;  /* offset: 44 */
    uint32_t references;  /* offset: 104 */
    uint32_t info_callback;  /* offset: 108 */
    uint32_t app_verify_callback;  /* offset: 112 */
    uint32_t app_verify_arg;  /* offset: 116 */
    uint32_t read_ahead;  /* offset: 124 */
    uint32_t verify_mode;  /* offset: 128 */
    uint32_t verify_depth;  /* offset: 132 */
    uint32_t sid_ctx_length;  /* offset: 136 */
    uint8_t sid_ctx;  /* offset: 140 */
    uint32_t default_verify_callback;  /* offset: 172 */
    void* purpose;  /* offset: 176 */
    uint32_t trust;  /* offset: 180 */
    uint32_t default_passwd_callback_userdata;  /* offset: 188 */
    uint32_t client_cert_cb;  /* offset: 192 */
    uint32_t client_CA;  /* offset: 196 */
    uint32_t quiet_shutdown;  /* offset: 200 */
    uint64_t ex_data;  /* offset: 204 */
    uint32_t rsa_md5;  /* offset: 212 */
    uint32_t md5;  /* offset: 216 */
    uint32_t sha1;  /* offset: 220 */
    uint32_t extra_certs;  /* offset: 224 */
    uint32_t comp_methods;  /* offset: 228 */
} ssl_ctx_st;

/* Size: 248 bytes */
typedef struct _ssl_st {
    uint32_t version;  /* offset: 0 */
    uint32_t type;  /* offset: 4 */
    uint32_t method;  /* offset: 8 */
    uint32_t wbio;  /* offset: 16 */
    uint32_t bbio;  /* offset: 20 */
    uint32_t rwstate;  /* offset: 24 */
    uint32_t in_handshake;  /* offset: 28 */
    uint32_t handshake_func;  /* offset: 32 */
    uint32_t server;  /* offset: 36 */
    uint32_t new_session;  /* offset: 40 */
    uint32_t quiet_shutdown;  /* offset: 44 */
    uint32_t shutdown;  /* offset: 48 */
    uint32_t state;  /* offset: 52 */
    uint32_t rstate;  /* offset: 56 */
    uint32_t init_buf;  /* offset: 60 */
    uint32_t init_num;  /* offset: 64 */
    uint32_t init_off;  /* offset: 68 */
    void* packet;  /* offset: 72 */
    void* packet_length;  /* offset: 76 */
    uint32_t read_ahead;  /* offset: 88 */
    uint32_t hit;  /* offset: 92 */
    void* purpose;  /* offset: 96 */
    uint32_t trust;  /* offset: 100 */
    uint32_t cipher_list;  /* offset: 104 */
    uint32_t cipher_list_by_id;  /* offset: 108 */
    uint32_t read_hash;  /* offset: 116 */
    uint32_t enc_write_ctx;  /* offset: 124 */
    uint32_t write_hash;  /* offset: 128 */
    uint32_t compress;  /* offset: 132 */
    uint32_t cert;  /* offset: 136 */
    uint32_t sid_ctx_length;  /* offset: 140 */
    uint8_t sid_ctx;  /* offset: 144 */
    uint32_t session;  /* offset: 176 */
    uint32_t verify_mode;  /* offset: 180 */
    uint32_t verify_depth;  /* offset: 184 */
    uint32_t verify_callback;  /* offset: 188 */
    uint32_t info_callback;  /* offset: 192 */
    uint32_t error;  /* offset: 196 */
    uint32_t error_code;  /* offset: 200 */
    uint32_t debug;  /* offset: 208 */
    uint32_t verify_result;  /* offset: 212 */
    uint64_t ex_data;  /* offset: 216 */
    uint32_t client_CA;  /* offset: 224 */
    uint32_t references;  /* offset: 228 */
    uint32_t options;  /* offset: 232 */
    uint32_t mode;  /* offset: 236 */
    uint32_t first_packet;  /* offset: 240 */
    uint32_t client_version;  /* offset: 244 */
} ssl_st;

/* Size: 292 bytes */
typedef struct _ssl2_state_st {
    uint32_t s72conn_id_length;  /* offset: 0 */
    uint32_t three_byte_header;  /* offset: 0 */
    uint32_t clear_text;  /* offset: 4 */
    uint32_t cert_type;  /* offset: 4 */
    uint32_t cert_length;  /* offset: 8 */
    uint32_t escape;  /* offset: 8 */
    uint32_t csl;  /* offset: 12 */
    uint32_t ssl2_rollback;  /* offset: 12 */
    uint32_t wnum;  /* offset: 16 */
    uint32_t clear;  /* offset: 16 */
    uint32_t enc;  /* offset: 20 */
    uint32_t wpend_tot;  /* offset: 20 */
    uint8_t ccl;  /* offset: 24 */
    uint32_t wpend_off;  /* offset: 28 */
    uint32_t wpend_len;  /* offset: 32 */
    uint32_t wpend_ret;  /* offset: 36 */
    uint32_t rbuf_left;  /* offset: 40 */
    uint32_t rbuf_offs;  /* offset: 44 */
    uint32_t rbuf;  /* offset: 48 */
    uint32_t wbuf;  /* offset: 52 */
    uint32_t write_ptr;  /* offset: 56 */
    uint32_t cipher_spec_length;  /* offset: 56 */
    void* padding;  /* offset: 60 */
    uint32_t session_id_length;  /* offset: 60 */
    uint32_t rlength;  /* offset: 64 */
    uint32_t clen;  /* offset: 64 */
    uint32_t rlen;  /* offset: 68 */
    uint32_t ract_data_length;  /* offset: 68 */
    uint32_t wlength;  /* offset: 72 */
    uint32_t wact_data_length;  /* offset: 76 */
    uint32_t ract_data;  /* offset: 80 */
    uint32_t wact_data;  /* offset: 84 */
    uint32_t mac_data;  /* offset: 88 */
    void* pad_data_UNUSED;  /* offset: 92 */
    uint32_t read_key;  /* offset: 96 */
    uint32_t write_key;  /* offset: 100 */
    uint32_t challenge_length;  /* offset: 104 */
    uint8_t challenge;  /* offset: 108 */
    uint32_t conn_id_length;  /* offset: 140 */
    uint8_t conn_id;  /* offset: 144 */
    uint32_t key_material_length;  /* offset: 160 */
    uint8_t key_material;  /* offset: 164 */
    uint32_t read_sequence;  /* offset: 212 */
    uint32_t write_sequence;  /* offset: 216 */
} ssl2_state_st;

/* Size: 24 bytes */
typedef struct _ssl3_record_st {
    uint32_t type;  /* offset: 0 */
    uint32_t length;  /* offset: 4 */
    uint32_t off;  /* offset: 8 */
    uint32_t data;  /* offset: 12 */
    uint32_t input;  /* offset: 16 */
    uint32_t comp;  /* offset: 20 */
} ssl3_record_st;

/* Size: 12 bytes */
typedef struct _ssl3_buffer_st {
    uint32_t buf;  /* offset: 0 */
    uint32_t offset;  /* offset: 4 */
    uint32_t left;  /* offset: 8 */
} ssl3_buffer_st;

/* Size: 904 bytes */
typedef struct _ssl3_state_st {
    uint32_t flags;  /* offset: 0 */
    uint32_t delay_buf_pop_ret;  /* offset: 4 */
    uint64_t read_sequence;  /* offset: 8 */
    uint64_t write_sequence;  /* offset: 52 */
    uint8_t write_mac_secret;  /* offset: 60 */
    uint8_t finish_md;  /* offset: 72 */
    uint8_t server_random;  /* offset: 96 */
    uint8_t client_random;  /* offset: 128 */
    uint32_t finish_md_len;  /* offset: 144 */
    uint8_t peer_finish_md;  /* offset: 148 */
    uint8_t rbuf;  /* offset: 160 */
    uint8_t wbuf;  /* offset: 172 */
    uint8_t rrec;  /* offset: 184 */
    uint8_t wrec;  /* offset: 208 */
    void* peer_finish_md_len;  /* offset: 220 */
    uint32_t message_size;  /* offset: 224 */
    uint32_t message_type;  /* offset: 228 */
    uint32_t new_cipher;  /* offset: 232 */
    uint32_t alert_fragment_len;  /* offset: 236 */
    uint32_t next_state;  /* offset: 240 */
    uint32_t handshake_fragment;  /* offset: 240 */
    uint32_t reuse_message;  /* offset: 244 */
    uint32_t handshake_fragment_len;  /* offset: 244 */
    uint32_t cert_req;  /* offset: 248 */
    uint32_t wnum;  /* offset: 248 */
    uint32_t ctype_num;  /* offset: 252 */
    uint32_t wpend_tot;  /* offset: 252 */
    uint32_t wpend_type;  /* offset: 256 */
    uint32_t wpend_ret;  /* offset: 260 */
    uint32_t wpend_buf;  /* offset: 264 */
    uint32_t ca_names;  /* offset: 264 */
    uint8_t finish_dgst1;  /* offset: 268 */
    uint32_t use_rsa_tmp;  /* offset: 268 */
    uint32_t key_block_length;  /* offset: 272 */
    uint32_t key_block;  /* offset: 276 */
    uint32_t new_sym_enc;  /* offset: 280 */
    uint32_t new_hash;  /* offset: 284 */
    uint32_t cert_request;  /* offset: 292 */
    uint8_t finish_dgst2;  /* offset: 420 */
    uint32_t change_cipher_spec;  /* offset: 572 */
    uint32_t warn_alert;  /* offset: 576 */
    uint32_t fatal_alert;  /* offset: 580 */
    uint32_t alert_dispatch;  /* offset: 584 */
    int16_t send_alert;  /* offset: 588 */
    uint32_t renegotiate;  /* offset: 592 */
    uint32_t total_renegotiations;  /* offset: 596 */
    uint32_t num_renegotiations;  /* offset: 600 */
    uint32_t in_read_app_data;  /* offset: 604 */
} ssl3_state_st;

/* Size: 4 bytes */
typedef struct _in_addr {
    uint32_t s_addr;  /* offset: 0 */
} in_addr;

/* Size: 16 bytes */
typedef struct _in6_addr {
    uint8_t u16u6_addr8;  /* offset: 0 */
} in6_addr;

/* Size: 16 bytes */
typedef struct _sockaddr_in {
    int16_t sin_family;  /* offset: 0 */
    int16_t sin_port;  /* offset: 2 */
    uint32_t sin_addr;  /* offset: 4 */
    uint64_t sin_zero;  /* offset: 8 */
} sockaddr_in;

/* Size: 28 bytes */
typedef struct _sockaddr_in6 {
    int16_t sin6_family;  /* offset: 0 */
    int16_t sin6_port;  /* offset: 2 */
    uint32_t sin6_flowinfo;  /* offset: 4 */
    uint8_t sin6_addr;  /* offset: 8 */
    uint32_t sin6_scope_id;  /* offset: 24 */
} sockaddr_in6;

/* Size: 20 bytes */
typedef struct _ipv6_mreq {
    uint8_t ipv6mr_multiaddr;  /* offset: 0 */
    uint32_t ipv6mr_interface;  /* offset: 16 */
} ipv6_mreq;

/* Size: 20 bytes */
typedef struct _in6_pktinfo {
    uint8_t ipi6_addr;  /* offset: 0 */
    uint32_t ipi6_ifindex;  /* offset: 16 */
} in6_pktinfo;

/* Size: 20 bytes */
typedef struct _tcphdr {
    int16_t source;  /* offset: 0 */
    uint16_t dest;  /* offset: 2 */
    uint32_t seq;  /* offset: 4 */
    uint32_t ack_seq;  /* offset: 8 */
    uint8_t res1;  /* offset: 12 */
    uint8_t doff;  /* offset: 12.5 */
    uint8_t fin;  /* offset: 13 */
    uint8_t syn;  /* offset: 13.125 */
    uint8_t rst;  /* offset: 13.25 */
    uint8_t psh;  /* offset: 13.375 */
    uint8_t ack;  /* offset: 13.5 */
    uint8_t urg;  /* offset: 13.625 */
    uint8_t res2;  /* offset: 13.75 */
    uint16_t window;  /* offset: 14 */
    uint16_t check;  /* offset: 16 */
    uint16_t urg_ptr;  /* offset: 18 */
} tcphdr;

/* Size: 92 bytes */
typedef struct _tcp_info {
    uint8_t tcpi_state;  /* offset: 0 */
    uint8_t tcpi_ca_state;  /* offset: 1 */
    uint8_t tcpi_retransmits;  /* offset: 2 */
    uint8_t tcpi_probes;  /* offset: 3 */
    uint8_t tcpi_backoff;  /* offset: 4 */
    uint8_t tcpi_options;  /* offset: 5 */
    uint8_t tcpi_snd_wscale;  /* offset: 6 */
    uint8_t tcpi_rcv_wscale;  /* offset: 6.5 */
    uint32_t tcpi_rto;  /* offset: 8 */
    uint32_t tcpi_ato;  /* offset: 12 */
    uint32_t tcpi_snd_mss;  /* offset: 16 */
    uint32_t tcpi_rcv_mss;  /* offset: 20 */
    uint32_t tcpi_unacked;  /* offset: 24 */
    uint32_t tcpi_sacked;  /* offset: 28 */
    uint32_t tcpi_lost;  /* offset: 32 */
    uint32_t tcpi_retrans;  /* offset: 36 */
    uint32_t tcpi_fackets;  /* offset: 40 */
    uint32_t tcpi_last_data_sent;  /* offset: 44 */
    uint32_t tcpi_last_ack_sent;  /* offset: 48 */
    uint32_t tcpi_last_data_recv;  /* offset: 52 */
    uint32_t tcpi_last_ack_recv;  /* offset: 56 */
    uint32_t tcpi_pmtu;  /* offset: 60 */
    uint32_t tcpi_rcv_ssthresh;  /* offset: 64 */
    uint32_t tcpi_rtt;  /* offset: 68 */
    uint32_t tcpi_rttvar;  /* offset: 72 */
    uint32_t tcpi_snd_ssthresh;  /* offset: 76 */
    uint32_t tcpi_snd_cwnd;  /* offset: 80 */
    uint32_t tcpi_advmss;  /* offset: 84 */
    uint32_t tcpi_reordering;  /* offset: 88 */
} tcp_info;

/* Size: 12 bytes */
typedef struct _rpcent {
    uint32_t r_name;  /* offset: 0 */
    uint32_t r_aliases;  /* offset: 4 */
    uint32_t r_number;  /* offset: 8 */
} rpcent;

/* Size: 64 bytes */
typedef struct _sigevent {
    uint32_t sigev_value;  /* offset: 0 */
    uint32_t _attribute;  /* offset: 4 */
    uint32_t sigev_signo;  /* offset: 4 */
    uint32_t sigev_notify;  /* offset: 8 */
} sigevent;

/* Size: 16 bytes */
typedef struct _netent {
    uint32_t n_name;  /* offset: 0 */
    uint32_t n_aliases;  /* offset: 4 */
    uint32_t n_addrtype;  /* offset: 8 */
    uint32_t n_net;  /* offset: 12 */
} netent;

/* Size: 20 bytes */
typedef struct _hostent {
    uint32_t h_name;  /* offset: 0 */
    uint32_t h_aliases;  /* offset: 4 */
    uint32_t h_addrtype;  /* offset: 8 */
    uint32_t h_length;  /* offset: 12 */
    uint32_t h_addr_list;  /* offset: 16 */
} hostent;

/* Size: 16 bytes */
typedef struct _servent {
    uint32_t s_name;  /* offset: 0 */
    uint32_t s_aliases;  /* offset: 4 */
    uint32_t s_port;  /* offset: 8 */
    uint32_t s_proto;  /* offset: 12 */
} servent;

/* Size: 12 bytes */
typedef struct _protoent {
    uint32_t p_name;  /* offset: 0 */
    uint32_t p_aliases;  /* offset: 4 */
    uint32_t p_proto;  /* offset: 8 */
} protoent;

/* Size: 32 bytes */
typedef struct _addrinfo {
    uint32_t ai_flags;  /* offset: 0 */
    uint32_t ai_family;  /* offset: 4 */
    uint32_t ai_socktype;  /* offset: 8 */
    uint32_t ai_protocol;  /* offset: 12 */
    uint32_t ai_addrlen;  /* offset: 16 */
    uint32_t ai_addr;  /* offset: 20 */
    uint32_t ai_canonname;  /* offset: 24 */
} addrinfo;

/* Size: 40 bytes */
typedef struct _gaicb {
    uint32_t ar_name;  /* offset: 0 */
    uint32_t ar_service;  /* offset: 4 */
    uint32_t ar_result;  /* offset: 12 */
    uint32_t __return;  /* offset: 16 */
    uint8_t __unused;  /* offset: 20 */
} gaicb;

/* Size: 128 bytes */
typedef struct _siginfo {
    uint32_t s8_timer1;  /* offset: 0 */
    uint32_t s4si_addr;  /* offset: 0 */
    uint32_t s20si_pid;  /* offset: 0 */
    uint32_t s12si_pid;  /* offset: 0 */
    uint32_t si_signo;  /* offset: 0 */
    uint32_t s8si_band;  /* offset: 0 */
    uint32_t s8si_pid;  /* offset: 0 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_fd;  /* offset: 4 */
    uint32_t _timer2;  /* offset: 4 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_errno;  /* offset: 4 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_code;  /* offset: 8 */
    uint32_t si_status;  /* offset: 8 */
    uint32_t si_sigval;  /* offset: 8 */
    uint32_t si_utime;  /* offset: 12 */
    uint32_t si_stime;  /* offset: 16 */
} siginfo;

/* Size: 140 bytes */
typedef struct _sigaction {
    uint32_t u4sa_handler;  /* offset: 0 */
    uint8_t sa_mask;  /* offset: 4 */
    uint32_t sa_flags;  /* offset: 132 */
    uint32_t sa_restorer;  /* offset: 136 */
} sigaction;

/* Size: 10 bytes */
typedef struct _libc_fpreg {
    uint64_t significand;  /* offset: 0 */
    uint16_t exponent;  /* offset: 8 */
} libc_fpreg;

/* Size: 112 bytes */
typedef struct _libc_fpstate {
    uint32_t cw;  /* offset: 0 */
    uint32_t sw;  /* offset: 4 */
    uint32_t tag;  /* offset: 8 */
    uint32_t ipoff;  /* offset: 12 */
    uint32_t cssel;  /* offset: 16 */
    uint32_t dataoff;  /* offset: 20 */
    uint32_t datasel;  /* offset: 24 */
    uint32_t status;  /* offset: 108 */
} libc_fpstate;

/* Size: 348 bytes */
typedef struct _ucontext {
    uint32_t uc_flags;  /* offset: 0 */
    uint8_t uc_stack;  /* offset: 8 */
    uint8_t uc_mcontext;  /* offset: 20 */
    uint8_t uc_sigmask;  /* offset: 108 */
    uint8_t __fpregs_mem;  /* offset: 236 */
} ucontext;

/* Size: 332 bytes */
typedef struct _err_state_st {
    void* pid;  /* offset: 0 */
    uint8_t err_line;  /* offset: 260 */
    uint32_t top;  /* offset: 324 */
    uint32_t bottom;  /* offset: 328 */
} err_state_st;

/* Size: 8 bytes */
typedef struct _ERR_string_data_st {
    uint32_t error;  /* offset: 0 */
    uint32_t string;  /* offset: 4 */
} ERR_string_data_st;

/* Size: 12 bytes */
typedef struct _IO_marker {
    uint32_t _pos;  /* offset: 8 */
} IO_marker;

/* Size: 148 bytes */
typedef struct _IO_FILE {
    uint32_t _flags;  /* offset: 0 */
    uint32_t _IO_read_ptr;  /* offset: 4 */
    uint32_t _IO_read_end;  /* offset: 8 */
    uint32_t _IO_read_base;  /* offset: 12 */
    uint32_t _IO_write_base;  /* offset: 16 */
    uint32_t _IO_write_ptr;  /* offset: 20 */
    uint32_t _IO_write_end;  /* offset: 24 */
    uint32_t _IO_buf_base;  /* offset: 28 */
    uint32_t _IO_buf_end;  /* offset: 32 */
    uint32_t _IO_save_base;  /* offset: 36 */
    uint32_t _IO_backup_base;  /* offset: 40 */
    uint32_t _IO_save_end;  /* offset: 44 */
    uint32_t _markers;  /* offset: 48 */
    uint32_t _chain;  /* offset: 52 */
    uint32_t _fileno;  /* offset: 56 */
    uint32_t _blksize;  /* offset: 60 */
    uint32_t _old_offset;  /* offset: 64 */
    uint16_t _cur_column;  /* offset: 68 */
    uint8_t _vtable_offset;  /* offset: 70 */
    uint64_t _offset;  /* offset: 76 */
    uint32_t __pad1;  /* offset: 84 */
    uint32_t __pad2;  /* offset: 88 */
    uint32_t _mode;  /* offset: 92 */
} IO_FILE;

/* Size: 28 bytes */
typedef struct _random_data {
    uint32_t rptr;  /* offset: 4 */
    uint32_t state;  /* offset: 8 */
    uint32_t rand_type;  /* offset: 12 */
    uint32_t rand_deg;  /* offset: 16 */
    uint32_t rand_sep;  /* offset: 20 */
    uint32_t end_ptr;  /* offset: 24 */
} random_data;

/* Size: 24 bytes */
typedef struct _drand48_data {
    uint8_t __old_x;  /* offset: 6 */
    uint16_t __c;  /* offset: 12 */
    uint16_t __init;  /* offset: 14 */
    uint64_t __a;  /* offset: 16 */
} drand48_data;

/* Size: 16 bytes */
typedef struct _x509_hash_dir_st {
    uint32_t num_dirs;  /* offset: 0 */
    uint32_t dirs;  /* offset: 4 */
    uint32_t num_dirs_alloced;  /* offset: 12 */
} x509_hash_dir_st;

/* Size: 16 bytes */
typedef struct _x509_file_st {
    uint32_t num_paths;  /* offset: 0 */
    uint32_t num_alloced;  /* offset: 4 */
    void* paths;  /* offset: 8 */
    void* path_type;  /* offset: 12 */
} x509_file_st;

/* Size: 8 bytes */
typedef struct _x509_object_st {
    uint32_t crl;  /* offset: 0 */
    void* pkey;  /* offset: 0 */
    uint32_t x509;  /* offset: 0 */
    uint32_t type;  /* offset: 0 */
    uint32_t u4ptr;  /* offset: 0 */
} x509_object_st;

/* Size: 40 bytes */
typedef struct _x509_lookup_method_st {
    uint32_t name;  /* offset: 0 */
    uint32_t init;  /* offset: 12 */
    uint32_t shutdown;  /* offset: 16 */
} x509_lookup_method_st;

/* Size: 36 bytes */
typedef struct _x509_store_st {
    uint32_t cache;  /* offset: 0 */
    uint32_t objs;  /* offset: 4 */
    uint32_t get_cert_methods;  /* offset: 8 */
    uint64_t ex_data;  /* offset: 20 */
    uint32_t references;  /* offset: 28 */
    uint32_t depth;  /* offset: 32 */
} x509_store_st;

/* Size: 20 bytes */
typedef struct _x509_lookup_st {
    uint32_t init;  /* offset: 0 */
    uint32_t skip;  /* offset: 4 */
    uint32_t method_data;  /* offset: 12 */
} x509_lookup_st;

/* Size: 96 bytes */
typedef struct _x509_store_ctx_st {
    uint32_t ctx;  /* offset: 0 */
    uint32_t current_method;  /* offset: 4 */
    uint32_t cert;  /* offset: 8 */
    uint32_t untrusted;  /* offset: 12 */
    void* purpose;  /* offset: 16 */
    uint32_t trust;  /* offset: 20 */
    uint32_t check_time;  /* offset: 24 */
    uint32_t flags;  /* offset: 28 */
    uint32_t other_ctx;  /* offset: 32 */
    uint32_t verify;  /* offset: 36 */
    uint32_t verify_cb;  /* offset: 40 */
    uint32_t cleanup;  /* offset: 52 */
    uint32_t depth;  /* offset: 56 */
    uint32_t valid;  /* offset: 60 */
    uint32_t last_untrusted;  /* offset: 64 */
    uint32_t chain;  /* offset: 68 */
    uint32_t error_depth;  /* offset: 72 */
    uint32_t error;  /* offset: 76 */
    uint32_t current_cert;  /* offset: 80 */
    uint32_t current_issuer;  /* offset: 84 */
    uint64_t ex_data;  /* offset: 88 */
} x509_store_ctx_st;

/* Size: 20 bytes */
typedef struct _tcphdr {
    int16_t source;  /* offset: 0 */
    uint16_t dest;  /* offset: 2 */
    uint32_t seq;  /* offset: 4 */
    uint32_t ack_seq;  /* offset: 8 */
    uint8_t res1;  /* offset: 12 */
    uint8_t doff;  /* offset: 12.5 */
    uint8_t fin;  /* offset: 13 */
    uint8_t syn;  /* offset: 13.125 */
    uint8_t rst;  /* offset: 13.25 */
    uint8_t psh;  /* offset: 13.375 */
    uint8_t ack;  /* offset: 13.5 */
    uint8_t urg;  /* offset: 13.625 */
    uint8_t res2;  /* offset: 13.75 */
    uint16_t window;  /* offset: 14 */
    uint16_t check;  /* offset: 16 */
    uint16_t urg_ptr;  /* offset: 18 */
} tcphdr;

/* Size: 92 bytes */
typedef struct _tcp_info {
    uint8_t tcpi_state;  /* offset: 0 */
    uint8_t tcpi_ca_state;  /* offset: 1 */
    uint8_t tcpi_retransmits;  /* offset: 2 */
    uint8_t tcpi_probes;  /* offset: 3 */
    uint8_t tcpi_backoff;  /* offset: 4 */
    uint8_t tcpi_options;  /* offset: 5 */
    uint8_t tcpi_snd_wscale;  /* offset: 6 */
    uint8_t tcpi_rcv_wscale;  /* offset: 6.5 */
    uint32_t tcpi_rto;  /* offset: 8 */
    uint32_t tcpi_ato;  /* offset: 12 */
    uint32_t tcpi_snd_mss;  /* offset: 16 */
    uint32_t tcpi_rcv_mss;  /* offset: 20 */
    uint32_t tcpi_unacked;  /* offset: 24 */
    uint32_t tcpi_sacked;  /* offset: 28 */
    uint32_t tcpi_lost;  /* offset: 32 */
    uint32_t tcpi_retrans;  /* offset: 36 */
    uint32_t tcpi_fackets;  /* offset: 40 */
    uint32_t tcpi_last_data_sent;  /* offset: 44 */
    uint32_t tcpi_last_ack_sent;  /* offset: 48 */
    uint32_t tcpi_last_data_recv;  /* offset: 52 */
    uint32_t tcpi_last_ack_recv;  /* offset: 56 */
    uint32_t tcpi_pmtu;  /* offset: 60 */
    uint32_t tcpi_rcv_ssthresh;  /* offset: 64 */
    uint32_t tcpi_rtt;  /* offset: 68 */
    uint32_t tcpi_rttvar;  /* offset: 72 */
    uint32_t tcpi_snd_ssthresh;  /* offset: 76 */
    uint32_t tcpi_snd_cwnd;  /* offset: 80 */
    uint32_t tcpi_advmss;  /* offset: 84 */
    uint32_t tcpi_reordering;  /* offset: 88 */
} tcp_info;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 8 bytes */
typedef struct _STSpawnRef {
    uint32_t dwID;  /* offset: 0 */
    uint32_t fDist;  /* offset: 4 */
} STSpawnRef;

/* Size: 8 bytes */
typedef struct _STNPCRef {
    uint32_t dwID;  /* offset: 0 */
    uint32_t fDist;  /* offset: 4 */
} STNPCRef;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 36 bytes */
typedef struct _CLogFilter {
    uint32_t iID;  /* offset: 4 */
    uint32_t iFlags;  /* offset: 8 */
} CLogFilter;

/* Size: 104 bytes */
typedef struct _CLog {
    uint32_t m_iActiveFlag;  /* offset: 100 */
} CLog;

/* Size: 128 bytes */
typedef struct _siginfo {
    uint32_t s8_timer1;  /* offset: 0 */
    uint32_t s4si_addr;  /* offset: 0 */
    uint32_t s20si_pid;  /* offset: 0 */
    uint32_t s12si_pid;  /* offset: 0 */
    uint32_t si_signo;  /* offset: 0 */
    uint32_t s8si_band;  /* offset: 0 */
    uint32_t s8si_pid;  /* offset: 0 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_fd;  /* offset: 4 */
    uint32_t _timer2;  /* offset: 4 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_errno;  /* offset: 4 */
    uint32_t si_uid;  /* offset: 4 */
    uint32_t si_code;  /* offset: 8 */
    uint32_t si_status;  /* offset: 8 */
    uint32_t si_sigval;  /* offset: 8 */
    uint32_t si_utime;  /* offset: 12 */
    uint32_t si_stime;  /* offset: 16 */
} siginfo;

/* Size: 64 bytes */
typedef struct _sigevent {
    uint32_t sigev_value;  /* offset: 0 */
    uint32_t _attribute;  /* offset: 4 */
    uint32_t sigev_signo;  /* offset: 4 */
    uint32_t sigev_notify;  /* offset: 8 */
} sigevent;

/* Size: 140 bytes */
typedef struct _sigaction {
    uint32_t u4sa_handler;  /* offset: 0 */
    uint8_t sa_mask;  /* offset: 4 */
    uint32_t sa_flags;  /* offset: 132 */
} sigaction;

/* Size: 10 bytes */
typedef struct _libc_fpreg {
    uint64_t significand;  /* offset: 0 */
    uint16_t exponent;  /* offset: 8 */
} libc_fpreg;

/* Size: 112 bytes */
typedef struct _libc_fpstate {
    uint32_t cw;  /* offset: 0 */
    uint32_t sw;  /* offset: 4 */
    uint32_t tag;  /* offset: 8 */
    uint32_t ipoff;  /* offset: 12 */
    uint32_t cssel;  /* offset: 16 */
    uint32_t dataoff;  /* offset: 20 */
    uint32_t datasel;  /* offset: 24 */
    uint32_t status;  /* offset: 108 */
} libc_fpstate;

/* Size: 348 bytes */
typedef struct _ucontext {
    uint32_t uc_flags;  /* offset: 0 */
    uint8_t uc_stack;  /* offset: 8 */
    uint8_t uc_mcontext;  /* offset: 20 */
    uint8_t uc_sigmask;  /* offset: 108 */
    uint8_t __fpregs_mem;  /* offset: 236 */
} ucontext;

/* Size: 4 bytes */
typedef struct _in_addr {
    uint32_t s_addr;  /* offset: 0 */
} in_addr;

/* Size: 16 bytes */
typedef struct _sockaddr {
    int16_t sa_family;  /* offset: 0 */
} sockaddr;

/* Size: 128 bytes */
typedef struct _sockaddr_storage {
    int16_t ss_family;  /* offset: 0 */
    uint32_t __ss_align;  /* offset: 4 */
} sockaddr_storage;

/* Size: 28 bytes */
typedef struct _msghdr {
    uint32_t msg_name;  /* offset: 0 */
    uint32_t msg_namelen;  /* offset: 4 */
    uint32_t msg_iovlen;  /* offset: 12 */
    uint32_t msg_control;  /* offset: 16 */
    uint32_t msg_controllen;  /* offset: 20 */
    uint32_t msg_flags;  /* offset: 24 */
} msghdr;

/* Size: 12 bytes */
typedef struct _cmsghdr {
    uint32_t cmsg_len;  /* offset: 0 */
    uint32_t cmsg_level;  /* offset: 4 */
    uint32_t cmsg_type;  /* offset: 8 */
} cmsghdr;

/* Size: 12 bytes */
typedef struct _ucred {
    void* pid;  /* offset: 0 */
    uint32_t uid;  /* offset: 4 */
    uint32_t gid;  /* offset: 8 */
} ucred;

/* Size: 8 bytes */
typedef struct _linger {
    uint32_t l_onoff;  /* offset: 0 */
    uint32_t l_linger;  /* offset: 4 */
} linger;

/* Size: 16 bytes */
typedef struct _sockaddr_in {
    int16_t sin_family;  /* offset: 0 */
    int16_t sin_port;  /* offset: 2 */
    uint32_t sin_addr;  /* offset: 4 */
} sockaddr_in;

/* Size: 28 bytes */
typedef struct _sockaddr_in6 {
    int16_t sin6_family;  /* offset: 0 */
    int16_t sin6_port;  /* offset: 2 */
    uint32_t sin6_flowinfo;  /* offset: 4 */
    uint8_t sin6_addr;  /* offset: 8 */
    uint32_t sin6_scope_id;  /* offset: 24 */
} sockaddr_in6;

/* Size: 20 bytes */
typedef struct _ipv6_mreq {
    uint8_t ipv6mr_multiaddr;  /* offset: 0 */
    uint32_t ipv6mr_interface;  /* offset: 16 */
} ipv6_mreq;

/* Size: 20 bytes */
typedef struct _in6_pktinfo {
    uint8_t ipi6_addr;  /* offset: 0 */
    uint32_t ipi6_ifindex;  /* offset: 16 */
} in6_pktinfo;

/* Size: 1132 bytes */
typedef struct _BlobDef {
    uint8_t szTable;  /* offset: 0 */
    uint8_t szField;  /* offset: 80 */
    uint8_t szAddFieldsData;  /* offset: 560 */
    void* pData;  /* offset: 1120 */
    uint32_t iSize;  /* offset: 1124 */
    uint32_t iNumAddFields;  /* offset: 1128 */
} BlobDef;

/* Size: 33559396 bytes */
typedef struct _CDBAccess {
    uint32_t row;  /* offset: 33559392 */
} CDBAccess;

/* Size: 8 bytes */
typedef struct _FW_DATA_CHAR_STATISTIC {
    uint32_t lValue;  /* offset: 0 */
    uint32_t lValue2;  /* offset: 4 */
} FW_DATA_CHAR_STATISTIC;

/* Size: 10 bytes */
typedef struct _FW_DATA_CHAR_ALLPRIMATTR {
    uint16_t wStr;  /* offset: 0 */
    uint16_t wAgl;  /* offset: 2 */
    uint16_t wCon;  /* offset: 4 */
    uint16_t wMnd;  /* offset: 6 */
    uint16_t wPer;  /* offset: 8 */
} FW_DATA_CHAR_ALLPRIMATTR;

/* Size: 40 bytes */
typedef struct _FW_DATA_CHAR_ALLSECSTAT {
    uint8_t byPrestige;  /* offset: 0 */
    uint8_t byClan;  /* offset: 1 */
    uint8_t byMovement;  /* offset: 2 */
    uint32_t lFire;  /* offset: 4 */
    uint32_t lCold;  /* offset: 8 */
    uint32_t lPoison;  /* offset: 12 */
    uint32_t lLightning;  /* offset: 16 */
    uint32_t lPhysical;  /* offset: 20 */
    uint16_t wLevel;  /* offset: 24 */
    uint16_t wAttack;  /* offset: 26 */
    uint16_t wDefense;  /* offset: 28 */
    uint16_t wMinDmg;  /* offset: 30 */
    uint16_t wMaxDmg;  /* offset: 32 */
    uint16_t wWeightAll;  /* offset: 34 */
    uint32_t dwXP;  /* offset: 36 */
} FW_DATA_CHAR_ALLSECSTAT;

/* Size: 4 bytes */
typedef struct _FW_DATA_CHAR_DAMAGE {
    uint16_t wMinDmg;  /* offset: 0 */
    uint16_t wMaxDmg;  /* offset: 2 */
} FW_DATA_CHAR_DAMAGE;

/* Size: 20 bytes */
typedef struct _FW_DATA_CHAR_RESPAWN {
    uint16_t wSceneID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fGameTime;  /* offset: 16 */
} FW_DATA_CHAR_RESPAWN;

/* Size: 2 bytes */
typedef struct _FW_DATA_CHAR_NEW {
    uint8_t bySlot;  /* offset: 0 */
    uint8_t byLanguage;  /* offset: 1 */
} FW_DATA_CHAR_NEW;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_DELETE {
    uint8_t bySlotID;  /* offset: 0 */
} FW_DATA_CHAR_DELETE;

/* Size: 64 bytes */
typedef struct _FW_DATA_CHAR_CREATE {
    uint8_t bySlotID;  /* offset: 0 */
    uint32_t dwModelID;  /* offset: 4 */
    uint8_t byStance;  /* offset: 54 */
    uint8_t byLocation;  /* offset: 55 */
    uint8_t byStrength;  /* offset: 56 */
    uint8_t byConstitution;  /* offset: 57 */
    uint8_t byAgility;  /* offset: 58 */
    uint8_t byMind;  /* offset: 59 */
    uint8_t byPerception;  /* offset: 60 */
    uint8_t byGender;  /* offset: 61 */
    uint8_t byElementalAdv;  /* offset: 62 */
    uint8_t byTemplateID;  /* offset: 63 */
} FW_DATA_CHAR_CREATE;

/* Size: 660 bytes */
typedef struct _FW_DATA_CHAR_NEWDATA {
    uint8_t dwElement;  /* offset: 0 */
    uint8_t dwElementDesc;  /* offset: 20 */
    uint8_t byAttrPoints;  /* offset: 40 */
    uint8_t byStrength;  /* offset: 41 */
    uint8_t byMinStrength;  /* offset: 42 */
    uint8_t byMaxStrength;  /* offset: 43 */
    uint8_t byConstitution;  /* offset: 44 */
    uint8_t byMinConstitution;  /* offset: 45 */
    uint8_t byMaxConstitution;  /* offset: 46 */
    uint8_t byAgility;  /* offset: 47 */
    uint8_t byMinAgility;  /* offset: 48 */
    uint8_t byMaxAgility;  /* offset: 49 */
    uint8_t byMind;  /* offset: 50 */
    uint8_t byMinMind;  /* offset: 51 */
    uint8_t byMaxMind;  /* offset: 52 */
    uint8_t byPerception;  /* offset: 53 */
    uint8_t byMinPerception;  /* offset: 54 */
    uint8_t byMaxPerception;  /* offset: 55 */
    uint8_t dwTemplate;  /* offset: 56 */
    uint8_t dwTemplateDesc;  /* offset: 96 */
    uint8_t dwStance;  /* offset: 136 */
    uint8_t dwStanceDesc;  /* offset: 176 */
    uint8_t dwStanceID;  /* offset: 216 */
    uint8_t dwWeaponID;  /* offset: 256 */
    uint8_t bySkillPoints;  /* offset: 296 */
    uint8_t dwSkill;  /* offset: 300 */
    uint8_t dwSkillDesc;  /* offset: 380 */
    uint8_t dwLocation;  /* offset: 460 */
    uint8_t dwLocationDesc;  /* offset: 540 */
    uint8_t wSkillID;  /* offset: 620 */
} FW_DATA_CHAR_NEWDATA;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_REQTEMPLATE {
    uint8_t byTemplateID;  /* offset: 0 */
} FW_DATA_CHAR_REQTEMPLATE;

/* Size: 20 bytes */
typedef struct _FW_DATA_CHAR_TEMPLATEDATA {
    uint32_t dwModelID;  /* offset: 0 */
    uint8_t byStrength;  /* offset: 4 */
    uint8_t byConstitution;  /* offset: 5 */
    uint8_t byAgility;  /* offset: 6 */
    uint8_t byMind;  /* offset: 7 */
    uint8_t byPerception;  /* offset: 8 */
    uint8_t bySkills;  /* offset: 9 */
    uint8_t byStance;  /* offset: 15 */
    uint8_t byElementalAdv;  /* offset: 16 */
} FW_DATA_CHAR_TEMPLATEDATA;

/* Size: 2 bytes */
typedef struct _FW_DATA_CHAR_STATUS {
    uint16_t dwIndex;  /* offset: 0 */
} FW_DATA_CHAR_STATUS;

/* Size: 296 bytes */
typedef struct _FW_DATA_CHAR_LIST {
    uint8_t byCount;  /* offset: 0 */
    uint8_t byMaxChars;  /* offset: 1 */
    uint8_t wLevelA;  /* offset: 122 */
    uint8_t wClanString;  /* offset: 128 */
    uint8_t wLocationString;  /* offset: 134 */
    uint8_t dwStanceA;  /* offset: 272 */
    uint8_t dwWeaponA;  /* offset: 284 */
} FW_DATA_CHAR_LIST;

/* Size: 4 bytes */
typedef struct _FW_DATA_CHAR_ABILITYUP {
    uint32_t dwAbilityID;  /* offset: 0 */
} FW_DATA_CHAR_ABILITYUP;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_TEMPLATE {
    uint8_t byOn;  /* offset: 0 */
} FW_DATA_CHAR_TEMPLATE;

/* Size: 8 bytes */
typedef struct _FW_DATA_CHAR_FLAG {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwFlags;  /* offset: 4 */
} FW_DATA_CHAR_FLAG;

/* Size: 1 bytes */
typedef struct _FW_DATA_CHAR_LEVEL_GAUGE {
    uint8_t byPercent;  /* offset: 0 */
} FW_DATA_CHAR_LEVEL_GAUGE;

/* Size: 8 bytes */
typedef struct _FW_DATA_CHAR_MODEL {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwModelID;  /* offset: 4 */
} FW_DATA_CHAR_MODEL;

/* Size: 20 bytes */
typedef struct _FW_DATA_GEN_EFFECT {
    uint32_t dwEffectID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint32_t x;  /* offset: 8 */
    uint32_t y;  /* offset: 12 */
    uint32_t z;  /* offset: 16 */
} FW_DATA_GEN_EFFECT;

/* Size: 4 bytes */
typedef struct _FW_DATA_GEN_EFFECTID {
    uint32_t dwEffectID;  /* offset: 0 */
} FW_DATA_GEN_EFFECTID;

/* Size: 16 bytes */
typedef struct _FW_DATA_GEN_STRING {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
} FW_DATA_GEN_STRING;

/* Size: 144 bytes */
typedef struct _FW_DATA_GEN_NPCMESSAGE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwLabel;  /* offset: 4 */
    uint8_t wMsgStrID;  /* offset: 8 */
    uint8_t dwVar1;  /* offset: 28 */
    uint8_t dwVar2;  /* offset: 68 */
    uint8_t wOptID;  /* offset: 126 */
} FW_DATA_GEN_NPCMESSAGE;

/* Size: 216 bytes */
typedef struct _FW_DATA_GEN_NPCMESSAGE_1 {
    uint8_t dwOptVar2;  /* offset: 180 */
} FW_DATA_GEN_NPCMESSAGE_1;

/* Size: 1 bytes */
typedef struct _FW_DATA_GEN_WEATHER {
    uint8_t byWeatherID;  /* offset: 0 */
} FW_DATA_GEN_WEATHER;

/* Size: 8 bytes */
typedef struct _FW_DATA_GEN_GAMETIME {
    uint32_t fGameTime;  /* offset: 0 */
    uint32_t fTimeSpeed;  /* offset: 4 */
} FW_DATA_GEN_GAMETIME;

/* Size: 1 bytes */
typedef struct _FW_DATA_GEN_ACTION {
    uint8_t byAction;  /* offset: 0 */
} FW_DATA_GEN_ACTION;

/* Size: 4 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR0 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 2 */
} FW_DATA_GEN_STRING_VAR0;

/* Size: 12 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR1 {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam;  /* offset: 4 */
    uint8_t byType;  /* offset: 8 */
} FW_DATA_GEN_STRING_VAR1;

/* Size: 16 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR2 {
    uint16_t wStringID;  /* offset: 0 */
    uint64_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 12 */
} FW_DATA_GEN_STRING_VAR2;

/* Size: 20 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR3 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 16 */
} FW_DATA_GEN_STRING_VAR3;

/* Size: 24 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR4 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 20 */
} FW_DATA_GEN_STRING_VAR4;

/* Size: 28 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR5 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 24 */
} FW_DATA_GEN_STRING_VAR5;

/* Size: 32 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR6 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 28 */
} FW_DATA_GEN_STRING_VAR6;

/* Size: 36 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR7 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 32 */
} FW_DATA_GEN_STRING_VAR7;

/* Size: 40 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR8 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 36 */
} FW_DATA_GEN_STRING_VAR8;

/* Size: 44 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR9 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 40 */
} FW_DATA_GEN_STRING_VAR9;

/* Size: 48 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR10 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 44 */
} FW_DATA_GEN_STRING_VAR10;

/* Size: 52 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR11 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 48 */
} FW_DATA_GEN_STRING_VAR11;

/* Size: 56 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR12 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 52 */
} FW_DATA_GEN_STRING_VAR12;

/* Size: 60 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR13 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 56 */
} FW_DATA_GEN_STRING_VAR13;

/* Size: 64 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR14 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 60 */
} FW_DATA_GEN_STRING_VAR14;

/* Size: 68 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR15 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t byType;  /* offset: 64 */
} FW_DATA_GEN_STRING_VAR15;

/* Size: 72 bytes */
typedef struct _FW_DATA_GEN_STRING_VAR16 {
    uint16_t wStringID;  /* offset: 0 */
    uint8_t dwParamA;  /* offset: 4 */
    uint8_t byType;  /* offset: 68 */
} FW_DATA_GEN_STRING_VAR16;

/* Size: 8 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI3 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 6 */
} FW_DATA_GEN_STRINGS_MULTI3;

/* Size: 10 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI4 {
    uint64_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 8 */
} FW_DATA_GEN_STRINGS_MULTI4;

/* Size: 12 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI5 {
    uint8_t byType;  /* offset: 10 */
} FW_DATA_GEN_STRINGS_MULTI5;

/* Size: 14 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI6 {
    uint8_t byType;  /* offset: 12 */
} FW_DATA_GEN_STRINGS_MULTI6;

/* Size: 16 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI7 {
    uint8_t byType;  /* offset: 14 */
} FW_DATA_GEN_STRINGS_MULTI7;

/* Size: 18 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI8 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 16 */
} FW_DATA_GEN_STRINGS_MULTI8;

/* Size: 20 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI9 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 18 */
} FW_DATA_GEN_STRINGS_MULTI9;

/* Size: 22 bytes */
typedef struct _FW_DATA_GEN_STRINGS_MULTI10 {
    uint8_t wStringIDA;  /* offset: 0 */
    uint8_t byType;  /* offset: 20 */
} FW_DATA_GEN_STRINGS_MULTI10;

/* Size: 56 bytes */
typedef struct _FW_DATA_GEN_BUFFERSTRING {
    uint8_t wBufferA;  /* offset: 0 */
    uint16_t wStringID;  /* offset: 40 */
    uint32_t dwParam1;  /* offset: 44 */
    uint32_t dwParam2;  /* offset: 48 */
    uint8_t byType;  /* offset: 52 */
} FW_DATA_GEN_BUFFERSTRING;

/* Size: 12 bytes */
typedef struct _FW_DATA_GEN_EMOTE {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwTargetID;  /* offset: 4 */
    uint16_t wEmote;  /* offset: 8 */
} FW_DATA_GEN_EMOTE;

/* Size: 8 bytes */
typedef struct _FW_DATA_GEN_CONSTEFFECTS {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t dwEffects;  /* offset: 4 */
} FW_DATA_GEN_CONSTEFFECTS;

/* Size: 144 bytes */
typedef struct _CTimer {
    uint32_t startdate;  /* offset: 0 */
    uint32_t start;  /* offset: 4 */
    uint32_t dwSeconds;  /* offset: 8 */
    uint32_t dwTimes;  /* offset: 12 */
    uint32_t dwInterval;  /* offset: 16 */
    uint8_t dwParams;  /* offset: 20 */
    uint8_t chModuleName;  /* offset: 60 */
    uint32_t secbase;  /* offset: 140 */
} CTimer;

/* Size: 11480 bytes */
typedef struct _ProcCtrlBlk {
    uint16_t wServerID;  /* offset: 0 */
    uint32_t iPortNum;  /* offset: 4 */
    uint32_t iWPortNum;  /* offset: 8 */
    uint8_t chWSTicket;  /* offset: 28 */
    uint32_t iWCPortNum;  /* offset: 44 */
    uint32_t iNumSThreads;  /* offset: 48 */
    uint32_t iStatusInterval;  /* offset: 132 */
    uint32_t iStatsInterval;  /* offset: 136 */
    uint32_t iConnTimeOut;  /* offset: 140 */
    uint32_t iRetryInterval;  /* offset: 144 */
    uint32_t iNumConns;  /* offset: 148 */
    uint32_t iRcvBuffSize;  /* offset: 152 */
    uint32_t iSndBuffSize;  /* offset: 156 */
    uint32_t iSendInterval;  /* offset: 160 */
    uint32_t iMemLocks;  /* offset: 164 */
    uint32_t iObjectsPerPage;  /* offset: 168 */
    uint32_t iMaxScripts;  /* offset: 172 */
    uint32_t iMaxEvents;  /* offset: 176 */
    uint32_t iMaxNPC;  /* offset: 180 */
    uint32_t iMaxSpawnPt;  /* offset: 184 */
    uint32_t iMaxNPCAttrib;  /* offset: 188 */
    uint32_t iTickSpawnScan;  /* offset: 192 */
    uint32_t iTickSpawnExtendedScan;  /* offset: 196 */
    uint32_t iTickNPCDeath;  /* offset: 200 */
    uint32_t iTickNPCSuicide;  /* offset: 204 */
    uint32_t iTickCombatWaypoint;  /* offset: 208 */
    uint32_t iTickLootDeath;  /* offset: 212 */
    uint32_t iTickEnemyScan;  /* offset: 216 */
    uint32_t iTickMoveInterval;  /* offset: 220 */
    uint32_t iTickAttackInterval;  /* offset: 224 */
    uint32_t iTickWaitInterval;  /* offset: 228 */
    uint32_t iTickStatus;  /* offset: 232 */
    uint32_t iTickCheckNPC;  /* offset: 236 */
    uint32_t iMaxWayPt;  /* offset: 240 */
    uint32_t iRangeEnemyScan;  /* offset: 244 */
    uint32_t iRangeSpawnScan;  /* offset: 248 */
    uint8_t chDBName;  /* offset: 252 */
    uint8_t chDBHost;  /* offset: 317 */
    uint8_t chDBUser;  /* offset: 378 */
    uint8_t chDBPassword;  /* offset: 395 */
    uint8_t chAuthName;  /* offset: 412 */
    uint8_t chAuthHost;  /* offset: 477 */
    uint8_t chScriptLog;  /* offset: 538 */
    void* pPointer1;  /* offset: 620 */
    void* pPointer2;  /* offset: 624 */
    void* pPointer3;  /* offset: 628 */
    void* pPointer4;  /* offset: 632 */
    void* pPointer5;  /* offset: 636 */
    void* pPointer6;  /* offset: 640 */
    void* pPointer7;  /* offset: 644 */
    uint8_t chDBScriptPath;  /* offset: 10888 */
    uint8_t chLicenseServer1;  /* offset: 11400 */
    uint8_t chLicenseServer2;  /* offset: 11417 */
    uint8_t chLicenseServer3;  /* offset: 11434 */
    uint32_t iSettingID;  /* offset: 11452 */
    uint32_t dwChatCharID;  /* offset: 11456 */
    uint8_t chLoggingServerIP;  /* offset: 11460 */
} ProcCtrlBlk;

/* Size: 24 bytes */
typedef struct _MEMHANDLE {
    uint32_t iIndex;  /* offset: 0 */
    uint32_t dwCategory;  /* offset: 4 */
    uint32_t dwPrimaryKey;  /* offset: 8 */
    uint16_t wNumElements;  /* offset: 12 */
    uint32_t iPID;  /* offset: 16 */
    uint32_t dwSecondaryKey;  /* offset: 20 */
} MEMHANDLE;

/* Size: 28 bytes */
typedef struct _MemStats {
    uint32_t iDynamicObj;  /* offset: 0 */
    uint32_t iListObj;  /* offset: 4 */
    uint32_t iMultiListObj;  /* offset: 8 */
    uint32_t iDynamicFreeObj;  /* offset: 12 */
    uint32_t iStaticObj;  /* offset: 16 */
    uint32_t iAllocObj;  /* offset: 20 */
    uint32_t iMiscObj;  /* offset: 24 */
} MemStats;

/* Size: 60 bytes */
typedef struct _CMemObject {
    uint8_t m_hMem;  /* offset: 36 */
} CMemObject;

/* Size: 516 bytes */
typedef struct _CMemMgr {
    uint32_t fExit;  /* offset: 508 */
    uint32_t m_iStatus;  /* offset: 512 */
} CMemMgr;

/* Size: 76 bytes */
typedef struct _tMemCacheObject {
    void* pMemObject;  /* offset: 0 */
    uint16_t wElements;  /* offset: 4 */
    uint8_t CacheCopy;  /* offset: 8 */
    void* pPrev;  /* offset: 72 */
} tMemCacheObject;

/* Size: 80 bytes */
typedef struct _CMemAccess {
    uint8_t m_hCurrMem;  /* offset: 48 */
    uint32_t m_dwProcessID;  /* offset: 72 */
    uint32_t m_pLastObject;  /* offset: 76 */
} CMemAccess;

/* Size: 88 bytes */
typedef struct _EventDef {
    uint32_t dwID;  /* offset: 0 */
    uint16_t wEventID;  /* offset: 4 */
    uint32_t dwEntityID;  /* offset: 8 */
    void* pSendThread;  /* offset: 12 */
    uint8_t byType;  /* offset: 16 */
    uint8_t byOccurance;  /* offset: 17 */
    uint8_t byParams;  /* offset: 18 */
    uint32_t dwInterval;  /* offset: 20 */
    uint32_t dwOccurances;  /* offset: 24 */
    uint8_t startdate;  /* offset: 28 */
    uint16_t wSize;  /* offset: 72 */
    uint32_t dwLastTime;  /* offset: 76 */
    uint32_t fActive;  /* offset: 80 */
    void* pData;  /* offset: 84 */
} EventDef;

/* Size: 1128 bytes */
typedef struct _Event {
    uint32_t dwID;  /* offset: 0 */
    uint16_t wEventID;  /* offset: 4 */
    uint32_t dwEntityID;  /* offset: 8 */
    void* pSendThread;  /* offset: 12 */
    uint8_t byType;  /* offset: 16 */
    uint8_t byOccurance;  /* offset: 17 */
    uint8_t byParams;  /* offset: 18 */
    uint32_t dwLastTime;  /* offset: 20 */
    uint32_t dwLastTick;  /* offset: 24 */
    uint8_t startdate;  /* offset: 28 */
    uint32_t dwCount;  /* offset: 72 */
    uint32_t dwInterval;  /* offset: 76 */
    uint16_t wSize;  /* offset: 80 */
    uint32_t fActive;  /* offset: 1108 */
    uint32_t fAlive;  /* offset: 1112 */
    uint32_t fDelete;  /* offset: 1116 */
    void* pPrev;  /* offset: 1124 */
} Event;

/* Size: 120 bytes */
typedef struct _CEventMgr {
    uint32_t m_iALog;  /* offset: 108 */
    uint32_t fExit;  /* offset: 112 */
    uint32_t m_iStatus;  /* offset: 116 */
} CEventMgr;

/* Size: 224 bytes */
typedef struct _Connection {
    uint8_t address;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 16 */
    uint32_t lastsend;  /* offset: 20 */
    uint32_t lastrecv;  /* offset: 24 */
    uint32_t SendQueue;  /* offset: 28 */
    uint32_t SendImmediate;  /* offset: 32 */
    uint32_t lastcheckpc;  /* offset: 36 */
    uint32_t recvtime;  /* offset: 40 */
    uint32_t closetime;  /* offset: 44 */
    uint32_t RecvQueue;  /* offset: 48 */
    uint8_t chTicket;  /* offset: 52 */
    uint32_t m_iTimeOut;  /* offset: 68 */
    uint32_t fZoningFlag;  /* offset: 72 */
    uint32_t fDelFlag;  /* offset: 76 */
    uint32_t fClosingFlag;  /* offset: 80 */
    uint32_t fUsed;  /* offset: 84 */
    uint32_t fErrorFlag;  /* offset: 88 */
    uint32_t iSocket;  /* offset: 92 */
    uint16_t wPortNum;  /* offset: 96 */
    uint32_t iSendInterval;  /* offset: 100 */
    uint32_t m_dwPacketTime;  /* offset: 104 */
    uint32_t m_dwPacketCount;  /* offset: 108 */
    uint8_t send_mutex;  /* offset: 112 */
    uint8_t recv_mutex;  /* offset: 136 */
    uint8_t send_imm_mutex;  /* offset: 160 */
    uint8_t gen_mutex;  /* offset: 184 */
    uint32_t iFirst;  /* offset: 208 */
    uint32_t m_dwRecvBuffSize;  /* offset: 212 */
    void* pPrev;  /* offset: 220 */
} Connection;

/* Size: 824 bytes */
typedef struct _CSession {
    uint32_t m_iNumConnects;  /* offset: 748 */
    uint32_t iPortNum;  /* offset: 752 */
    uint32_t iStartupFlag;  /* offset: 756 */
    uint32_t iDeleteFlag;  /* offset: 760 */
    uint32_t fExit;  /* offset: 764 */
    uint32_t m_iLogLevel;  /* offset: 768 */
    uint32_t m_iALog;  /* offset: 772 */
    uint8_t defaultaddr;  /* offset: 776 */
    uint8_t wc_addr;  /* offset: 792 */
    uint32_t m_iStatus;  /* offset: 808 */
    uint32_t m_iDebug;  /* offset: 812 */
    void* pPrev;  /* offset: 820 */
} CSession;

/* Size: 36 bytes */
typedef struct _tObjectCache {
    uint32_t dwID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fDir;  /* offset: 16 */
    uint8_t byMoveState;  /* offset: 20 */
    uint8_t bySpeed;  /* offset: 21 */
    uint32_t iCount;  /* offset: 24 */
    void* pPrev;  /* offset: 32 */
} tObjectCache;

/* Size: 204 bytes */
typedef struct _tObjectHandle {
    uint8_t matTM;  /* offset: 0 */
    uint64_t byProcessFlag;  /* offset: 64 */
    uint8_t vHalfExtents;  /* offset: 104 */
    void* pScene;  /* offset: 116 */
    void* pSendThread;  /* offset: 124 */
    uint32_t dwID;  /* offset: 128 */
    uint32_t fSize;  /* offset: 132 */
    uint32_t fRadius;  /* offset: 136 */
    uint32_t fDir;  /* offset: 140 */
    uint32_t dwFlags;  /* offset: 144 */
    uint32_t dwModelID;  /* offset: 148 */
    uint32_t dwScript;  /* offset: 152 */
    uint32_t dwTimeStamp;  /* offset: 156 */
    uint32_t dwSendCount;  /* offset: 160 */
    uint32_t iMinX;  /* offset: 164 */
    uint32_t iMaxX;  /* offset: 168 */
    uint32_t iMinY;  /* offset: 172 */
    uint32_t iMaxY;  /* offset: 176 */
    uint32_t dwInScene;  /* offset: 180 */
    uint32_t iOnlineFlag;  /* offset: 184 */
    uint16_t wGMOptions;  /* offset: 188 */
    uint16_t wLevel;  /* offset: 190 */
    uint16_t wStanceID;  /* offset: 192 */
    uint16_t wClanID;  /* offset: 194 */
    uint8_t byType;  /* offset: 196 */
    uint8_t bySpeed;  /* offset: 197 */
    uint8_t byLock;  /* offset: 198 */
    uint8_t byMoveState;  /* offset: 199 */
    uint8_t byIsGM;  /* offset: 200 */
    uint8_t byMoveLock;  /* offset: 201 */
    uint8_t byInvisible;  /* offset: 202 */
} tObjectHandle;

/* Size: 200 bytes */
typedef struct _tBoundingBox {
    uint8_t matTM;  /* offset: 0 */
    uint8_t vHalfAxis;  /* offset: 64 */
    uint32_t dwID;  /* offset: 76 */
    uint32_t dwFlags;  /* offset: 80 */
    uint32_t dwScript;  /* offset: 84 */
    uint32_t dwCheckFlag;  /* offset: 184 */
    uint64_t byProcessFlag;  /* offset: 188 */
    void* pOwner;  /* offset: 196 */
} tBoundingBox;

/* Size: 28 bytes */
typedef struct _tPoint {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwFlags;  /* offset: 4 */
    uint32_t dwProperty;  /* offset: 8 */
    uint8_t vPos;  /* offset: 12 */
    uint32_t bCheck;  /* offset: 24 */
} tPoint;

/* Size: 8 bytes */
typedef struct _tWayPointNetID {
    uint64_t dwPointa;  /* offset: 0 */
} tWayPointNetID;

/* Size: 8 bytes */
typedef struct _tChunk {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwSize;  /* offset: 4 */
} tChunk;

/* Size: 1608 bytes */
typedef struct _CSceneSharedData {
    uint8_t m_CPCList;  /* offset: 0 */
    uint64_t m_CNPCList;  /* offset: 1584 */
    uint8_t m_CCollisionList;  /* offset: 1592 */
} CSceneSharedData;

/* Size: 132540 bytes */
typedef struct _CScene {
    uint8_t scenelock;  /* offset: 132492 */
    uint8_t m_byWeather;  /* offset: 132524 */
    uint8_t m_byWeatherType;  /* offset: 132525 */
    uint8_t m_byKillZoneFlag;  /* offset: 132526 */
    uint32_t m_dwTimeOffset;  /* offset: 132528 */
    uint32_t m_dwScriptID;  /* offset: 132532 */
} CScene;

/* Size: 40 bytes */
typedef struct _AuthList {
    uint8_t chTicket;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 16 */
    uint8_t address;  /* offset: 20 */
} AuthList;

/* Size: 280 bytes */
typedef struct _CCommsMgr {
    uint32_t fExit;  /* offset: 244 */
    uint32_t m_iStatus;  /* offset: 248 */
    uint8_t udp_srv_addr;  /* offset: 252 */
    uint32_t iSocket;  /* offset: 268 */
    uint32_t m_iSocket;  /* offset: 272 */
    uint32_t m_iWSocket;  /* offset: 276 */
} CCommsMgr;

/* Size: 8 bytes */
typedef struct _ScriptParams {
    uint64_t dwParams;  /* offset: 0 */
} ScriptParams;

/* Size: 1052 bytes */
typedef struct _Task {
    uint8_t byTaskType;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint16_t wEventID;  /* offset: 8 */
    uint32_t fUsed;  /* offset: 12 */
    uint16_t wSize;  /* offset: 16 */
    void* pSendThread;  /* offset: 20 */
    uint8_t byData;  /* offset: 24 */
} Task;

/* Size: 32 bytes */
typedef struct _TaskDef {
    uint8_t byTaskType;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint16_t wEventID;  /* offset: 8 */
    uint16_t wSize;  /* offset: 10 */
    void* pSendThread;  /* offset: 12 */
    void* pData;  /* offset: 16 */
    uint8_t bySecurity;  /* offset: 20 */
    uint32_t iCallCheck;  /* offset: 24 */
    void* pParams;  /* offset: 28 */
} TaskDef;

/* Size: 16 bytes */
typedef struct _ScriptData {
    uint32_t dwScriptID;  /* offset: 0 */
    uint32_t dwSize;  /* offset: 4 */
    void* pData;  /* offset: 8 */
} ScriptData;

/* Size: 60 bytes */
typedef struct _CVM {
    uint32_t L;  /* offset: 56 */
} CVM;

/* Size: 33520 bytes */
typedef struct _CGS {
    uint32_t L;  /* offset: 732 */
    uint32_t m_dwChatID;  /* offset: 736 */
    uint8_t m_pObjectList;  /* offset: 740 */
    uint32_t m_iMoveDebug;  /* offset: 33508 */
    uint32_t m_dwTrackID;  /* offset: 33512 */
    uint32_t m_dwTrack2ID;  /* offset: 33516 */
} CGS;

/* Size: 152 bytes */
typedef struct _CTaskMgr {
    uint32_t m_pDBAccess;  /* offset: 136 */
    uint32_t m_iSettingID;  /* offset: 140 */
    uint32_t m_dwProcessID;  /* offset: 144 */
    uint32_t m_iCallThreshold;  /* offset: 148 */
} CTaskMgr;

/* Size: 11860 bytes */
typedef struct _CProcMgr {
    uint32_t fExit;  /* offset: 368 */
    uint8_t SysProcCtrlBlk;  /* offset: 372 */
    uint32_t m_iStatus;  /* offset: 11852 */
    uint32_t m_iStartCount;  /* offset: 11856 */
} CProcMgr;

/* Size: 20 bytes */
typedef struct _Params {
    uint8_t dwParam;  /* offset: 0 */
} Params;

/* Size: 8 bytes */
typedef struct _AttribValues {
    uint32_t lValue1;  /* offset: 0 */
    uint32_t lValue2;  /* offset: 4 */
} AttribValues;

/* Size: 84 bytes */
typedef struct _Binding {
    uint8_t chFunctionName;  /* offset: 0 */
} Binding;

/* Size: 12 bytes */
typedef struct _rpcent {
    uint32_t r_name;  /* offset: 0 */
    uint32_t r_aliases;  /* offset: 4 */
    uint32_t r_number;  /* offset: 8 */
} rpcent;

/* Size: 16 bytes */
typedef struct _netent {
    uint32_t n_name;  /* offset: 0 */
    uint32_t n_aliases;  /* offset: 4 */
    uint32_t n_addrtype;  /* offset: 8 */
    uint32_t n_net;  /* offset: 12 */
} netent;

/* Size: 20 bytes */
typedef struct _hostent {
    uint32_t h_name;  /* offset: 0 */
    uint32_t h_aliases;  /* offset: 4 */
    uint32_t h_addrtype;  /* offset: 8 */
    uint32_t h_length;  /* offset: 12 */
    uint32_t h_addr_list;  /* offset: 16 */
} hostent;

/* Size: 16 bytes */
typedef struct _servent {
    uint32_t s_name;  /* offset: 0 */
    uint32_t s_aliases;  /* offset: 4 */
    uint32_t s_port;  /* offset: 8 */
    uint32_t s_proto;  /* offset: 12 */
} servent;

/* Size: 12 bytes */
typedef struct _protoent {
    uint32_t p_name;  /* offset: 0 */
    uint32_t p_aliases;  /* offset: 4 */
    uint32_t p_proto;  /* offset: 8 */
} protoent;

/* Size: 32 bytes */
typedef struct _addrinfo {
    uint32_t ai_flags;  /* offset: 0 */
    uint32_t ai_family;  /* offset: 4 */
    uint32_t ai_socktype;  /* offset: 8 */
    uint32_t ai_protocol;  /* offset: 12 */
    uint32_t ai_addrlen;  /* offset: 16 */
    uint32_t ai_addr;  /* offset: 20 */
    uint32_t ai_canonname;  /* offset: 24 */
} addrinfo;

/* Size: 40 bytes */
typedef struct _gaicb {
    uint32_t ar_name;  /* offset: 0 */
    uint32_t ar_service;  /* offset: 4 */
    uint32_t ar_result;  /* offset: 12 */
    uint32_t __return;  /* offset: 16 */
} gaicb;

/* Size: 56 bytes */
typedef struct _taglogmessage {
    uint32_t dwSrcIP;  /* offset: 0 */
    uint32_t dwSrcChar;  /* offset: 4 */
    uint32_t dwSrcScript;  /* offset: 8 */
    uint32_t dwLogID;  /* offset: 12 */
    uint8_t dwParamList;  /* offset: 16 */
} taglogmessage;

/* Size: 20 bytes */
typedef struct _tDATE_TIME {
    uint8_t day;  /* offset: 8 */
    uint8_t hour;  /* offset: 11 */
    uint8_t minute;  /* offset: 14 */
    uint8_t sec;  /* offset: 17 */
} tDATE_TIME;

/* Size: 1644 bytes */
typedef struct _LogSocket {
    uint32_t myReadQ;  /* offset: 0 */
    uint32_t myWriteQ;  /* offset: 4 */
    uint32_t ReadOffset;  /* offset: 8 */
    uint32_t WriteOffset;  /* offset: 12 */
    uint32_t sock;  /* offset: 16 */
    uint32_t m_iLoggingPort;  /* offset: 20 */
    uint8_t m_chLoggingServer;  /* offset: 1466 */
    uint32_t uiFuncConf;  /* offset: 1484 */
    uint8_t dLogMessage;  /* offset: 1488 */
    uint8_t IP;  /* offset: 1544 */
    uint8_t UserID;  /* offset: 1564 */
    uint8_t LoginTime;  /* offset: 1584 */
    uint8_t LogoutTime;  /* offset: 1604 */
    uint8_t UserPW;  /* offset: 1624 */
} LogSocket;

/* Size: 8 bytes */
typedef struct _pthread_fastlock {
    uint32_t __status;  /* offset: 0 */
    uint32_t __spinlock;  /* offset: 4 */
} pthread_fastlock;

/* Size: 36 bytes */
typedef struct __pthread_attr_s {
    uint32_t __detachstate;  /* offset: 0 */
    uint32_t __schedpolicy;  /* offset: 4 */
    uint32_t __schedparam;  /* offset: 8 */
    uint32_t __inheritsched;  /* offset: 12 */
    uint32_t __scope;  /* offset: 16 */
    uint32_t __guardsize;  /* offset: 20 */
    uint32_t __stackaddr_set;  /* offset: 24 */
    uint32_t __stacksize;  /* offset: 32 */
} _pthread_attr_s;

/* Size: 12 bytes */
typedef struct _IO_marker {
    uint32_t _pos;  /* offset: 8 */
} IO_marker;

/* Size: 148 bytes */
typedef struct _IO_FILE {
    uint32_t _flags;  /* offset: 0 */
    uint32_t _IO_read_ptr;  /* offset: 4 */
    uint32_t _IO_read_end;  /* offset: 8 */
    uint32_t _IO_read_base;  /* offset: 12 */
    uint32_t _IO_write_base;  /* offset: 16 */
    uint32_t _IO_write_ptr;  /* offset: 20 */
    uint32_t _IO_write_end;  /* offset: 24 */
    uint32_t _IO_buf_base;  /* offset: 28 */
    uint32_t _IO_buf_end;  /* offset: 32 */
    uint32_t _IO_save_base;  /* offset: 36 */
    uint32_t _IO_backup_base;  /* offset: 40 */
    uint32_t _IO_save_end;  /* offset: 44 */
    uint32_t _markers;  /* offset: 48 */
    uint32_t _chain;  /* offset: 52 */
    uint32_t _fileno;  /* offset: 56 */
    uint32_t _blksize;  /* offset: 60 */
    uint32_t _old_offset;  /* offset: 64 */
    uint16_t _cur_column;  /* offset: 68 */
    uint8_t _vtable_offset;  /* offset: 70 */
    uint64_t _offset;  /* offset: 76 */
    uint32_t __pad1;  /* offset: 84 */
    uint32_t __pad2;  /* offset: 88 */
    uint32_t _mode;  /* offset: 92 */
} IO_FILE;

/* Size: 28 bytes */
typedef struct _random_data {
    uint32_t rptr;  /* offset: 4 */
    uint32_t state;  /* offset: 8 */
    uint32_t rand_type;  /* offset: 12 */
    uint32_t rand_deg;  /* offset: 16 */
    uint32_t rand_sep;  /* offset: 20 */
    uint32_t end_ptr;  /* offset: 24 */
} random_data;

/* Size: 24 bytes */
typedef struct _drand48_data {
    uint8_t __old_x;  /* offset: 6 */
    uint16_t __c;  /* offset: 12 */
    uint16_t __init;  /* offset: 14 */
    uint64_t __a;  /* offset: 16 */
} drand48_data;

/* Size: 12 bytes */
typedef struct _st_used_mem {
    uint32_t left;  /* offset: 4 */
    uint32_t size;  /* offset: 8 */
} st_used_mem;

/* Size: 24 bytes */
typedef struct _st_mem_root {
    uint32_t used;  /* offset: 4 */
    void* pre_alloc;  /* offset: 8 */
    uint32_t min_malloc;  /* offset: 12 */
    uint32_t block_size;  /* offset: 16 */
} st_mem_root;

/* Size: 272 bytes */
typedef struct _st_net {
    uint32_t fd;  /* offset: 4 */
    uint32_t fcntl;  /* offset: 8 */
    uint32_t buff;  /* offset: 12 */
    uint32_t buff_end;  /* offset: 16 */
    uint32_t write_pos;  /* offset: 20 */
    uint32_t read_pos;  /* offset: 24 */
    uint32_t last_errno;  /* offset: 228 */
    uint32_t max_packet;  /* offset: 232 */
    uint32_t timeout;  /* offset: 236 */
    void* pkt_nr;  /* offset: 240 */
    uint8_t error;  /* offset: 244 */
    uint8_t return_errno;  /* offset: 245 */
    uint8_t compress;  /* offset: 246 */
    uint8_t no_send_ok;  /* offset: 247 */
    uint32_t remain_in_buf;  /* offset: 248 */
    uint32_t length;  /* offset: 252 */
    uint32_t buf_length;  /* offset: 256 */
    uint32_t where_b;  /* offset: 260 */
    uint8_t reading_or_writing;  /* offset: 268 */
    uint8_t save_char;  /* offset: 269 */
} st_net;

/* Size: 20 bytes */
typedef struct _rand_struct {
    uint32_t seed1;  /* offset: 0 */
    uint32_t seed2;  /* offset: 4 */
    uint32_t max_value;  /* offset: 8 */
    uint64_t max_value_dbl;  /* offset: 12 */
} rand_struct;

/* Size: 20 bytes */
typedef struct _st_udf_args {
    uint32_t arg_count;  /* offset: 0 */
    uint32_t maybe_null;  /* offset: 16 */
} st_udf_args;

/* Size: 20 bytes */
typedef struct _st_udf_init {
    uint8_t maybe_null;  /* offset: 0 */
    uint32_t decimals;  /* offset: 4 */
    uint32_t max_length;  /* offset: 8 */
    void* ptr;  /* offset: 12 */
    uint8_t const_item;  /* offset: 16 */
} st_udf_init;

/* Size: 32 bytes */
typedef struct _st_mysql_field {
    uint32_t name;  /* offset: 0 */
    uint32_t table;  /* offset: 4 */
    uint32_t def;  /* offset: 8 */
    uint32_t type;  /* offset: 12 */
    uint32_t length;  /* offset: 16 */
    uint32_t max_length;  /* offset: 20 */
    uint32_t flags;  /* offset: 24 */
    uint32_t decimals;  /* offset: 28 */
} st_mysql_field;

/* Size: 8 bytes */
typedef struct _st_mysql_rows {
    uint32_t data;  /* offset: 4 */
} st_mysql_rows;

/* Size: 40 bytes */
typedef struct _st_mysql_data {
    uint64_t rows;  /* offset: 0 */
    uint32_t fields;  /* offset: 8 */
    uint32_t data;  /* offset: 12 */
    uint8_t alloc;  /* offset: 16 */
} st_mysql_data;

/* Size: 76 bytes */
typedef struct _st_mysql_options {
    uint32_t connect_timeout;  /* offset: 0 */
    uint32_t client_flag;  /* offset: 4 */
    uint8_t compress;  /* offset: 8 */
    uint8_t named_pipe;  /* offset: 9 */
    void* port;  /* offset: 12 */
    uint32_t host;  /* offset: 16 */
    uint32_t init_command;  /* offset: 20 */
    uint32_t user;  /* offset: 24 */
    void* password;  /* offset: 28 */
    uint32_t unix_socket;  /* offset: 32 */
    uint32_t db;  /* offset: 36 */
    uint32_t my_cnf_file;  /* offset: 40 */
    uint32_t my_cnf_group;  /* offset: 44 */
    uint32_t charset_dir;  /* offset: 48 */
    uint32_t charset_name;  /* offset: 52 */
    uint8_t use_ssl;  /* offset: 56 */
    uint32_t ssl_key;  /* offset: 60 */
    uint32_t ssl_cert;  /* offset: 64 */
    uint32_t ssl_ca;  /* offset: 68 */
    uint32_t ssl_capath;  /* offset: 72 */
} st_mysql_options;

/* Size: 496 bytes */
typedef struct _st_mysql {
    uint8_t net;  /* offset: 0 */
    uint32_t connector_fd;  /* offset: 272 */
    uint32_t host;  /* offset: 276 */
    uint32_t user;  /* offset: 280 */
    void* passwd;  /* offset: 284 */
    uint32_t unix_socket;  /* offset: 288 */
    uint32_t server_version;  /* offset: 292 */
    uint32_t host_info;  /* offset: 296 */
    uint32_t info;  /* offset: 300 */
    uint32_t db;  /* offset: 304 */
    void* port;  /* offset: 308 */
    uint32_t client_flag;  /* offset: 312 */
    uint32_t server_capabilities;  /* offset: 316 */
    void* protocol_version;  /* offset: 320 */
    uint32_t field_count;  /* offset: 324 */
    uint32_t server_status;  /* offset: 328 */
    uint32_t thread_id;  /* offset: 332 */
    uint64_t affected_rows;  /* offset: 336 */
    uint64_t insert_id;  /* offset: 344 */
    uint64_t extra_info;  /* offset: 352 */
    void* packet_length;  /* offset: 360 */
    uint32_t status;  /* offset: 364 */
    uint8_t field_alloc;  /* offset: 372 */
    uint8_t free_me;  /* offset: 396 */
    uint8_t reconnect;  /* offset: 397 */
    uint8_t options;  /* offset: 400 */
    uint32_t server_language;  /* offset: 492 */
} st_mysql;

/* Size: 72 bytes */
typedef struct _st_mysql_res {
    uint64_t row_count;  /* offset: 0 */
    uint32_t field_count;  /* offset: 8 */
    uint32_t current_field;  /* offset: 12 */
    uint32_t fields;  /* offset: 16 */
    uint32_t data_cursor;  /* offset: 24 */
    uint8_t field_alloc;  /* offset: 28 */
    uint32_t row;  /* offset: 52 */
    uint32_t current_row;  /* offset: 56 */
    uint32_t lengths;  /* offset: 60 */
    uint8_t eof;  /* offset: 68 */
} st_mysql_res;

/* Size: 1132 bytes */
typedef struct _BlobDef {
    uint8_t szField;  /* offset: 80 */
    uint8_t szAddFieldsData;  /* offset: 560 */
    void* pData;  /* offset: 1120 */
    uint32_t iSize;  /* offset: 1124 */
    uint32_t iNumAddFields;  /* offset: 1128 */
} BlobDef;

/* Size: 33559396 bytes */
typedef struct _CDBAccess {
    uint32_t row;  /* offset: 33559392 */
} CDBAccess;

/* Size: 8 bytes */
typedef struct _timespec {
    uint32_t tv_sec;  /* offset: 0 */
    uint32_t tv_nsec;  /* offset: 4 */
} timespec;

/* Size: 44 bytes */
typedef struct _tm {
    uint32_t tm_sec;  /* offset: 0 */
    uint32_t tm_min;  /* offset: 4 */
    uint32_t tm_hour;  /* offset: 8 */
    uint32_t tm_mday;  /* offset: 12 */
    uint32_t tm_mon;  /* offset: 16 */
    uint32_t tm_year;  /* offset: 20 */
    uint32_t tm_wday;  /* offset: 24 */
    uint32_t tm_yday;  /* offset: 28 */
    uint32_t tm_isdst;  /* offset: 32 */
    uint32_t tm_gmtoff;  /* offset: 36 */
    uint32_t tm_zone;  /* offset: 40 */
} tm;

/* Size: 16 bytes */
typedef struct _itimerspec {
    uint64_t it_interval;  /* offset: 0 */
    uint64_t it_value;  /* offset: 8 */
} itimerspec;

/* Size: 36 bytes */
typedef struct _CLogFilter {
    uint32_t iID;  /* offset: 4 */
    uint32_t iFlags;  /* offset: 8 */
} CLogFilter;

/* Size: 104 bytes */
typedef struct _CLog {
    uint32_t m_iActiveFlag;  /* offset: 100 */
} CLog;

/* Size: 44 bytes */
typedef struct _tm {
    uint32_t tm_sec;  /* offset: 0 */
    uint32_t tm_min;  /* offset: 4 */
    uint32_t tm_hour;  /* offset: 8 */
    uint32_t tm_mday;  /* offset: 12 */
    uint32_t tm_mon;  /* offset: 16 */
    uint32_t tm_year;  /* offset: 20 */
    uint32_t tm_wday;  /* offset: 24 */
    uint32_t tm_yday;  /* offset: 28 */
    uint32_t tm_isdst;  /* offset: 32 */
    uint32_t tm_gmtoff;  /* offset: 36 */
    uint32_t tm_zone;  /* offset: 40 */
} tm;

/* Size: 16 bytes */
typedef struct _itimerspec {
    uint64_t it_interval;  /* offset: 0 */
    uint64_t it_value;  /* offset: 8 */
} itimerspec;

/* Size: 2 bytes */
typedef struct _OKMsg {
    uint16_t wPortNum;  /* offset: 0 */
} OKMsg;

/* Size: 50 bytes */
typedef struct _WorldServer {
    uint8_t chAddress;  /* offset: 24 */
    uint16_t wNumPlayers;  /* offset: 48 */
} WorldServer;

/* Size: 56 bytes */
typedef struct _StartGameDataNetMsg {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t dwCharID;  /* offset: 4 */
    uint32_t dwModelType;  /* offset: 8 */
    uint32_t x;  /* offset: 12 */
    uint32_t y;  /* offset: 16 */
    uint32_t z;  /* offset: 20 */
    uint32_t fFacing;  /* offset: 24 */
    uint32_t fGameTime;  /* offset: 28 */
    uint8_t chAddress;  /* offset: 32 */
} StartGameDataNetMsg;

/* Size: 24 bytes */
typedef struct _EchoNetMsg {
    uint8_t chMesg;  /* offset: 0 */
} EchoNetMsg;

/* Size: 264 bytes */
typedef struct _EndOfZoneMsg {
    uint32_t dwMapID;  /* offset: 0 */
    uint8_t byNumScenes;  /* offset: 260 */
} EndOfZoneMsg;

/* Size: 4 bytes */
typedef struct _TransferZoneMsg {
    uint32_t dwSceneID;  /* offset: 0 */
} TransferZoneMsg;

/* Size: 24 bytes */
typedef struct _ZoneDataMsg {
    uint32_t dwSceneID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fFacing;  /* offset: 16 */
    uint32_t fGameTime;  /* offset: 20 */
} ZoneDataMsg;

/* Size: 8 bytes */
typedef struct _QueryIDDataMsg {
    uint8_t byType;  /* offset: 0 */
    uint32_t dwID;  /* offset: 4 */
} QueryIDDataMsg;

/* Size: 4 bytes */
typedef struct _ChangeChatBarMsg {
    uint32_t dwHash;  /* offset: 0 */
} ChangeChatBarMsg;

/* Size: 168 bytes */
typedef struct _ChatMsg {
    uint32_t dwParam;  /* offset: 0 */
    uint16_t wLen;  /* offset: 164 */
    uint8_t byType;  /* offset: 166 */
} ChatMsg;

/* Size: 164 bytes */
typedef struct _LeaveMsg {
    uint32_t dwHash;  /* offset: 0 */
    uint8_t wMesgA;  /* offset: 4 */
} LeaveMsg;

/* Size: 1 bytes */
typedef struct _MOTDEmailRequest {
    uint8_t bySelected;  /* offset: 0 */
} MOTDEmailRequest;

/* Size: 4 bytes */
typedef struct _IDResp1Msg {
    uint32_t dwAddr;  /* offset: 0 */
} IDResp1Msg;

/* Size: 20 bytes */
typedef struct _BroadcastMsg {
    uint16_t wStringID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint8_t byType;  /* offset: 12 */
    uint32_t dwTypeParam1;  /* offset: 16 */
} BroadcastMsg;

/* Size: 4 bytes */
typedef struct _DataMsg {
    uint16_t wEventID;  /* offset: 0 */
    uint16_t wSize;  /* offset: 2 */
} DataMsg;

/* Size: 4 bytes */
typedef struct _PartyUpdateMsg {
    uint32_t dwPartyID;  /* offset: 0 */
} PartyUpdateMsg;

/* Size: 4 bytes */
typedef struct _DropConnectionMsg {
    uint32_t dwCharID;  /* offset: 0 */
} DropConnectionMsg;

/* Size: 8 bytes */
typedef struct _GameEventsMsg {
    uint8_t byCmd;  /* offset: 0 */
    uint16_t wEventID;  /* offset: 2 */
    uint32_t dwServerID;  /* offset: 4 */
} GameEventsMsg;

/* Size: 20 bytes */
typedef struct _SysServicesMsg {
    uint16_t wEventID;  /* offset: 0 */
    uint32_t dwParam1;  /* offset: 4 */
    uint32_t dwParam2;  /* offset: 8 */
    uint32_t dwParam3;  /* offset: 12 */
    uint32_t dwServerID;  /* offset: 16 */
} SysServicesMsg;

/* Size: 4 bytes */
typedef struct _ScenePopMsg {
    uint32_t dwSceneID;  /* offset: 0 */
} ScenePopMsg;

/* Size: 2 bytes */
typedef struct _PopMsg {
    uint16_t wPopCount;  /* offset: 0 */
} PopMsg;

/* Size: 1 bytes */
typedef struct _MOTDRequest1Msg {
    uint8_t byID;  /* offset: 0 */
} MOTDRequest1Msg;

/* Size: 2 bytes */
typedef struct _MOTDRequestMsg {
    uint8_t byID;  /* offset: 0 */
    uint8_t byMsgID;  /* offset: 1 */
} MOTDRequestMsg;

/* Size: 21 bytes */
typedef struct _DropUserMsg {
    uint8_t chUsername;  /* offset: 0 */
} DropUserMsg;

/* Size: 4 bytes */
typedef struct _ValidateCreditMsg {
    uint32_t dwID;  /* offset: 0 */
} ValidateCreditMsg;

/* Size: 4 bytes */
typedef struct _CreditRemainingMsg {
    uint32_t dwCredits;  /* offset: 0 */
} CreditRemainingMsg;

/* Size: 8 bytes */
typedef struct _MuteMsg {
    uint32_t dwCharID;  /* offset: 0 */
    uint32_t iMutedFlag;  /* offset: 4 */
} MuteMsg;

/* Size: 8 bytes */
typedef struct _NetObject {
    uint16_t wEventID;  /* offset: 0 */
    uint16_t wSize;  /* offset: 2 */
    void* pData;  /* offset: 4 */
} NetObject;

/* Size: 1536 bytes */
typedef struct __PacketData {
    uint8_t byMsgID;  /* offset: 0 */
    uint8_t byUID;  /* offset: 1 */
    uint8_t byFlags;  /* offset: 2 */
    uint8_t bySData;  /* offset: 3 */
} _PacketData;

/* Size: 1540 bytes */
typedef struct __IntraData {
    uint32_t dwID;  /* offset: 0 */
    uint8_t PData;  /* offset: 4 */
} _IntraData;

/* Size: 1564 bytes */
typedef struct _PacketSInfo {
    uint32_t iSize;  /* offset: 0 */
    uint32_t iType;  /* offset: 4 */
    uint32_t dwSentTime;  /* offset: 8 */
    uint32_t iDeleteTag;  /* offset: 12 */
    uint32_t dwLastInterval;  /* offset: 16 */
    uint8_t Packet;  /* offset: 20 */
    void* pPrev;  /* offset: 1560 */
} PacketSInfo;

/* Size: 8 bytes */
typedef struct _AckPkts {
    uint8_t byUID;  /* offset: 0 */
} AckPkts;

/* Size: 328 bytes */
typedef struct _CSndPkt {
    uint32_t m_iAckPkts;  /* offset: 324 */
} CSndPkt;

/* Size: 1560 bytes */
typedef struct _PacketRInfo {
    uint32_t iSize;  /* offset: 0 */
    uint32_t recvtime;  /* offset: 4 */
    uint32_t iType;  /* offset: 8 */
    uint32_t iOffset;  /* offset: 12 */
    uint8_t Packet;  /* offset: 16 */
    void* pPrev;  /* offset: 1556 */
} PacketRInfo;

/* Size: 8 bytes */
typedef struct _PacketRChain {
    uint32_t iNumPackets;  /* offset: 0 */
    void* pPackets;  /* offset: 4 */
} PacketRChain;

/* Size: 8 bytes */
typedef struct _DropList {
    uint8_t byUID;  /* offset: 0 */
} DropList;

/* Size: 108 bytes */
typedef struct _CRcvPkt {
    uint32_t m_pFreePacket;  /* offset: 100 */
    uint32_t m_iPktCount;  /* offset: 104 */
} CRcvPkt;

/* Size: 44 bytes */
typedef struct _tm {
    uint32_t tm_sec;  /* offset: 0 */
    uint32_t tm_min;  /* offset: 4 */
    uint32_t tm_hour;  /* offset: 8 */
    uint32_t tm_mday;  /* offset: 12 */
    uint32_t tm_mon;  /* offset: 16 */
    uint32_t tm_year;  /* offset: 20 */
    uint32_t tm_wday;  /* offset: 24 */
    uint32_t tm_yday;  /* offset: 28 */
    uint32_t tm_isdst;  /* offset: 32 */
    uint32_t tm_gmtoff;  /* offset: 36 */
} tm;

/* Size: 16 bytes */
typedef struct _itimerspec {
    uint64_t it_interval;  /* offset: 0 */
    uint64_t it_value;  /* offset: 8 */
} itimerspec;

/* Size: 16 bytes */
typedef struct _pthread_cleanup_buffer {
    uint32_t __arg;  /* offset: 4 */
    uint32_t __canceltype;  /* offset: 8 */
} pthread_cleanup_buffer;

/* Size: 20 bytes */
typedef struct __gconv_trans_data {
    uint32_t __trans_fct;  /* offset: 0 */
    uint32_t __trans_context_fct;  /* offset: 4 */
    uint32_t __trans_end_fct;  /* offset: 8 */
    uint32_t __data;  /* offset: 12 */
} _gconv_trans_data;

/* Size: 56 bytes */
typedef struct __gconv_step {
    uint32_t __modname;  /* offset: 4 */
    uint32_t __counter;  /* offset: 8 */
    uint32_t __from_name;  /* offset: 12 */
    uint32_t __to_name;  /* offset: 16 */
    uint32_t __fct;  /* offset: 20 */
    uint32_t __init_fct;  /* offset: 24 */
    uint32_t __end_fct;  /* offset: 28 */
    uint32_t __min_needed_from;  /* offset: 32 */
    uint32_t __max_needed_from;  /* offset: 36 */
    uint32_t __min_needed_to;  /* offset: 40 */
    uint32_t __max_needed_to;  /* offset: 44 */
    uint32_t __stateful;  /* offset: 48 */
    uint32_t __data;  /* offset: 52 */
} _gconv_step;

/* Size: 36 bytes */
typedef struct __gconv_step_data {
    uint32_t __outbufend;  /* offset: 4 */
    uint32_t __flags;  /* offset: 8 */
    uint32_t __invocation_counter;  /* offset: 12 */
    uint32_t __internal_use;  /* offset: 16 */
    uint32_t __statep;  /* offset: 20 */
    uint64_t __state;  /* offset: 24 */
    uint32_t __trans;  /* offset: 32 */
} _gconv_step_data;

/* Size: 8 bytes */
typedef struct __gconv_info {
    uint32_t __nsteps;  /* offset: 0 */
    uint32_t __steps;  /* offset: 4 */
} _gconv_info;

/* Size: 28 bytes */
typedef struct _random_data {
    uint32_t rptr;  /* offset: 4 */
    uint32_t state;  /* offset: 8 */
    uint32_t rand_type;  /* offset: 12 */
    uint32_t rand_deg;  /* offset: 16 */
    uint32_t rand_sep;  /* offset: 20 */
    uint32_t end_ptr;  /* offset: 24 */
} random_data;

/* Size: 24 bytes */
typedef struct _drand48_data {
    uint8_t __old_x;  /* offset: 6 */
    uint16_t __c;  /* offset: 12 */
    uint16_t __init;  /* offset: 14 */
    uint64_t __a;  /* offset: 16 */
} drand48_data;

/* Size: 104 bytes */
typedef struct _tFileHeader {
    uint32_t dwMagic;  /* offset: 0 */
    uint32_t dwVersion;  /* offset: 4 */
    uint8_t vMin;  /* offset: 72 */
    uint8_t vMax;  /* offset: 84 */
    uint32_t dwSceneType;  /* offset: 96 */
    uint32_t dwID;  /* offset: 100 */
} tFileHeader;

/* Size: 100 bytes */
typedef struct _tFileHeader2 {
    uint32_t dwMagic;  /* offset: 0 */
    uint32_t dwVersion;  /* offset: 4 */
    uint8_t szName;  /* offset: 8 */
    uint8_t vMin;  /* offset: 72 */
    uint8_t vMax;  /* offset: 84 */
    uint32_t dwSceneType;  /* offset: 96 */
} tFileHeader2;

/* Size: 20 bytes */
typedef struct _CVKY_Entity {
    uint32_t m_gID;  /* offset: 12 */
    uint32_t m_pData;  /* offset: 16 */
} CVKY_Entity;

/* Size: 792 bytes */
typedef struct _tPCDef {
    void* pszBody;  /* offset: 4 */
    void* pszSetup;  /* offset: 8 */
    uint8_t szAnimation;  /* offset: 12 */
    uint8_t szAnimList;  /* offset: 268 */
    uint8_t szActionList;  /* offset: 524 */
    uint32_t iHeadCount;  /* offset: 780 */
    uint32_t iBodyCount;  /* offset: 784 */
    uint32_t iSetupCount;  /* offset: 788 */
} tPCDef;

/* Size: 1288 bytes */
typedef struct _tNPCTypeData {
    uint8_t szModelName;  /* offset: 0 */
    uint8_t szAnimationName;  /* offset: 256 */
    uint8_t szVADName;  /* offset: 512 */
    uint8_t szActionList;  /* offset: 768 */
    uint8_t szAnimList;  /* offset: 1024 */
    uint32_t dwWeaponID;  /* offset: 1280 */
    uint32_t dwMatID;  /* offset: 1284 */
} tNPCTypeData;

/* Size: 36 bytes */
typedef struct _tObjectCache {
    uint32_t dwID;  /* offset: 0 */
    uint32_t x;  /* offset: 4 */
    uint32_t y;  /* offset: 8 */
    uint32_t z;  /* offset: 12 */
    uint32_t fDir;  /* offset: 16 */
    uint8_t byMoveState;  /* offset: 20 */
    uint8_t bySpeed;  /* offset: 21 */
    uint32_t iCount;  /* offset: 24 */
    void* pPrev;  /* offset: 32 */
} tObjectCache;

/* Size: 204 bytes */
typedef struct _tObjectHandle {
    uint8_t matTM;  /* offset: 0 */
    uint8_t vHalfExtents;  /* offset: 104 */
    void* pScene;  /* offset: 116 */
    void* pSendThread;  /* offset: 124 */
    uint32_t dwID;  /* offset: 128 */
    uint32_t fSize;  /* offset: 132 */
    uint32_t fRadius;  /* offset: 136 */
    uint32_t fDir;  /* offset: 140 */
    uint32_t dwFlags;  /* offset: 144 */
    uint32_t dwModelID;  /* offset: 148 */
    uint32_t dwScript;  /* offset: 152 */
    uint32_t dwTimeStamp;  /* offset: 156 */
    uint32_t dwSendCount;  /* offset: 160 */
    uint32_t iMinX;  /* offset: 164 */
    uint32_t iMaxX;  /* offset: 168 */
    uint32_t iMinY;  /* offset: 172 */
    uint32_t iMaxY;  /* offset: 176 */
    uint32_t dwInScene;  /* offset: 180 */
    uint32_t iOnlineFlag;  /* offset: 184 */
    uint16_t wGMOptions;  /* offset: 188 */
    uint16_t wLevel;  /* offset: 190 */
    uint16_t wStanceID;  /* offset: 192 */
    uint16_t wClanID;  /* offset: 194 */
    uint8_t byType;  /* offset: 196 */
    uint8_t bySpeed;  /* offset: 197 */
    uint8_t byLock;  /* offset: 198 */
    uint8_t byMoveState;  /* offset: 199 */
    uint8_t byIsGM;  /* offset: 200 */
    uint8_t byMoveLock;  /* offset: 201 */
    uint8_t byInvisible;  /* offset: 202 */
} tObjectHandle;

/* Size: 200 bytes */
typedef struct _tBoundingBox {
    uint8_t matTM;  /* offset: 0 */
    uint8_t vHalfAxis;  /* offset: 64 */
    uint32_t dwID;  /* offset: 76 */
    uint32_t dwFlags;  /* offset: 80 */
    uint32_t dwScript;  /* offset: 84 */
    uint32_t dwCheckFlag;  /* offset: 184 */
    uint64_t byProcessFlag;  /* offset: 188 */
    void* pOwner;  /* offset: 196 */
} tBoundingBox;

/* Size: 28 bytes */
typedef struct _tPoint {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwFlags;  /* offset: 4 */
    uint32_t dwProperty;  /* offset: 8 */
    uint8_t vPos;  /* offset: 12 */
    uint32_t bCheck;  /* offset: 24 */
} tPoint;

/* Size: 8 bytes */
typedef struct _tChunk {
    uint32_t dwID;  /* offset: 0 */
    uint32_t dwSize;  /* offset: 4 */
} tChunk;

/* Size: 24 bytes */
typedef struct _tVKY_BBox {
    uint8_t vCenter;  /* offset: 0 */
    uint8_t vHalfAxis;  /* offset: 12 */
} tVKY_BBox;

/* Size: 60 bytes */
typedef struct _tVKY_FaceCache {
    uint8_t v4Plane;  /* offset: 0 */
    uint32_t fSliding;  /* offset: 52 */
    uint32_t dwFlag;  /* offset: 56 */
} tVKY_FaceCache;

/* Size: 20 bytes */
typedef struct _tVKY_CollisionInfo {
    uint8_t vNormal;  /* offset: 0 */
    uint32_t fSliding;  /* offset: 12 */
    uint32_t bStuck;  /* offset: 16 */
} tVKY_CollisionInfo;

/* Size: 4 bytes */
typedef struct _tFaceInfo {
    uint16_t usMeshIdx;  /* offset: 0 */
    uint16_t usFaceIdx;  /* offset: 2 */
} tFaceInfo;

/* Size: 32 bytes */
typedef struct _tFaceTable {
    uint16_t usCount;  /* offset: 0 */
    void* pstFaces;  /* offset: 4 */
    uint8_t cBBoxList;  /* offset: 8 */
} tFaceTable;

/* Size: 72 bytes */
typedef struct _tCollisionFace {
    uint8_t stFaceCache;  /* offset: 0 */
    uint32_t stInfo;  /* offset: 60 */
    uint32_t bFaceCache;  /* offset: 64 */
    void* pOwner;  /* offset: 68 */
} tCollisionFace;

/* Size: 436 bytes */
typedef struct _tCollisionData {
    uint8_t mat;  /* offset: 0 */
    uint8_t vExtent;  /* offset: 64 */
    uint8_t vVelocity;  /* offset: 76 */
    uint8_t matElipsoid;  /* offset: 88 */
    uint8_t matInvElipsoid;  /* offset: 152 */
    uint8_t matPlaneInvElipsoid;  /* offset: 216 */
    uint8_t vElipsoidPos;  /* offset: 280 */
    uint8_t vElipsoidVelocity;  /* offset: 292 */
    uint8_t vCurrentPos;  /* offset: 304 */
    uint8_t vCurrentVelocity;  /* offset: 316 */
    uint8_t vRadius;  /* offset: 328 */
    uint8_t vSafePos;  /* offset: 340 */
    uint8_t vPolyNormal;  /* offset: 352 */
    uint32_t bStuck;  /* offset: 364 */
    uint32_t bGravity;  /* offset: 368 */
    uint32_t bCollideEdge;  /* offset: 372 */
    uint32_t fSliding;  /* offset: 376 */
    uint8_t v4Plane;  /* offset: 380 */
    uint32_t bFoundCollision;  /* offset: 396 */
    uint32_t bHaveCollision;  /* offset: 400 */
    uint32_t fNearestDistance;  /* offset: 404 */
    uint8_t vNearestIntersectionPoint;  /* offset: 408 */
    uint8_t vNearestPolygonIntersectionPoint;  /* offset: 420 */
    uint32_t iCount;  /* offset: 432 */
} tCollisionData;

/* Size: 1608 bytes */
typedef struct _CSceneSharedData {
    uint8_t m_CPCList;  /* offset: 0 */
    uint64_t m_CNPCList;  /* offset: 1584 */
    uint8_t m_CCollisionList;  /* offset: 1592 */
} CSceneSharedData;

/* Size: 132540 bytes */
typedef struct _CScene {
    uint8_t scenelock;  /* offset: 132492 */
    uint8_t m_byWeather;  /* offset: 132524 */
    uint8_t m_byWeatherType;  /* offset: 132525 */
    uint8_t m_byKillZoneFlag;  /* offset: 132526 */
    uint32_t m_dwTimeOffset;  /* offset: 132528 */
    uint32_t m_dwScriptID;  /* offset: 132532 */
} CScene;

/* Size: 44 bytes */
typedef struct _tVKY_Vertex {
    uint8_t vPos;  /* offset: 0 */
    uint8_t vNormals;  /* offset: 12 */
    uint32_t dwDiffuse;  /* offset: 24 */
    uint32_t U0;  /* offset: 28 */
    uint32_t V0;  /* offset: 32 */
    uint32_t U1;  /* offset: 36 */
    uint32_t V1;  /* offset: 40 */
} tVKY_Vertex;

/* Size: 64 bytes */
typedef struct _CVKY_Brush {
    uint32_t m_pvPos;  /* offset: 0 */
    uint32_t m_pstFaceCache;  /* offset: 8 */
    uint32_t m_iVertexCount;  /* offset: 12 */
    uint32_t m_iIndexCount;  /* offset: 16 */
    uint32_t m_iFaceCount;  /* offset: 20 */
    uint32_t m_bDraw;  /* offset: 24 */
    uint8_t m_vPos;  /* offset: 28 */
    uint8_t m_vExtents;  /* offset: 40 */
    uint32_t m_fRadius;  /* offset: 52 */
    uint32_t m_dwFlag;  /* offset: 56 */
    uint32_t m_fSlideValue;  /* offset: 60 */
} CVKY_Brush;

/* Size: 4 bytes */
typedef struct _tFaceInfo {
    uint16_t usMeshIdx;  /* offset: 0 */
    uint16_t usFaceIdx;  /* offset: 2 */
} tFaceInfo;

/* Size: 92 bytes */
typedef struct _tFaceTable {
    uint16_t usCount;  /* offset: 0 */
    void* pstFaces;  /* offset: 4 */
    uint8_t cObjectList;  /* offset: 8 */
    uint8_t cBBoxList;  /* offset: 36 */
    uint8_t cPointList;  /* offset: 52 */
    uint8_t page_mutex;  /* offset: 68 */
} tFaceTable;

/* Size: 48 bytes */
typedef struct _tmathsTriangleData {
    uint8_t v4Plane;  /* offset: 0 */
    uint8_t v4Bary1;  /* offset: 16 */
    uint8_t v4Bary2;  /* offset: 32 */
} tmathsTriangleData;

/* Size: 52 bytes */
typedef struct _CTriangle {
    uint8_t vPointsA;  /* offset: 0 */
    uint8_t v4Plane;  /* offset: 36 */
} CTriangle;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 44 bytes */
typedef struct _tm {
    uint32_t tm_sec;  /* offset: 0 */
    uint32_t tm_min;  /* offset: 4 */
    uint32_t tm_hour;  /* offset: 8 */
    uint32_t tm_mday;  /* offset: 12 */
    uint32_t tm_mon;  /* offset: 16 */
    uint32_t tm_year;  /* offset: 20 */
    uint32_t tm_wday;  /* offset: 24 */
    uint32_t tm_yday;  /* offset: 28 */
    uint32_t tm_isdst;  /* offset: 32 */
    uint32_t tm_gmtoff;  /* offset: 36 */
    uint32_t tm_zone;  /* offset: 40 */
} tm;

/* Size: 16 bytes */
typedef struct _itimerspec {
    uint64_t it_interval;  /* offset: 0 */
    uint64_t it_value;  /* offset: 8 */
} itimerspec;

/* Size: 16 bytes */
typedef struct _tVKY_TerrainHeader {
    uint32_t dwMagic;  /* offset: 0 */
    uint32_t dwVersion;  /* offset: 4 */
    uint32_t dwSize;  /* offset: 8 */
    uint32_t dwUnitCount;  /* offset: 12 */
} tVKY_TerrainHeader;

/* Size: 24 bytes */
typedef struct _tVertex {
    uint8_t vPos;  /* offset: 0 */
    uint8_t vNormal;  /* offset: 12 */
} tVertex;

/* Size: 3028 bytes */
typedef struct _tGridUnit {
    uint32_t dwFlag;  /* offset: 2904 */
    uint8_t vPos;  /* offset: 2908 */
    uint8_t vCenterPos;  /* offset: 2920 */
    uint8_t vTotalExtents;  /* offset: 2932 */
    uint8_t cObjectList;  /* offset: 2944 */
    uint8_t cBoxList;  /* offset: 2972 */
    uint8_t cPointList;  /* offset: 2988 */
    uint8_t page_mutex;  /* offset: 3004 */
} tGridUnit;

/* Size: 8 bytes */
typedef struct _tQuad {
    void* pstGrid;  /* offset: 0 */
    uint32_t dwFlag;  /* offset: 4 */
} tQuad;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

/* Size: 256 bytes */
typedef struct _tStringSt {
    uint8_t szName;  /* offset: 0 */
} tStringSt;

/* Size: 12 bytes */
typedef struct _CNode {
    uint32_t m_pData;  /* offset: 0 */
    uint32_t m_pPrev;  /* offset: 4 */
    uint32_t m_pNext;  /* offset: 8 */
} CNode;

#pragma pack(pop)
#endif /* _FWONLINE_STRUCTS_H_ */
