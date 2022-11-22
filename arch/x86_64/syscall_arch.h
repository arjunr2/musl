#ifndef _SYSCALL_ARCH_H
#define _SYSCALL_ARCH_H

#define __SYSCALL_LL_E(x) (x)
#define __SYSCALL_LL_O(x) (x)
/*
static __inline long __syscall0(long n)
{
	unsigned long ret;
	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n) : "rcx", "r11", "memory");
	return ret;
}

static __inline long __syscall1(long n, long a1)
{
	unsigned long ret;
	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1) : "rcx", "r11", "memory");
	return ret;
}

static __inline long __syscall2(long n, long a1, long a2)
{
	unsigned long ret;
	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1), "S"(a2)
						  : "rcx", "r11", "memory");
	return ret;
}

static __inline long __syscall3(long n, long a1, long a2, long a3)
{
	unsigned long ret;
	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1), "S"(a2),
						  "d"(a3) : "rcx", "r11", "memory");
	return ret;
}

static __inline long __syscall4(long n, long a1, long a2, long a3, long a4)
{
	unsigned long ret;
	register long r10 __asm__("r10") = a4;
	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1), "S"(a2),
						  "d"(a3), "r"(r10): "rcx", "r11", "memory");
	return ret;
}

static __inline long __syscall5(long n, long a1, long a2, long a3, long a4, long a5)
{
	unsigned long ret;
	register long r10 __asm__("r10") = a4;
	register long r8 __asm__("r8") = a5;
	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1), "S"(a2),
						  "d"(a3), "r"(r10), "r"(r8) : "rcx", "r11", "memory");
	return ret;
}

static __inline long __syscall6(long n, long a1, long a2, long a3, long a4, long a5, long a6)
{
	unsigned long ret;
	register long r10 __asm__("r10") = a4;
	register long r8 __asm__("r8") = a5;
	register long r9 __asm__("r9") = a6;
	__asm__ __volatile__ ("syscall" : "=a"(ret) : "a"(n), "D"(a1), "S"(a2),
						  "d"(a3), "r"(r10), "r"(r8), "r"(r9) : "rcx", "r11", "memory");
	return ret;
}
*/
long __syscall0(long n) __attribute((
  __import_module__("undefined"),
  __import_name__("syscall0")
));

long __syscall1(long n, long a1)  __attribute((
  __import_module__("undefined"),
  __import_name__("syscall1")
));

long __syscall2(long n, long a1, long a2)  __attribute((
  __import_module__("undefined"),
  __import_name__("syscall2")
));

long __syscall3(long n, long a1, long a2, long a3)  __attribute((
  __import_module__("undefined"),
  __import_name__("syscall3")
));

long __syscall4(long n, long a1, long a2, long a3, long a4)  __attribute((
  __import_module__("undefined"),
  __import_name__("syscall4")
));

long __syscall5(long n, long a1, long a2, long a3, long a4, long a5)  __attribute((
  __import_module__("undefined"),
  __import_name__("syscall5")
));

long __syscall6(long n, long a1, long a2, long a3, long a4, long a5, long a6)  __attribute((
  __import_module__("undefined"),
  __import_name__("syscall6")
));



#define WALI_SYSCALL_DEF(type, ...) \
  long __syscall_SYS_##type(__VA_ARGS__) __attribute ((\
    __import_module__("wali"),\
    __import_name__("__syscall_SYS_" #type)\
  ));

