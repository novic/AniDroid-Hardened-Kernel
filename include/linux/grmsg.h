#define DEFAULTSECMSG "%.256s[%.16s:%d] uid/euid:%u/%u gid/egid:%u/%u, parent %.256s[%.16s:%d] uid/euid:%u/%u gid/egid:%u/%u"
#define GR_ACL_PROCACCT_MSG "%.256s[%.16s:%d] IP:%pI4 TTY:%.64s uid/euid:%u/%u gid/egid:%u/%u run time:[%ud %uh %um %us] cpu time:[%ud %uh %um %us] %s with exit code %ld, parent %.256s[%.16s:%d] IP:%pI4 TTY:%.64s uid/euid:%u/%u gid/egid:%u/%u"
#define GR_PTRACE_ACL_MSG "denied ptrace of %.950s(%.16s:%d) by "
#define GR_STOPMOD_MSG "denied modification of module state by "
#define GR_ROFS_BLOCKWRITE_MSG "denied write to block device %.950s by "
#define GR_ROFS_MOUNT_MSG "denied writable mount of %.950s by "
#define GR_IOPERM_MSG "denied use of ioperm() by "
#define GR_IOPL_MSG "denied use of iopl() by "
#define GR_SHMAT_ACL_MSG "denied attach of shared memory of UID %u, PID %d, ID %u by "
#define GR_UNIX_CHROOT_MSG "denied connect() to abstract AF_UNIX socket outside of chroot by "
#define GR_SHMAT_CHROOT_MSG "denied attach of shared memory outside of chroot by "
#define GR_MEM_READWRITE_MSG "denied access of range %Lx -> %Lx in /dev/mem by "
#define GR_SYMLINK_MSG "not following symlink %.950s owned by %d.%d by "
#define GR_LEARN_AUDIT_MSG "%s\t%u\t%u\t%u\t%.4095s\t%.4095s\t%lu\t%lu\t%.4095s\t%lu\t%pI4"
#define GR_ID_LEARN_MSG "%s\t%u\t%u\t%u\t%.4095s\t%.4095s\t%c\t%d\t%d\t%d\t%pI4"
#define GR_HIDDEN_ACL_MSG "%s access to hidden file %.950s by "
#define GR_OPEN_ACL_MSG "%s open of %.950s for%s%s by "
#define GR_CREATE_ACL_MSG "%s create of %.950s for%s%s by "
#define GR_FIFO_MSG "denied writing FIFO %.950s of %d.%d by "
#define GR_MKNOD_CHROOT_MSG "denied mknod of %.950s from chroot by "
#define GR_MKNOD_ACL_MSG "%s mknod of %.950s by "
#define GR_UNIXCONNECT_ACL_MSG "%s connect() to the unix domain socket %.950s by "
#define GR_TTYSNIFF_ACL_MSG "terminal being sniffed by IP:%pI4 %.480s[%.16s:%d], parent %.480s[%.16s:%d] against "
#define GR_MKDIR_ACL_MSG "%s mkdir of %.950s by "
#define GR_RMDIR_ACL_MSG "%s rmdir of %.950s by "
#define GR_UNLINK_ACL_MSG "%s unlink of %.950s by "
#define GR_SYMLINK_ACL_MSG "%s symlink from %.480s to %.480s by "
#define GR_HARDLINK_MSG "denied hardlink of %.930s (owned by %d.%d) to %.30s for "
#define GR_LINK_ACL_MSG "%s link of %.480s to %.480s by "
#define GR_INHERIT_ACL_MSG "successful inherit of %.480s's ACL for %.480s by "
#define GR_RENAME_ACL_MSG "%s rename of %.480s to %.480s by "
#define GR_UNSAFESHARE_EXEC_ACL_MSG "denied exec with cloned fs of %.950s by "
#define GR_PTRACE_EXEC_ACL_MSG "denied ptrace of %.950s by "
#define GR_EXEC_ACL_MSG "%s execution of %.950s by "
#define GR_EXEC_TPE_MSG "denied untrusted exec of %.950s by "
#define GR_SEGVSTART_ACL_MSG "possible exploit bruteforcing on " DEFAULTSECMSG " banning uid %u from login for %lu seconds"
#define GR_SEGVNOSUID_ACL_MSG "possible exploit bruteforcing on " DEFAULTSECMSG " banning execution for %lu seconds"
#define GR_MOUNT_CHROOT_MSG "denied mount of %.256s as %.930s from chroot by "
#define GR_PIVOT_CHROOT_MSG "denied pivot_root from chroot by "
#define GR_TRUNCATE_ACL_MSG "%s truncate of %.950s by "
#define GR_ATIME_ACL_MSG "%s access time change of %.950s by "
#define GR_ACCESS_ACL_MSG "%s access of %.950s for%s%s%s by "
#define GR_CHROOT_CHROOT_MSG "denied double chroot to %.950s by "
#define GR_FCHMOD_ACL_MSG "%s fchmod of %.950s by "
#define GR_CHMOD_CHROOT_MSG "denied chmod +s of %.950s by "
#define GR_CHMOD_ACL_MSG "%s chmod of %.950s by "
#define GR_CHROOT_FCHDIR_MSG "denied fchdir outside of chroot to %.950s by "
#define GR_CHOWN_ACL_MSG "%s chown of %.950s by "
#define GR_SETXATTR_ACL_MSG "%s setting extended attributes of %.950s by "
#define GR_WRITLIB_ACL_MSG "denied load of writable library %.950s by "
#define GR_INITF_ACL_MSG "init_variables() failed %s by "
#define GR_DISABLED_ACL_MSG "Error loading %s, trying to run kernel with acls disabled. To disable acls at startup use <kernel image name> gracl=off from your boot loader"
#define GR_DEV_ACL_MSG "/dev/grsec: %d bytes sent %d required, being fed garbaged by "
#define GR_SHUTS_ACL_MSG "shutdown auth success for "
#define GR_SHUTF_ACL_MSG "shutdown auth failure for "
#define GR_SHUTI_ACL_MSG "ignoring shutdown for disabled RBAC system for "
#define GR_SEGVMODS_ACL_MSG "segvmod auth success for "
#define GR_SEGVMODF_ACL_MSG "segvmod auth failure for "
#define GR_SEGVMODI_ACL_MSG "ignoring segvmod for disabled RBAC system for "
#define GR_ENABLE_ACL_MSG "%s RBAC system loaded by "
#define GR_ENABLEF_ACL_MSG "unable to load %s for "
#define GR_RELOADI_ACL_MSG "ignoring reload request for disabled RBAC system"
#define GR_RELOAD_ACL_MSG "%s RBAC system reloaded by "
#define GR_RELOADF_ACL_MSG "failed reload of %s for "
#define GR_SPROLEI_ACL_MSG "ignoring change to special role for disabled RBAC system for "
#define GR_SPROLES_ACL_MSG "successful change to special role %s (id %d) by "
#define GR_SPROLEL_ACL_MSG "special role %s (id %d) exited by "
#define GR_SPROLEF_ACL_MSG "special role %s failure for "
#define GR_UNSPROLEI_ACL_MSG "ignoring unauth of special role for disabled RBAC system for "
#define GR_UNSPROLES_ACL_MSG "successful unauth of special role %s (id %d) by "
#define GR_INVMODE_ACL_MSG "invalid mode %d by "
#define GR_PRIORITY_CHROOT_MSG "denied priority change of process (%.16s:%d) by "
#define GR_FAILFORK_MSG "failed fork with errno %s by "
#define GR_NICE_CHROOT_MSG "denied priority change by "
#define GR_UNISIGLOG_MSG "%.32s occurred at %p in "
#define GR_DUALSIGLOG_MSG "signal %d sent to " DEFAULTSECMSG " by "
#define GR_SIG_ACL_MSG "denied send of signal %d to protected task " DEFAULTSECMSG " by "
#define GR_SYSCTL_MSG "denied modification of grsecurity sysctl value : %.32s by "
#define GR_SYSCTL_ACL_MSG "%s sysctl of %.950s for%s%s by "
#define GR_TIME_MSG "time set by "
#define GR_DEFACL_MSG "fatal: unable to find subject for (%.16s:%d), loaded by "
#define GR_MMAP_ACL_MSG "%s executable mmap of %.950s by "
#define GR_MPROTECT_ACL_MSG "%s executable mprotect of %.950s by "
#define GR_SOCK_MSG "denied socket(%.16s,%.16s,%.16s) by "
#define GR_SOCK_NOINET_MSG "denied socket(%.16s,%.16s,%d) by "
#define GR_BIND_MSG "denied bind() by "
#define GR_CONNECT_MSG "denied connect() by "
#define GR_BIND_ACL_MSG "denied bind() to %pI4 port %u sock type %.16s protocol %.16s by "
#define GR_CONNECT_ACL_MSG "denied connect() to %pI4 port %u sock type %.16s protocol %.16s by "
#define GR_IP_LEARN_MSG "%s\t%u\t%u\t%u\t%.4095s\t%.4095s\t%pI4\t%u\t%u\t%u\t%u\t%pI4"
#define GR_EXEC_CHROOT_MSG "exec of %.980s within chroot by process "
#define GR_CAP_ACL_MSG "use of %s denied for "
#define GR_CAP_CHROOT_MSG "use of %s in chroot denied for "
#define GR_CAP_ACL_MSG2 "use of %s permitted for "
#define GR_USRCHANGE_ACL_MSG "change to uid %u denied for "
#define GR_GRPCHANGE_ACL_MSG "change to gid %u denied for "
#define GR_REMOUNT_AUDIT_MSG "remount of %.256s by "
#define GR_UNMOUNT_AUDIT_MSG "unmount of %.256s by "
#define GR_MOUNT_AUDIT_MSG "mount of %.256s to %.256s by "
#define GR_CHDIR_AUDIT_MSG "chdir to %.980s by "
#define GR_EXEC_AUDIT_MSG "exec of %.930s (%.128s) by "
#define GR_RESOURCE_MSG "denied resource overstep by requesting %lu for %.16s against limit %lu for "
#define GR_RWXMMAP_MSG "denied RWX mmap of %.950s by "
#define GR_RWXMPROTECT_MSG "denied RWX mprotect of %.950s by "
#define GR_TEXTREL_AUDIT_MSG "text relocation in %s, VMA:0x%08lx 0x%08lx by "
#define GR_VM86_MSG "denied use of vm86 by "
#define GR_PTRACE_AUDIT_MSG "process %.950s(%.16s:%d) attached to via ptrace by "
#define GR_INIT_TRANSFER_MSG "persistent special role transferred privilege to init by "