/* WALI Syscall Imports */
WALI_SYSCALL_DEF (read, int,void*,long);
WALI_SYSCALL_DEF (write, int,void*,long);
WALI_SYSCALL_DEF (open, char*,int,int);
WALI_SYSCALL_DEF (close, int);
WALI_SYSCALL_DEF (stat, char*,void*);
WALI_SYSCALL_DEF (fstat, char*,void*);
WALI_SYSCALL_DEF (lstat, char*,void*);
WALI_SYSCALL_DEF (poll, void*,int,int);
WALI_SYSCALL_DEF (lseek, int,long,int);
WALI_SYSCALL_DEF (mmap, void*,long,int,int,int,long);
WALI_SYSCALL_DEF (mprotect, void*,long,int);
WALI_SYSCALL_DEF (munmap, void*,long);
WALI_SYSCALL_DEF (brk, void*);
WALI_SYSCALL_DEF (rt_sigaction, int,void*,void*,long);
WALI_SYSCALL_DEF (rt_sigprocmask, int,void*,void*,long);
WALI_SYSCALL_DEF (rt_sigreturn, long);
WALI_SYSCALL_DEF (ioctl, int,int,...);
WALI_SYSCALL_DEF (pread64, int,void*,long,long);
WALI_SYSCALL_DEF (pwrite64, int,void*,long,long);
WALI_SYSCALL_DEF (readv, int,void*,int);
WALI_SYSCALL_DEF (writev, int,void*,int);
WALI_SYSCALL_DEF (access, char*,int);
WALI_SYSCALL_DEF (pipe, int*);
WALI_SYSCALL_DEF (select, int,void*,void*,void*,void*);
WALI_SYSCALL_DEF (sched_yield, );
WALI_SYSCALL_DEF (mremap, void*,long,long,int,...);
WALI_SYSCALL_DEF (msync, void*,long,int);
WALI_SYSCALL_DEF (mincore, );
WALI_SYSCALL_DEF (madvise, void*,long,int);
WALI_SYSCALL_DEF (shmget, );
WALI_SYSCALL_DEF (shmat, );
WALI_SYSCALL_DEF (shmctl, );
WALI_SYSCALL_DEF (dup, int);
WALI_SYSCALL_DEF (dup2, int,int);
WALI_SYSCALL_DEF (pause, );
WALI_SYSCALL_DEF (nanosleep, void*,void*);
WALI_SYSCALL_DEF (getitimer, );
WALI_SYSCALL_DEF (alarm, int);
WALI_SYSCALL_DEF (setitimer, );
WALI_SYSCALL_DEF (getpid, );
WALI_SYSCALL_DEF (sendfile, );
WALI_SYSCALL_DEF (socket, int,int,int);
WALI_SYSCALL_DEF (connect, int,void*,long);
WALI_SYSCALL_DEF (accept, int,void*,long);
WALI_SYSCALL_DEF (sendto, int,void*,long,int);
WALI_SYSCALL_DEF (recvfrom, int,void*,long,int,void*,void*);
WALI_SYSCALL_DEF (sendmsg, int,void*,int);
WALI_SYSCALL_DEF (recvmsg, int,void*,int);
WALI_SYSCALL_DEF (shutdown, int,int);
WALI_SYSCALL_DEF (bind, int,void*,long);
WALI_SYSCALL_DEF (listen, int,int);
WALI_SYSCALL_DEF (getsockname, int,void*,void*);
WALI_SYSCALL_DEF (getpeername, int,void*,void*);
WALI_SYSCALL_DEF (socketpair, );
WALI_SYSCALL_DEF (setsockopt, int,int,int,void*,long);
WALI_SYSCALL_DEF (getsockopt, int,int,int,void*,void*);
WALI_SYSCALL_DEF (clone, );
WALI_SYSCALL_DEF (fork, );
WALI_SYSCALL_DEF (vfork, );
WALI_SYSCALL_DEF (execve, );
WALI_SYSCALL_DEF (exit, );
WALI_SYSCALL_DEF (wait4, int,int*,int,void*);
WALI_SYSCALL_DEF (kill, int,int);
WALI_SYSCALL_DEF (uname, void*);
WALI_SYSCALL_DEF (semget, );
WALI_SYSCALL_DEF (semop, );
WALI_SYSCALL_DEF (semctl, );
WALI_SYSCALL_DEF (shmdt, );
WALI_SYSCALL_DEF (msgget, );
WALI_SYSCALL_DEF (msgsnd, );
WALI_SYSCALL_DEF (msgrcv, );
WALI_SYSCALL_DEF (msgctl, );
WALI_SYSCALL_DEF (fcntl, int,int,...);
WALI_SYSCALL_DEF (flock, int,int);
WALI_SYSCALL_DEF (fsync, int);
WALI_SYSCALL_DEF (fdatasync, );
WALI_SYSCALL_DEF (truncate, );
WALI_SYSCALL_DEF (ftruncate, );
WALI_SYSCALL_DEF (getdents, );
WALI_SYSCALL_DEF (getcwd, char*,long);
WALI_SYSCALL_DEF (chdir, char*);
WALI_SYSCALL_DEF (fchdir, );
WALI_SYSCALL_DEF (rename, );
WALI_SYSCALL_DEF (mkdir, char*,int);
WALI_SYSCALL_DEF (rmdir, char*);
WALI_SYSCALL_DEF (creat, );
WALI_SYSCALL_DEF (link, char*,char*);
WALI_SYSCALL_DEF (unlink, char*);
WALI_SYSCALL_DEF (symlink, char*,char*);
WALI_SYSCALL_DEF (readlink, char*,char*,long);
WALI_SYSCALL_DEF (chmod, char*,int);
WALI_SYSCALL_DEF (fchmod, int,int);
WALI_SYSCALL_DEF (chown, char*,int,int);
WALI_SYSCALL_DEF (fchown, int,int,int);
WALI_SYSCALL_DEF (lchown, );
WALI_SYSCALL_DEF (umask, int);
WALI_SYSCALL_DEF (gettimeofday, );
WALI_SYSCALL_DEF (getrlimit, );
WALI_SYSCALL_DEF (getrusage, );
WALI_SYSCALL_DEF (sysinfo, );
WALI_SYSCALL_DEF (times, );
WALI_SYSCALL_DEF (ptrace, );
WALI_SYSCALL_DEF (getuid, );
WALI_SYSCALL_DEF (syslog, );
WALI_SYSCALL_DEF (getgid, );
WALI_SYSCALL_DEF (setuid, );
WALI_SYSCALL_DEF (setgid, );
WALI_SYSCALL_DEF (geteuid, );
WALI_SYSCALL_DEF (getegid, );
WALI_SYSCALL_DEF (setpgid, );
WALI_SYSCALL_DEF (getppid, );
WALI_SYSCALL_DEF (getpgrp, );
WALI_SYSCALL_DEF (setsid, );
WALI_SYSCALL_DEF (setreuid, );
WALI_SYSCALL_DEF (setregid, );
WALI_SYSCALL_DEF (getgroups, );
WALI_SYSCALL_DEF (setgroups, );
WALI_SYSCALL_DEF (setresuid, );
WALI_SYSCALL_DEF (getresuid, );
WALI_SYSCALL_DEF (setresgid, );
WALI_SYSCALL_DEF (getresgid, );
WALI_SYSCALL_DEF (getpgid, );
WALI_SYSCALL_DEF (setfsuid, );
WALI_SYSCALL_DEF (setfsgid, );
WALI_SYSCALL_DEF (getsid, );
WALI_SYSCALL_DEF (capget, );
WALI_SYSCALL_DEF (capset, );
WALI_SYSCALL_DEF (rt_sigpending, );
WALI_SYSCALL_DEF (rt_sigtimedwait, );
WALI_SYSCALL_DEF (rt_sigqueueinfo, );
WALI_SYSCALL_DEF (rt_sigsuspend, );
WALI_SYSCALL_DEF (sigaltstack, );
WALI_SYSCALL_DEF (utime, char*,void*);
WALI_SYSCALL_DEF (mknod, );
WALI_SYSCALL_DEF (uselib, );
WALI_SYSCALL_DEF (personality, );
WALI_SYSCALL_DEF (ustat, );
WALI_SYSCALL_DEF (statfs, char*,void*);
WALI_SYSCALL_DEF (fstatfs, int,void*);
WALI_SYSCALL_DEF (sysfs, );
WALI_SYSCALL_DEF (getpriority, );
WALI_SYSCALL_DEF (setpriority, );
WALI_SYSCALL_DEF (sched_setparam, );
WALI_SYSCALL_DEF (sched_getparam, );
WALI_SYSCALL_DEF (sched_setscheduler, );
WALI_SYSCALL_DEF (sched_getscheduler, );
WALI_SYSCALL_DEF (sched_get_priority_max, );
WALI_SYSCALL_DEF (sched_get_priority_min, );
WALI_SYSCALL_DEF (sched_rr_get_interval, );
WALI_SYSCALL_DEF (mlock, );
WALI_SYSCALL_DEF (munlock, );
WALI_SYSCALL_DEF (mlockall, );
WALI_SYSCALL_DEF (munlockall, );
WALI_SYSCALL_DEF (vhangup, );
WALI_SYSCALL_DEF (modify_ldt, );
WALI_SYSCALL_DEF (pivot_root, );
WALI_SYSCALL_DEF (_sysctl, );
WALI_SYSCALL_DEF (prctl, );
WALI_SYSCALL_DEF (arch_prctl, );
WALI_SYSCALL_DEF (adjtimex, );
WALI_SYSCALL_DEF (setrlimit, );
WALI_SYSCALL_DEF (chroot, );
WALI_SYSCALL_DEF (sync, );
WALI_SYSCALL_DEF (acct, );
WALI_SYSCALL_DEF (settimeofday, );
WALI_SYSCALL_DEF (mount, );
WALI_SYSCALL_DEF (umount2, );
WALI_SYSCALL_DEF (swapon, );
WALI_SYSCALL_DEF (swapoff, );
WALI_SYSCALL_DEF (reboot, );
WALI_SYSCALL_DEF (sethostname, );
WALI_SYSCALL_DEF (setdomainname, );
WALI_SYSCALL_DEF (iopl, );
WALI_SYSCALL_DEF (ioperm, );
WALI_SYSCALL_DEF (create_module, );
WALI_SYSCALL_DEF (init_module, );
WALI_SYSCALL_DEF (delete_module, );
WALI_SYSCALL_DEF (get_kernel_syms, );
WALI_SYSCALL_DEF (query_module, );
WALI_SYSCALL_DEF (quotactl, );
WALI_SYSCALL_DEF (nfsservctl, );
WALI_SYSCALL_DEF (getpmsg, );
WALI_SYSCALL_DEF (putpmsg, );
WALI_SYSCALL_DEF (afs_syscall, );
WALI_SYSCALL_DEF (tuxcall, );
WALI_SYSCALL_DEF (security, );
WALI_SYSCALL_DEF (gettid, );
WALI_SYSCALL_DEF (readahead, );
WALI_SYSCALL_DEF (setxattr, );
WALI_SYSCALL_DEF (lsetxattr, );
WALI_SYSCALL_DEF (fsetxattr, );
WALI_SYSCALL_DEF (getxattr, );
WALI_SYSCALL_DEF (lgetxattr, );
WALI_SYSCALL_DEF (fgetxattr, );
WALI_SYSCALL_DEF (listxattr, );
WALI_SYSCALL_DEF (llistxattr, );
WALI_SYSCALL_DEF (flistxattr, );
WALI_SYSCALL_DEF (removexattr, );
WALI_SYSCALL_DEF (lremovexattr, );
WALI_SYSCALL_DEF (fremovexattr, );
WALI_SYSCALL_DEF (tkill, );
WALI_SYSCALL_DEF (time, );
WALI_SYSCALL_DEF (futex, );
WALI_SYSCALL_DEF (sched_setaffinity, );
WALI_SYSCALL_DEF (sched_getaffinity, );
WALI_SYSCALL_DEF (set_thread_area, );
WALI_SYSCALL_DEF (io_setup, );
WALI_SYSCALL_DEF (io_destroy, );
WALI_SYSCALL_DEF (io_getevents, );
WALI_SYSCALL_DEF (io_submit, );
WALI_SYSCALL_DEF (io_cancel, );
WALI_SYSCALL_DEF (get_thread_area, );
WALI_SYSCALL_DEF (lookup_dcookie, );
WALI_SYSCALL_DEF (epoll_create, );
WALI_SYSCALL_DEF (epoll_ctl_old, );
WALI_SYSCALL_DEF (epoll_wait_old, );
WALI_SYSCALL_DEF (remap_file_pages, );
WALI_SYSCALL_DEF (getdents64, int,void*,int);
WALI_SYSCALL_DEF (set_tid_address, );
WALI_SYSCALL_DEF (restart_syscall, );
WALI_SYSCALL_DEF (semtimedop, );
WALI_SYSCALL_DEF (fadvise, int,long,long,int);
WALI_SYSCALL_DEF (timer_create, );
WALI_SYSCALL_DEF (timer_settime, );
WALI_SYSCALL_DEF (timer_gettime, );
WALI_SYSCALL_DEF (timer_getoverrun, );
WALI_SYSCALL_DEF (timer_delete, );
WALI_SYSCALL_DEF (clock_settime, );
WALI_SYSCALL_DEF (clock_gettime, );
WALI_SYSCALL_DEF (clock_getres, );
WALI_SYSCALL_DEF (clock_nanosleep, );
WALI_SYSCALL_DEF (exit_group, );
WALI_SYSCALL_DEF (epoll_wait, );
WALI_SYSCALL_DEF (epoll_ctl, );
WALI_SYSCALL_DEF (tgkill, );
WALI_SYSCALL_DEF (utimes, );
WALI_SYSCALL_DEF (vserver, );
WALI_SYSCALL_DEF (mbind, );
WALI_SYSCALL_DEF (set_mempolicy, );
WALI_SYSCALL_DEF (get_mempolicy, );
WALI_SYSCALL_DEF (mq_open, );
WALI_SYSCALL_DEF (mq_unlink, );
WALI_SYSCALL_DEF (mq_timedsend, );
WALI_SYSCALL_DEF (mq_timedreceive, );
WALI_SYSCALL_DEF (mq_notify, );
WALI_SYSCALL_DEF (mq_getsetattr, );
WALI_SYSCALL_DEF (kexec_load, );
WALI_SYSCALL_DEF (waitid, );
WALI_SYSCALL_DEF (add_key, );
WALI_SYSCALL_DEF (request_key, );
WALI_SYSCALL_DEF (keyctl, );
WALI_SYSCALL_DEF (ioprio_set, );
WALI_SYSCALL_DEF (ioprio_get, );
WALI_SYSCALL_DEF (inotify_init, );
WALI_SYSCALL_DEF (inotify_add_watch, );
WALI_SYSCALL_DEF (inotify_rm_watch, );
WALI_SYSCALL_DEF (migrate_pages, );
WALI_SYSCALL_DEF (openat, int,char*,int,...);
WALI_SYSCALL_DEF (mkdirat, );
WALI_SYSCALL_DEF (mknodat, );
WALI_SYSCALL_DEF (fchownat, );
WALI_SYSCALL_DEF (futimesat, );
WALI_SYSCALL_DEF (fstatat, );
WALI_SYSCALL_DEF (unlinkat, int,char*,int);
WALI_SYSCALL_DEF (renameat, );
WALI_SYSCALL_DEF (linkat, );
WALI_SYSCALL_DEF (symlinkat, );
WALI_SYSCALL_DEF (readlinkat, );
WALI_SYSCALL_DEF (fchmodat, );
WALI_SYSCALL_DEF (faccessat, int,char*,int,...);
WALI_SYSCALL_DEF (pselect6, );
WALI_SYSCALL_DEF (ppoll, );
WALI_SYSCALL_DEF (unshare, );
WALI_SYSCALL_DEF (set_robust_list, );
WALI_SYSCALL_DEF (get_robust_list, );
WALI_SYSCALL_DEF (splice, );
WALI_SYSCALL_DEF (tee, );
WALI_SYSCALL_DEF (sync_file_range, );
WALI_SYSCALL_DEF (vmsplice, );
WALI_SYSCALL_DEF (move_pages, );
WALI_SYSCALL_DEF (utimensat, int,char*,void*,int);
WALI_SYSCALL_DEF (epoll_pwait, );
WALI_SYSCALL_DEF (signalfd, );
WALI_SYSCALL_DEF (timerfd_create, );
WALI_SYSCALL_DEF (eventfd, int);
WALI_SYSCALL_DEF (fallocate, );
WALI_SYSCALL_DEF (timerfd_settime, );
WALI_SYSCALL_DEF (timerfd_gettime, );
WALI_SYSCALL_DEF (accept4, );
WALI_SYSCALL_DEF (signalfd4, );
WALI_SYSCALL_DEF (eventfd2, int,int);
WALI_SYSCALL_DEF (epoll_create1, );
WALI_SYSCALL_DEF (dup3, );
WALI_SYSCALL_DEF (pipe2, int*,int);
WALI_SYSCALL_DEF (inotify_init1, );
WALI_SYSCALL_DEF (preadv, );
WALI_SYSCALL_DEF (pwritev, );
WALI_SYSCALL_DEF (rt_tgsigqueueinfo, );
WALI_SYSCALL_DEF (perf_event_open, );
WALI_SYSCALL_DEF (recvmmsg, );
WALI_SYSCALL_DEF (fanotify_init, );
WALI_SYSCALL_DEF (fanotify_mark, );
WALI_SYSCALL_DEF (prlimit64, );
WALI_SYSCALL_DEF (name_to_handle_at, );
WALI_SYSCALL_DEF (open_by_handle_at, );
WALI_SYSCALL_DEF (clock_adjtime, );
WALI_SYSCALL_DEF (syncfs, );
WALI_SYSCALL_DEF (sendmmsg, );
WALI_SYSCALL_DEF (setns, );
WALI_SYSCALL_DEF (getcpu, );
WALI_SYSCALL_DEF (process_vm_readv, );
WALI_SYSCALL_DEF (process_vm_writev, );
WALI_SYSCALL_DEF (kcmp, );
WALI_SYSCALL_DEF (finit_module, );
WALI_SYSCALL_DEF (sched_setattr, );
WALI_SYSCALL_DEF (sched_getattr, );
WALI_SYSCALL_DEF (renameat2, );
WALI_SYSCALL_DEF (seccomp, );
WALI_SYSCALL_DEF (getrandom, );
WALI_SYSCALL_DEF (memfd_create, );
WALI_SYSCALL_DEF (kexec_file_load, );
WALI_SYSCALL_DEF (bpf, );
WALI_SYSCALL_DEF (execveat, );
WALI_SYSCALL_DEF (userfaultfd, );
WALI_SYSCALL_DEF (membarrier, );
WALI_SYSCALL_DEF (mlock2, );
WALI_SYSCALL_DEF (copy_file_range, );
WALI_SYSCALL_DEF (preadv2, );
WALI_SYSCALL_DEF (pwritev2, );
WALI_SYSCALL_DEF (pkey_mprotect, );
WALI_SYSCALL_DEF (pkey_alloc, );
WALI_SYSCALL_DEF (pkey_free, );
WALI_SYSCALL_DEF (statx, );
WALI_SYSCALL_DEF (io_pgetevents, );
WALI_SYSCALL_DEF (rseq, );

#define __scca(X) ((long) (X))

#define __syscall_arch0() 
#define __syscall_arch1(a) __scca(a)
#define __syscall_arch2(a,b) __scca(a),__scca(b)
#define __syscall_arch3(a,b,c) __scca(a),__scca(b),__scca(c)
#define __syscall_arch4(a,b,c,d) __scca(a),__scca(b),__scca(c),__scca(d)
#define __syscall_arch5(a,b,c,d,e) __scca(a),__scca(b),__scca(c),__scca(d),__scca(e)
#define __syscall_arch6(a,b,c,d,e,f) __scca(a),__scca(b),__scca(c),__scca(d),__scca(e),__scca(f)
#define __syscall_arch7(a,b,c,d,e,f,g) __scca(a),__scca(b),__scca(c),__scca(d),__scca(e),__scca(f),__scca(g)

#define __SYSCALL_ARCH_NARGS_X(a,b,c,d,e,f,g,n,...) n
#define __SYSCALL_ARCH_NARGS(...) __SYSCALL_ARCH_NARGS_X(__VA_ARGS__,7,6,5,4,3,2,1,0,)
#define __SYSCALL_ARCH_CONCAT_X(a,b) a##b
#define __SYSCALL_ARCH_CONCAT(a,b) __SYSCALL_ARCH_CONCAT_X(a,b)

#define CASE_SYSCALL(name, fn_name, ...) \
  case SYS_##name: return __syscall_SYS_##fn_name(__VA_ARGS__); break; 


/* Internal syscall implementation for non-const syscall NR invokation */
static long __syscall_var(long n, long a1, long a2, long a3, long a4, long a5, long a6) {
  switch(n) {
		CASE_SYSCALL (read, read, (int)a1,(void*)a2,(long)a3);
		CASE_SYSCALL (write, write, (int)a1,(void*)a2,(long)a3);
		CASE_SYSCALL (open, open, (char*)a1,(int)a2,(int)a3);
		CASE_SYSCALL (close, close, (int)a1);
		CASE_SYSCALL (stat, stat, (char*)a1,(void*)a2);
		CASE_SYSCALL (fstat, fstat, (char*)a1,(void*)a2);
		CASE_SYSCALL (lstat, lstat, (char*)a1,(void*)a2);
		CASE_SYSCALL (poll, poll, (void*)a1,(int)a2,(int)a3);
		CASE_SYSCALL (lseek, lseek, (int)a1,(long)a2,(int)a3);
		CASE_SYSCALL (mmap, mmap, (void*)a1,(long)a2,(int)a3,(int)a4,(int)a5,(long)a6);
		CASE_SYSCALL (mprotect, mprotect, (void*)a1,(long)a2,(int)a3);
		CASE_SYSCALL (munmap, munmap, (void*)a1,(long)a2);
		CASE_SYSCALL (brk, brk, (void*)a1);
		CASE_SYSCALL (rt_sigaction, rt_sigaction, (int)a1,(void*)a2,(void*)a3,(long)a4);
		CASE_SYSCALL (rt_sigprocmask, rt_sigprocmask, (int)a1,(void*)a2,(void*)a3,(long)a4);
		CASE_SYSCALL (rt_sigreturn, rt_sigreturn, (long)a1);
		CASE_SYSCALL (ioctl, ioctl, (int)a1,(int)a2,a3);
		CASE_SYSCALL (pread64, pread64, (int)a1,(void*)a2,(long)a3,(long)a4);
		CASE_SYSCALL (pwrite64, pwrite64, (int)a1,(void*)a2,(long)a3,(long)a4);
		CASE_SYSCALL (readv, readv, (int)a1,(void*)a2,(int)a3);
		CASE_SYSCALL (writev, writev, (int)a1,(void*)a2,(int)a3);
		CASE_SYSCALL (access, access, (char*)a1,(int)a2);
		CASE_SYSCALL (pipe, pipe, (int*)a1);
		CASE_SYSCALL (select, select, (int)a1,(void*)a2,(void*)a3,(void*)a4,(void*)a5);
		CASE_SYSCALL (sched_yield, sched_yield, );
		CASE_SYSCALL (mremap, mremap, (void*)a1,(long)a2,(long)a3,(int)a4,a5);
		CASE_SYSCALL (msync, msync, (void*)a1,(long)a2,(int)a3);
		CASE_SYSCALL (madvise, madvise, (void*)a1,(long)a2,(int)a3);
		CASE_SYSCALL (dup, dup, (int)a1);
		CASE_SYSCALL (dup2, dup2, (int)a1,(int)a2);
		CASE_SYSCALL (nanosleep, nanosleep, (void*)a1,(void*)a2);
		CASE_SYSCALL (alarm, alarm, (int)a1);
		CASE_SYSCALL (getpid, getpid, );
		CASE_SYSCALL (socket, socket, (int)a1,(int)a2,(int)a3);
		CASE_SYSCALL (connect, connect, (int)a1,(void*)a2,(long)a3);
		CASE_SYSCALL (accept, accept, (int)a1,(void*)a2,(long)a3);
		CASE_SYSCALL (sendto, sendto, (int)a1,(void*)a2,(long)a3,(int)a4);
		CASE_SYSCALL (recvfrom, recvfrom, (int)a1,(void*)a2,(long)a3,(int)a4,(void*)a5,(void*)a6);
		CASE_SYSCALL (sendmsg, sendmsg, (int)a1,(void*)a2,(int)a3);
		CASE_SYSCALL (recvmsg, recvmsg, (int)a1,(void*)a2,(int)a3);
		CASE_SYSCALL (shutdown, shutdown, (int)a1,(int)a2);
		CASE_SYSCALL (bind, bind, (int)a1,(void*)a2,(long)a3);
		CASE_SYSCALL (listen, listen, (int)a1,(int)a2);
		CASE_SYSCALL (getsockname, getsockname, (int)a1,(void*)a2,(void*)a3);
		CASE_SYSCALL (getpeername, getpeername, (int)a1,(void*)a2,(void*)a3);
		CASE_SYSCALL (setsockopt, setsockopt, (int)a1,(int)a2,(int)a3,(void*)a4,(long)a5);
		CASE_SYSCALL (getsockopt, getsockopt, (int)a1,(int)a2,(int)a3,(void*)a4,(void*)a5);
		CASE_SYSCALL (wait4, wait4, (int)a1,(int*)a2,(int)a3,(void*)a4);
		CASE_SYSCALL (kill, kill, (int)a1,(int)a2);
		CASE_SYSCALL (uname, uname, (void*)a1);
		CASE_SYSCALL (fcntl, fcntl, (int)a1,(int)a2,a3);
		CASE_SYSCALL (flock, flock, (int)a1,(int)a2);
		CASE_SYSCALL (fsync, fsync, (int)a1);
		CASE_SYSCALL (getcwd, getcwd, (char*)a1,(long)a2);
		CASE_SYSCALL (chdir, chdir, (char*)a1);
		CASE_SYSCALL (mkdir, mkdir, (char*)a1,(int)a2);
		CASE_SYSCALL (rmdir, rmdir, (char*)a1);
		CASE_SYSCALL (link, link, (char*)a1,(char*)a2);
		CASE_SYSCALL (unlink, unlink, (char*)a1);
		CASE_SYSCALL (symlink, symlink, (char*)a1,(char*)a2);
		CASE_SYSCALL (readlink, readlink, (char*)a1,(char*)a2,(long)a3);
		CASE_SYSCALL (chmod, chmod, (char*)a1,(int)a2);
		CASE_SYSCALL (fchmod, fchmod, (int)a1,(int)a2);
		CASE_SYSCALL (chown, chown, (char*)a1,(int)a2,(int)a3);
		CASE_SYSCALL (fchown, fchown, (int)a1,(int)a2,(int)a3);
		CASE_SYSCALL (umask, umask, (int)a1);
		CASE_SYSCALL (utime, utime, (char*)a1,(void*)a2);
		CASE_SYSCALL (statfs, statfs, (char*)a1,(void*)a2);
		CASE_SYSCALL (fstatfs, fstatfs, (int)a1,(void*)a2);
		CASE_SYSCALL (getdents64, getdents64, (int)a1,(void*)a2,(int)a3);
		CASE_SYSCALL (fadvise64, fadvise, (int)a1,(long)a2,(long)a3,(int)a4);
		CASE_SYSCALL (openat, openat, (int)a1,(char*)a2,(int)a3,a4);
		CASE_SYSCALL (unlinkat, unlinkat, (int)a1,(char*)a2,(int)a3);
		CASE_SYSCALL (faccessat, faccessat, (int)a1,(char*)a2,(int)a3,a4);
		CASE_SYSCALL (utimensat, utimensat, (int)a1,(char*)a2,(void*)a3,(int)a4);
		CASE_SYSCALL (eventfd, eventfd, (int)a1);
		CASE_SYSCALL (eventfd2, eventfd2, (int)a1,(int)a2);
		CASE_SYSCALL (pipe2, pipe2, (int*)a1,(int)a2);
    default: return -1;
  }
}


#define VDSO_USEFUL
#define VDSO_CGT_SYM "__vdso_clock_gettime"
#define VDSO_CGT_VER "LINUX_2.6"
#define VDSO_GETCPU_SYM "__vdso_getcpu"
#define VDSO_GETCPU_VER "LINUX_2.6"

#define IPC_64 0

#endif
