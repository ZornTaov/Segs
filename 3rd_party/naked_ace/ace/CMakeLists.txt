INCLUDE_DIRECTORIES(..)
OPTION(ACE_no_hidden_visibility "" true)
OPTION(ACE_ace_for_tao "" false)
OPTION(ACE_inline "" true)
OPTION(ACE_mtrace "" false)
OPTION(ACE_probe "" false)

OPTION(BUILD_ACE_CODECS "" true)
OPTION(BUILD_ACE_FILECACHE "" true)
OPTION(BUILD_ACE_FLREACTOR "" true)
OPTION(BUILD_ACE_FOR_TAO "" false)
OPTION(BUILD_ACE_FOXREACTOR "" true)
OPTION(BUILD_ACE_IDL_DEPENDENCIES "" false)
OPTION(BUILD_ACE_INLINE ""  true)
OPTION(BUILD_ACE_OTHER "" true)
OPTION(BUILD_ACE_QTREACTOR "" true)
OPTION(BUILD_ACE_SVCCONF ""  true)
OPTION(BUILD_ACE_SVCCONF_GEN "" false)
OPTION(BUILD_ACE_TKREACTOR "" true)
OPTION(BUILD_ACE_TOKEN "" true)
OPTION(BUILD_ACE_UUID "" true)
OPTION(BUILD_ACE_XTREACTOR "" true)
OPTION(BUILD_ACEXML "" true)
OPTION(BUILD_ATHENA "" false)
OPTION(BUILD_BOOST "" false)
OPTION(BUILD_BZIP2 "" false)
OPTION(BUILD_CCM_DIRECT_COLLOCATION "" false)
OPTION(BUILD_CCM_LW "" true)
OPTION(BUILD_CCM_NOEVENT "" false)
OPTION(BUILD_CORBA_E_COMPACT "" false)
OPTION(BUILD_CORBA_E_MICRO "" false)
OPTION(BUILD_COREDX "" false)
OPTION(BUILD_CROSS_COMPILE "" false)
OPTION(BUILD_DDS4CCM_COREDX "" false)
OPTION(BUILD_DDS4CCM_NDDS "" false)
OPTION(BUILD_DDS4CCM_OPENDDS "" false)
OPTION(BUILD_DDS4CCM_SPLICE "" false)
OPTION(BUILD_DUMMY_LABEL "" false)
OPTION(BUILD_EXCLUDE_INET "" false)
OPTION(BUILD_FL "" false)
OPTION(BUILD_FOX "" false)
OPTION(BUILD_GEN_OSTREAM "" false)
OPTION(BUILD_GL "" true)
OPTION(BUILD_INET_SSL "" false)
OPTION(BUILD_IPV6 "" false)
OPTION(BUILD_JAVA "" false)
OPTION(BUILD_LINK_CODECFACTORY "" false)
OPTION(BUILD_LZO1 "" false)
OPTION(BUILD_LZO2 "" false)
OPTION(BUILD_MCPP "" false)
OPTION(BUILD_MFC "" false)
OPTION(BUILD_MINIMUM_CORBA "" false)
OPTION(BUILD_MOTIF "" false)
OPTION(BUILD_NDDS "" false)
OPTION(BUILD_NDDSMONITOR "" false)
OPTION(BUILD_NEGOTIATE_CODESETS "" false)
OPTION(BUILD_NOTIFY_MONITOR_CONTROL "" false)
OPTION(BUILD_OFCCM "" false)
OPTION(BUILD_OLD_STDSTREAM "" false)
OPTION(BUILD_OPENMP "" false)
OPTION(BUILD_OPENSSL "" true)
OPTION(BUILD_OPTIMIZE_COLLOCATED_INVOCATIONS "" true)
OPTION(BUILD_QOS "" false)
OPTION(BUILD_QT "" false)
OPTION(BUILD_QT3 "" false)
OPTION(BUILD_QT4 "" false)
OPTION(BUILD_RAPI "" false)
OPTION(BUILD_REPO "" false)
OPTION(BUILD_RPC "" false)
OPTION(BUILD_SCTP "" false)
OPTION(BUILD_SSL "" false)
OPTION(BUILD_STATIC_LIBS_ONLY "" false)
OPTION(BUILD_STL "" false)
OPTION(BUILD_TAO_FLRESOURCE "" true)
OPTION(BUILD_TAO_FOXRESOURCE "" true)
OPTION(BUILD_TAO_IDL_FE_GEN "" false)
OPTION(BUILD_TAO_NO_IIOP "" false)
OPTION(BUILD_TAO_QTRESOURCE "" true)
OPTION(BUILD_TAO_TKRESOURCE "" true)
OPTION(BUILD_TAO_XTRESOURCE "" true)
OPTION(BUILD_THREADS "" true)
OPTION(BUILD_TK "" false)
OPTION(BUILD_USES_WCHAR "" false)
OPTION(BUILD_VALUETYPE_OUT_INDIRECTION "" true)
OPTION(BUILD_VC_AVOID_CRT_SECURE_WARNINGS "" true)
OPTION(BUILD_VC_AVOID_THIS_IN_INITIALIZER_WARNINGS "" true)
OPTION(BUILD_VCL "" false)
OPTION(BUILD_VERSIONED_NAMESPACE "" false)
OPTION(BUILD_WINCE "" false)
OPTION(BUILD_WIRESHARK "" false)
OPTION(BUILD_WXWINDOWS "" false)
OPTION(BUILD_X11 "" true)
OPTION(BUILD_XERCES "" false)
OPTION(BUILD_XERCES2 "" false)
OPTION(BUILD_XERCES3 "" false)
OPTION(BUILD_XSC "" false)
OPTION(BUILD_XT "" false)
OPTION(BUILD_ZIP_WRAPPER "" false)
OPTION(BUILD_ZIPARCHIVE "" false)
OPTION(BUILD_ZLIB "" false)
OPTION(BUILD_ZZIP "" false)

SET(libACE_la_SOURCES
    ACE.cpp
    ACE_crc_ccitt.cpp
    ACE_crc32.cpp
    ace_wchar.cpp
    Activation_Queue.cpp
    Active_Map_Manager.cpp
    Addr.cpp
    Argv_Type_Converter.cpp
    Assert.cpp
    Asynch_IO.cpp
    Asynch_IO_Impl.cpp
    Asynch_Pseudo_Task.cpp
    ATM_Acceptor.cpp
    ATM_Addr.cpp
    ATM_Connector.cpp
    ATM_Params.cpp
    ATM_QoS.cpp
    ATM_Stream.cpp
    Atomic_Op.cpp
    Atomic_Op_Sparc.c
    Barrier.cpp
    Base_Thread_Adapter.cpp
    Based_Pointer_Repository.cpp
    Basic_Stats.cpp
    Basic_Types.cpp
    Capabilities.cpp
    CDR_Base.cpp
    CDR_Stream.cpp
    CDR_Size.cpp
    Cleanup.cpp
    Codeset_IBM1047.cpp
    Codeset_Registry.cpp
    Codeset_Registry_db.cpp
    Condition_Attributes.cpp
    Condition_Recursive_Thread_Mutex.cpp
    Condition_Thread_Mutex.cpp
    Configuration.cpp
    Configuration_Import_Export.cpp
    Connection_Recycling_Strategy.cpp
    Containers.cpp
    Copy_Disabled.cpp
    Date_Time.cpp
    DEV.cpp
    DEV_Addr.cpp
    DEV_Connector.cpp
    DEV_IO.cpp
    DLL_Manager.cpp
    Dev_Poll_Reactor.cpp
    Dirent.cpp
    Dirent_Selector.cpp
    Dump.cpp
    Dynamic.cpp
    Dynamic_Message_Strategy.cpp
    Event_Base.cpp
    Event_Handler.cpp
    Event_Handler_Handle_Timeout_Upcall.cpp
    FIFO.cpp
    FIFO_Recv.cpp
    FIFO_Recv_Msg.cpp
    FIFO_Send.cpp
    FIFO_Send_Msg.cpp
    FILE.cpp
    FILE_Addr.cpp
    FILE_Connector.cpp
    FILE_IO.cpp
    File_Lock.cpp
    Flag_Manip.cpp
    Framework_Component.cpp
    Functor.cpp
    Functor_String.cpp
    Get_Opt.cpp
    Handle_Ops.cpp
    Handle_Set.cpp
    Hashable.cpp
    High_Res_Timer.cpp
    ICMP_Socket.cpp
    INET_Addr.cpp
    Init_ACE.cpp
    IO_SAP.cpp
    IO_Cntl_Msg.cpp
    IOStream.cpp
    IPC_SAP.cpp
    Lib_Find.cpp
    Local_Memory_Pool.cpp
    Lock.cpp
    Log_Msg.cpp
    Log_Msg_Backend.cpp
    Log_Msg_Callback.cpp
    Log_Msg_IPC.cpp
    Log_Msg_NT_Event_Log.cpp
    Log_Msg_UNIX_Syslog.cpp
    Log_Record.cpp
    Logging_Strategy.cpp
    LSOCK.cpp
    LSOCK_Acceptor.cpp
    LSOCK_CODgram.cpp
    LSOCK_Connector.cpp
    LSOCK_Dgram.cpp
    LSOCK_Stream.cpp
    Malloc.cpp
    Malloc_Allocator.cpp
    MEM_Acceptor.cpp
    MEM_Addr.cpp
    MEM_Connector.cpp
    MEM_IO.cpp
    Mem_Map.cpp
    MEM_SAP.cpp
    MEM_Stream.cpp
    Message_Block.cpp
    Message_Queue.cpp
    Message_Queue_NT.cpp
    Message_Queue_Vx.cpp
    Method_Request.cpp
    MMAP_Memory_Pool.cpp
    Msg_WFMO_Reactor.cpp
    Monitor_Admin.cpp
    Monitor_Admin_Manager.cpp
    Monitor_Base.cpp
    Monitor_Point_Registry.cpp
    Monitor_Size.cpp
    Monitor_Control_Types.cpp
    Monitor_Control_Action.cpp
    Monotonic_Time_Policy.cpp
    Multihomed_INET_Addr.cpp
    Mutex.cpp
    Netlink_Addr.cpp
    Notification_Strategy.cpp
    Notification_Queue.cpp
    Obchunk.cpp
    Object_Manager.cpp
    Object_Manager_Base.cpp
    OS_Errno.cpp
    OS_Log_Msg_Attributes.cpp
    OS_main.cpp
    OS_NS_arpa_inet.cpp
    OS_NS_ctype.cpp
    OS_NS_dirent.cpp
    OS_NS_dlfcn.cpp
    OS_NS_errno.cpp
    OS_NS_fcntl.cpp
    OS_NS_math.cpp
    OS_NS_netdb.cpp
    OS_NS_poll.cpp
    OS_NS_pwd.cpp
    OS_NS_regex.cpp
    OS_NS_signal.cpp
    OS_NS_stdio.cpp
    OS_NS_stdlib.cpp
    OS_NS_string.cpp
    OS_NS_strings.cpp
    OS_NS_stropts.cpp
    OS_NS_sys_mman.cpp
    OS_NS_sys_msg.cpp
    OS_NS_sys_resource.cpp
    OS_NS_sys_select.cpp
    OS_NS_sys_sendfile.cpp
    OS_NS_sys_shm.cpp
    OS_NS_sys_socket.cpp
    OS_NS_sys_stat.cpp
    OS_NS_sys_time.cpp
    OS_NS_sys_uio.cpp
    OS_NS_sys_utsname.cpp
    OS_NS_sys_wait.cpp
    OS_NS_Thread.cpp
    OS_NS_time.cpp
    OS_NS_unistd.cpp
    OS_NS_wchar.cpp
    OS_NS_wctype.cpp
    OS_QoS.cpp
    OS_Thread_Adapter.cpp
    OS_TLI.cpp
    Pagefile_Memory_Pool.cpp
    Parse_Node.cpp
    PI_Malloc.cpp
    Ping_Socket.cpp
    Pipe.cpp
    POSIX_Asynch_IO.cpp
    POSIX_CB_Proactor.cpp
    POSIX_Proactor.cpp
    Priority_Reactor.cpp
    Proactor.cpp
    Proactor_Impl.cpp
    Process.cpp
    Process_Manager.cpp
    Process_Mutex.cpp
    Process_Semaphore.cpp
    Profile_Timer.cpp
    Reactor.cpp
    Reactor_Impl.cpp
    Reactor_Notification_Strategy.cpp
    Reactor_Timer_Interface.cpp
    Read_Buffer.cpp
    Recursive_Thread_Mutex.cpp
    Recyclable.cpp
    Registry.cpp
    Rtems_init.c
    RW_Mutex.cpp
    RW_Process_Mutex.cpp
    RW_Thread_Mutex.cpp
    Sample_History.cpp
    Sbrk_Memory_Pool.cpp
    Sched_Params.cpp
    Select_Reactor_Base.cpp
    Semaphore.cpp
    Shared_Memory.cpp

    DLL.cpp
    Dynamic_Service_Base.cpp
    Dynamic_Service_Dependency.cpp
    Parse_Node.cpp
    Service_Config.cpp
    Service_Gestalt.cpp
    Service_Manager.cpp
    Service_Object.cpp
    Service_Repository.cpp
    Service_Types.cpp
    Shared_Object.cpp
    Svc_Conf_Lexer.cpp
    Svc_Conf_y.cpp
    Encoding_Converter.cpp
    Encoding_Converter_Factory.cpp
    UTF8_Encoding_Converter.cpp
    UTF16_Encoding_Converter.cpp
    UTF32_Encoding_Converter.cpp
    XML_Svc_Conf.cpp

    Shared_Memory_MM.cpp
    Shared_Memory_Pool.cpp
    Shared_Memory_SV.cpp
    Sig_Adapter.cpp
    Sig_Handler.cpp
    Signal.cpp
    SOCK.cpp
    SOCK_Acceptor.cpp
    SOCK_CODgram.cpp
    Sock_Connect.cpp
    SOCK_Connector.cpp
    SOCK_Dgram.cpp
    SOCK_Dgram_Bcast.cpp
    SOCK_Dgram_Mcast.cpp
    SOCK_IO.cpp
    SOCK_Netlink.cpp
    SOCK_SEQPACK_Acceptor.cpp
    SOCK_SEQPACK_Association.cpp
    SOCK_SEQPACK_Connector.cpp
    SOCK_Stream.cpp
    SPIPE.cpp
    SPIPE_Acceptor.cpp
    SPIPE_Addr.cpp
    SPIPE_Connector.cpp
    SPIPE_Stream.cpp
    SString.cpp
    Stack_Trace.cpp
    Stats.cpp
    String_Base_Const.cpp
    SUN_Proactor.cpp
    SV_Message.cpp
    SV_Message_Queue.cpp
    SV_Semaphore_Complex.cpp
    SV_Semaphore_Simple.cpp
    SV_Shared_Memory.cpp
    Synch_Options.cpp
    System_Time.cpp
    Task.cpp
    Thread.cpp
    Thread_Adapter.cpp
    Thread_Control.cpp
    Thread_Exit.cpp
    Thread_Hook.cpp
    Thread_Manager.cpp
    Thread_Mutex.cpp
    Thread_Semaphore.cpp
    Throughput_Stats.cpp
    Time_Policy.cpp
    Time_Value.cpp
    Timeprobe.cpp
    TLI.cpp
    TLI_Acceptor.cpp
    TLI_Connector.cpp
    TLI_Stream.cpp
    Token.cpp
    TP_Reactor.cpp
    Trace.cpp
    TSS_Adapter.cpp
    TTY_IO.cpp
    UNIX_Addr.cpp
    UPIPE_Acceptor.cpp
    UPIPE_Connector.cpp
    UPIPE_Stream.cpp
    WFMO_Reactor.cpp
    WIN32_Asynch_IO.cpp
    WIN32_Proactor.cpp
    XTI_ATM_Mcast.cpp
)
SET(ACE_templates
    Abstract_Timer_Queue.cpp
    Acceptor.cpp
    Active_Map_Manager_T.cpp
    ARGV.cpp
    Arg_Shifter.cpp
    Array_Base.cpp
    Array_Map.cpp
    Asynch_Acceptor.cpp
    Asynch_Connector.cpp
    Atomic_Op_T.cpp
    Atomic_Op_GCC_T.cpp
    Auto_Event.cpp
    Auto_Functor.cpp
    Auto_IncDec_T.cpp
    Auto_Ptr.cpp
    Based_Pointer_T.cpp
    Cache_Map_Manager_T.cpp
    Cached_Connect_Strategy_T.cpp
    Caching_Strategies_T.cpp
    Caching_Utility_T.cpp
    Cleanup_Strategies_T.cpp
    Condition_T.cpp
    Connector.cpp
    Containers_T.cpp
    Countdown_Time_T.cpp
    Dump_T.cpp
    Dynamic_Service.cpp
    Env_Value_T.cpp
    Event.cpp
    Event_Handler_T.cpp
    Framework_Component_T.cpp
    Free_List.cpp
    Functor_T.cpp
    Future.cpp
    Future_Set.cpp
    Guard_T.cpp
    Hash_Cache_Map_Manager_T.cpp
    Hash_Map_Manager_T.cpp
    Hash_Multi_Map_Manager_T.cpp
    Hash_Map_With_Allocator_T.cpp
    IOStream_T.cpp
    Intrusive_Auto_Ptr.cpp
    Intrusive_List.cpp
    Intrusive_List_Node.cpp
    LOCK_SOCK_Acceptor.cpp
    Local_Name_Space_T.cpp
    Lock_Adapter_T.cpp
    Malloc_T.cpp
    Managed_Object.cpp
    Manual_Event.cpp
    Map_Manager.cpp
    Map_T.cpp
    Message_Block_T.cpp
    Message_Queue_T.cpp
    Metrics_Cache_T.cpp
    Module.cpp
    Node.cpp
    Obstack_T.cpp
    Pair_T.cpp
    RB_Tree.cpp
    Reactor_Token_T.cpp
    Refcountable_T.cpp
    Refcounted_Auto_Ptr.cpp
    Reverse_Lock_T.cpp
    Select_Reactor_T.cpp
    Singleton.cpp
    Strategies_T.cpp
    Stream.cpp
    Stream_Modules.cpp
    String_Base.cpp
    Svc_Handler.cpp
    Refcountable_T.cpp
    TSS_T.cpp
    Task_Ex_T.cpp
    Task_T.cpp
    Test_and_Set.cpp
    Timeprobe_T.cpp
    Time_Policy_T.cpp
    Time_Value_T.cpp
    Timer_Hash_T.cpp
    Timer_Heap_T.cpp
    Timer_List_T.cpp
    Timer_Queue_Adapters.cpp
    Timer_Queue_Iterator.cpp
    Timer_Queue_T.cpp
    Timer_Wheel_T.cpp
    Tokenizer_T.cpp
    Typed_SV_Message.cpp
    Typed_SV_Message_Queue.cpp
    Unbounded_Queue.cpp
    Unbounded_Set.cpp
    Unbounded_Set_Ex.cpp
    Vector_T.cpp
)
SET(ACE_Inline_Files
    Bound_Ptr.inl
    Condition_T.inl
    Guard_T.inl
    Handle_Gobbler.inl
    Intrusive_Auto_Ptr.inl
    Lock_Adapter_T.inl
    Metrics_Cache_T.inl
    Refcounted_Auto_Ptr.inl
    Reverse_Lock_T.inl
    TSS_T.inl
    Time_Value_T.inl
)

SET(ACE_Header_Files
    # Set recurse so that everything from os_include is pulled in
    #recurse = 1
  os_include/arpa/os_inet.h
  os_include/net/os_if.h
  os_include/netinet/os_in.h
  os_include/netinet/os_tcp.h
  os_include/os_aio.h
  os_include/os_assert.h
  os_include/os_byteswap.h
  os_include/os_complex.h
  os_include/os_cpio.h
  os_include/os_ctype.h
  os_include/os_dirent.h
  os_include/os_dlfcn.h
  os_include/os_errno.h
  os_include/os_fcntl.h
  os_include/os_fenv.h
  os_include/os_float.h
  os_include/os_fmtmsg.h
  os_include/os_fnmatch.h
  os_include/os_ftw.h
  os_include/os_glob.h
  os_include/os_grp.h
  os_include/os_iconv.h
  os_include/os_ifaddrs.h
  os_include/os_intrin.h
  os_include/os_inttypes.h
  os_include/os_iso646.h
  os_include/os_kstat.h
  os_include/os_langinfo.h
  os_include/os_libgen.h
  os_include/os_limits.h
  os_include/os_local.h
  os_include/os_math.h
  os_include/os_monetary.h
  os_include/os_mqueue.h
  os_include/os_ndbm.h
  os_include/os_netdb.h
  os_include/os_nl_types.h
  os_include/os_pdh.h
  os_include/os_pdhmsg.h
  os_include/os_poll.h
  os_include/os_pthread.h
  os_include/os_pwd.h
  os_include/os_regex.h
  os_include/os_sched.h
  os_include/os_search.h
  os_include/os_semaphore.h
  os_include/os_setjmp.h
  os_include/os_signal.h
  os_include/os_spawn.h
  os_include/os_stdarg.h
  os_include/os_stdbool.h
  os_include/os_stddef.h
  os_include/os_stdint.h
  os_include/os_stdio.h
  os_include/os_stdlib.h
  os_include/os_string.h
  os_include/os_strings.h
  os_include/os_stropts.h
  os_include/os_syslog.h
  os_include/os_tar.h
  os_include/os_termios.h
  os_include/os_tgmath.h
  os_include/os_time.h
  os_include/os_trace.h
  os_include/os_typeinfo.h
  os_include/os_ucontext.h
  os_include/os_ulimit.h
  os_include/os_unistd.h
  os_include/os_utime.h
  os_include/os_utmpx.h
  os_include/os_wchar.h
  os_include/os_wctype.h
  os_include/os_wordexp.h
  os_include/sys/os_ipc.h
  os_include/sys/os_loadavg.h
  os_include/sys/os_mman.h
  os_include/sys/os_msg.h
  os_include/sys/os_pstat.h
  os_include/sys/os_resource.h
  os_include/sys/os_select.h
  os_include/sys/os_sem.h
  os_include/sys/os_shm.h
  os_include/sys/os_socket.h
  os_include/sys/os_stat.h
  os_include/sys/os_statvfs.h
  os_include/sys/os_sysctl.h
  os_include/sys/os_sysinfo.h
  os_include/sys/os_time.h
  os_include/sys/os_timeb.h
  os_include/sys/os_times.h
  os_include/sys/os_types.h
  os_include/sys/os_uio.h
  os_include/sys/os_un.h
  os_include/sys/os_utsname.h
  os_include/sys/os_wait.h

    ACE_export.h
    Bound_Ptr.h
    CE_Screen_Output.h
    Codeset_Symbols.h
    CORBA_macros.h
    Codeset_Symbols.h
    Condition_T.h
    Countdown_Time.h
    Default_Constants.h
    Event_Base.h
    Global_Macros.h
    Guard_T.h
    Hash_Map_Manager.h
    Handle_Gobbler.h
    If_Then_Else.h
    IO_Cntl_Msg.h
    Intrusive_Auto_Ptr.h
    Lock_Adapter_T.h
    Log_Priority.h
    Malloc_Base.h
    Metrics_Cache.h
    Metrics_Cache_T.h
    Memory_Pool.h
    Min_Max.h
    Monotonic_Time_Policy.h
    Netlink_Addr.h
    Null_Barrier.h
    Null_Condition.h
    Null_Mutex.h
    Null_Semaphore.h
    Numeric_Limits.h
    OS.h
    OS_Memory.h
    OS_NS_macros.h
    OS_Thread_Adapter.h
    Object_Manager_Base.h
    Obstack.h
    Proactor_Impl.h
    Reactor_Impl.h
    Reactor_Timer_Interface.h
    Refcounted_Auto_Ptr.h
    Reverse_Lock_T.h
    Select_Reactor.h
    SOCK_Netlink.h
    SStringfwd.h
    Stack_Trace.h
    Static_Object_Lock.h
    String_Base_Const.h
    Svc_Conf.h
    Svc_Conf_Param.h
    Svc_Conf_Tokens.h
    Svc_Conf_Token_Table.h
    Synch.h
    Synch_Traits.h
    TSS_T.h
    Time_Policy.h
    Time_Value_T.h
    Timer_Hash.h
    Timer_Heap.h
    Timer_List.h
    Timer_Queue.h
    Timer_Queuefwd.h
    Timer_Wheel.h
    Truncate.h
    UPIPE_Addr.h
    Value_Ptr.h
    Version.h
    Versioned_Namespace.h
    ace_wchar.h
    ace_wchar.inl
    checked_iterator.h
    config-*.h
    config.h
    iosfwd.h
    os_include
    post.h
    pre.h
    streams.h
    svc_export.h
)

SET(ACE_include_HEADERS
  Event.cpp
  Auto_Event.cpp
  Manual_Event.cpp
  ACE.h
  ACE.inl
  ACE_export.h
  ARGV.cpp
  ARGV.h
  ARGV.inl
  ATM_Acceptor.h
  ATM_Acceptor.inl
  ATM_Addr.h
  ATM_Addr.inl
  ATM_Connector.h
  ATM_Connector.inl
  ATM_Params.h
  ATM_Params.inl
  ATM_QoS.h
  ATM_QoS.inl
  ATM_Stream.h
  ATM_Stream.inl
  Abstract_Timer_Queue.cpp
  Abstract_Timer_Queue.h
  Acceptor.cpp
  Acceptor.h
  Activation_Queue.h
  Activation_Queue.inl
  Active_Map_Manager.h
  Active_Map_Manager.inl
  Active_Map_Manager_T.cpp
  Active_Map_Manager_T.h
  Active_Map_Manager_T.inl
  Addr.h
  Addr.inl
  Arg_Shifter.cpp
  Arg_Shifter.h
  Argv_Type_Converter.h
  Argv_Type_Converter.inl
  Array_Base.cpp
  Array_Base.h
  Array_Base.inl
  Array_Map.cpp
  Array_Map.h
  Array_Map.inl
  Assert.h
  Asynch_Acceptor.cpp
  Asynch_Acceptor.h
  Asynch_Connector.cpp
  Asynch_Connector.h
  Asynch_IO.h
  Asynch_IO_Impl.h
  Asynch_IO_Impl.inl
  Asynch_Pseudo_Task.h
  Atomic_Op.h
  Atomic_Op.inl
  Atomic_Op_GCC_T.cpp
  Atomic_Op_GCC_T.h
  Atomic_Op_GCC_T.inl
  Atomic_Op_Sparc.h
  Atomic_Op_T.cpp
  Atomic_Op_T.h
  Atomic_Op_T.inl
  Auto_Event.h
  Auto_Event.inl
  Auto_Functor.cpp
  Auto_Functor.h
  Auto_Functor.inl
  Auto_IncDec_T.cpp
  Auto_IncDec_T.h
  Auto_IncDec_T.inl
  Auto_Ptr.cpp
  Auto_Ptr.h
  Auto_Ptr.inl
  Barrier.h
  Barrier.inl
  Base_Thread_Adapter.h
  Base_Thread_Adapter.inl
  Based_Pointer_Repository.h
  Based_Pointer_T.cpp
  Based_Pointer_T.h
  Based_Pointer_T.inl
  Basic_Stats.h
  Basic_Stats.inl
  Basic_Types.h
#  Basic_Types.inl
  Bound_Ptr.h
  Bound_Ptr.inl
  CDR_Base.h
  CDR_Base.inl
  CDR_Size.h
  CDR_Size.inl
  CDR_Stream.h
  CDR_Stream.inl
  CE_Screen_Output.h
  CORBA_macros.h
  Cache_Map_Manager_T.cpp
  Cache_Map_Manager_T.h
  Cache_Map_Manager_T.inl
  Cached_Connect_Strategy_T.cpp
  Cached_Connect_Strategy_T.h
  Caching_Strategies_T.cpp
  Caching_Strategies_T.h
  Caching_Strategies_T.inl
  Caching_Utility_T.cpp
  Caching_Utility_T.h
  Capabilities.h
  Capabilities.inl
  Cleanup.h
  Cleanup.inl
  Cleanup_Strategies_T.cpp
  Cleanup_Strategies_T.h
  Codecs.h
  Codeset_IBM1047.h
  Codeset_Registry.h
  Codeset_Registry.inl
  Codeset_Symbols.h
  Condition_Attributes.h
  Condition_Attributes.inl
  Condition_Recursive_Thread_Mutex.h
  Condition_T.cpp
  Condition_T.h
  Condition_T.inl
  Condition_Thread_Mutex.h
  Condition_Thread_Mutex.inl
  Configuration.h
  Configuration.inl
  Configuration_Import_Export.h
  Connection_Recycling_Strategy.h
  Connector.cpp
  Connector.h
  Containers.h
  Containers.inl
  Containers_T.cpp
  Containers_T.h
  Containers_T.inl
  Copy_Disabled.h
  Countdown_Time.h
  Countdown_Time_T.cpp
  Countdown_Time_T.h
  Countdown_Time_T.inl
  DEV.h
  DEV.inl
  DEV_Addr.h
  DEV_Addr.inl
  DEV_Connector.h
  DEV_Connector.inl
  DEV_IO.h
  DEV_IO.inl
  DLL.h
  DLL_Manager.h
  Date_Time.h
  Date_Time.inl
  Default_Constants.h
  Dev_Poll_Reactor.h
  Dev_Poll_Reactor.inl
  Dirent.h
  Dirent.inl
  Dirent_Selector.h
  Dirent_Selector.inl
  Dump.h
  Dump_T.cpp
  Dump_T.h
  Dynamic.h
  Dynamic.inl
  Dynamic_Message_Strategy.h
  Dynamic_Message_Strategy.inl
  Dynamic_Service.cpp
  Dynamic_Service.h
  Dynamic_Service.inl
  Dynamic_Service_Base.h
  Dynamic_Service_Dependency.h
  Encoding_Converter.h
  Encoding_Converter_Factory.h
  Env_Value_T.cpp
  Env_Value_T.h
  Env_Value_T.inl
  Event.h
  Event.inl
  Event_Base.h
  Event_Base.inl
  Event_Handler.h
  Event_Handler.inl
  Event_Handler_Handle_Timeout_Upcall.h
  Event_Handler_Handle_Timeout_Upcall.inl
  Event_Handler_T.cpp
  Event_Handler_T.h
  Event_Handler_T.inl
  FIFO.h
  FIFO.inl
  FIFO_Recv.h
  FIFO_Recv.inl
  FIFO_Recv_Msg.h
  FIFO_Recv_Msg.inl
  FIFO_Send.h
  FIFO_Send.inl
  FIFO_Send_Msg.h
  FIFO_Send_Msg.inl
  FILE.h
  FILE.inl
  FILE_Addr.h
  FILE_Addr.inl
  FILE_Connector.h
  FILE_Connector.inl
  FILE_IO.h
  FILE_IO.inl
  File_Lock.h
  File_Lock.inl
  Filecache.h
  Flag_Manip.h
  Flag_Manip.inl
  Framework_Component.h
  Framework_Component.inl
  Framework_Component_T.cpp
  Framework_Component_T.h
  Free_List.cpp
  Free_List.h
  Functor.h
  Functor.inl
  Functor_String.h
  Functor_String.inl
  Functor_T.cpp
  Functor_T.h
  Functor_T.inl
  Future.cpp
  Future.h
  Future_Set.cpp
  Future_Set.h
  Get_Opt.h
  Get_Opt.inl
  Global_Macros.h
  Guard_T.cpp
  Guard_T.h
  Guard_T.inl
  Handle_Gobbler.h
  Handle_Gobbler.inl
  Handle_Ops.h
  Handle_Set.h
  Handle_Set.inl
  Hash_Cache_Map_Manager_T.cpp
  Hash_Cache_Map_Manager_T.h
  Hash_Cache_Map_Manager_T.inl
  Hash_Map_Manager.h
  Hash_Map_Manager_T.cpp
  Hash_Map_Manager_T.h
  Hash_Map_Manager_T.inl
  Hash_Map_With_Allocator_T.cpp
  Hash_Map_With_Allocator_T.h
  Hash_Map_With_Allocator_T.inl
  Hash_Multi_Map_Manager_T.cpp
  Hash_Multi_Map_Manager_T.h
  Hash_Multi_Map_Manager_T.inl
  Hashable.h
  Hashable.inl
  High_Res_Timer.h
  High_Res_Timer.inl
  ICMP_Socket.h
  INET_Addr.h
  INET_Addr.inl
  IOStream.h
  IOStream_T.cpp
  IOStream_T.h
  IOStream_T.inl
  IO_Cntl_Msg.h
  IO_Cntl_Msg.inl
  IO_SAP.h
  IO_SAP.inl
  IPC_SAP.h
  IPC_SAP.inl
  If_Then_Else.h
  Init_ACE.h
  Intrusive_Auto_Ptr.cpp
  Intrusive_Auto_Ptr.h
  Intrusive_Auto_Ptr.inl
  Intrusive_List.cpp
  Intrusive_List.h
  Intrusive_List.inl
  Intrusive_List_Node.cpp
  Intrusive_List_Node.h
  Intrusive_List_Node.inl
  LOCK_SOCK_Acceptor.cpp
  LOCK_SOCK_Acceptor.h
  LSOCK.h
  LSOCK.inl
  LSOCK_Acceptor.h
  LSOCK_CODgram.h
  LSOCK_CODgram.inl
  LSOCK_Connector.h
  LSOCK_Connector.inl
  LSOCK_Dgram.h
  LSOCK_Dgram.inl
  LSOCK_Stream.h
  LSOCK_Stream.inl
  Lib_Find.h
  Local_Memory_Pool.h
  Local_Name_Space.h
  Local_Name_Space_T.cpp
  Local_Name_Space_T.h
  Local_Tokens.h
  Local_Tokens.inl
  Lock.h
  Lock.inl
  Lock_Adapter_T.cpp
  Lock_Adapter_T.h
  Lock_Adapter_T.inl
  Log_Msg.h
  Log_Msg.inl
  Log_Msg_Backend.h
  Log_Msg_Callback.h
  Log_Msg_IPC.h
  Log_Msg_NT_Event_Log.h
  Log_Msg_UNIX_Syslog.h
  Log_Priority.h
  Log_Record.h
  Log_Record.inl
  Logging_Strategy.h
  MEM_Acceptor.h
  MEM_Acceptor.inl
  MEM_Addr.h
  MEM_Addr.inl
  MEM_Connector.h
  MEM_Connector.inl
  MEM_IO.h
  MEM_IO.inl
  MEM_SAP.h
  MEM_SAP.inl
  MEM_Stream.h
  MEM_Stream.inl
  MMAP_Memory_Pool.h
  MMAP_Memory_Pool.inl
  Malloc.h
  Malloc.inl
  Malloc_Allocator.h
  Malloc_Allocator.inl
  Malloc_Base.h
  Malloc_T.cpp
  Malloc_T.h
  Malloc_T.inl
  Managed_Object.cpp
  Managed_Object.h
  Managed_Object.inl
  Manual_Event.h
  Manual_Event.inl
  Map_Manager.cpp
  Map_Manager.h
  Map_Manager.inl
  Map_T.cpp
  Map_T.h
  Map_T.inl
  Mem_Map.h
  Mem_Map.inl
  Memory_Pool.h
  Message_Block.h
  Message_Block.inl
  Message_Block_T.cpp
  Message_Block_T.h
  Message_Block_T.inl
  Message_Queue.h
  Message_Queue.inl
  Message_Queue_NT.h
  Message_Queue_NT.inl
  Message_Queue_T.cpp
  Message_Queue_T.h
  Message_Queue_Vx.h
  Message_Queue_Vx.inl
  Method_Request.h
  Metrics_Cache.h
  Metrics_Cache_T.cpp
  Metrics_Cache_T.h
  Metrics_Cache_T.inl
  Min_Max.h
  Module.cpp
  Module.h
  Module.inl
  Monitor_Admin.h
  Monitor_Admin_Manager.h
  Monitor_Base.h
  Monitor_Base.inl
  Monitor_Control_Action.h
  Monitor_Control_Types.h
  Monitor_Point_Registry.h
  Monitor_Size.h
  Msg_WFMO_Reactor.h
  Msg_WFMO_Reactor.inl
  Multihomed_INET_Addr.h
  Multihomed_INET_Addr.inl
  Mutex.h
  Mutex.inl
  NT_Service.h
  NT_Service.inl
  Name_Proxy.h
  Name_Request_Reply.h
  Name_Space.h
  Naming_Context.h
  Naming_Context.inl
  Netlink_Addr.h
  Netlink_Addr.inl
  Node.cpp
  Node.h
  Notification_Queue.h
  Notification_Queue.inl
  Notification_Strategy.h
  Notification_Strategy.inl
  Null_Barrier.h
  Null_Condition.h
  Null_Mutex.h
  Null_Semaphore.h
  Numeric_Limits.h
  OS.h
  OS_Errno.h
  OS_Errno.inl
  OS_Log_Msg_Attributes.h
  OS_Log_Msg_Attributes.inl
  OS_Memory.h
  OS_NS_Thread.h
  OS_NS_Thread.inl
  OS_NS_arpa_inet.h
  OS_NS_arpa_inet.inl
  OS_NS_ctype.h
  OS_NS_ctype.inl
  OS_NS_dirent.h
  OS_NS_dirent.inl
  OS_NS_dlfcn.h
  OS_NS_dlfcn.inl
  OS_NS_errno.h
  OS_NS_errno.inl
  OS_NS_fcntl.h
  OS_NS_fcntl.inl
  OS_NS_macros.h
  OS_NS_math.h
  OS_NS_math.inl
  OS_NS_netdb.h
  OS_NS_netdb.inl
  OS_NS_poll.h
  OS_NS_poll.inl
  OS_NS_pwd.h
  OS_NS_pwd.inl
  OS_NS_regex.h
  OS_NS_regex.inl
  OS_NS_signal.h
  OS_NS_signal.inl
  OS_NS_stdio.h
  OS_NS_stdio.inl
  OS_NS_stdlib.h
  OS_NS_stdlib.inl
  OS_NS_string.h
  OS_NS_string.inl
  OS_NS_strings.h
  OS_NS_strings.inl
  OS_NS_stropts.h
  OS_NS_stropts.inl
  OS_NS_sys_mman.h
  OS_NS_sys_mman.inl
  OS_NS_sys_msg.h
  OS_NS_sys_msg.inl
  OS_NS_sys_resource.h
  OS_NS_sys_resource.inl
  OS_NS_sys_select.h
  OS_NS_sys_select.inl
  OS_NS_sys_sendfile.h
  OS_NS_sys_sendfile.inl
  OS_NS_sys_shm.h
  OS_NS_sys_shm.inl
  OS_NS_sys_socket.h
  OS_NS_sys_socket.inl
  OS_NS_sys_stat.h
  OS_NS_sys_stat.inl
  OS_NS_sys_time.h
  OS_NS_sys_time.inl
  OS_NS_sys_uio.h
  OS_NS_sys_uio.inl
  OS_NS_sys_utsname.h
  OS_NS_sys_wait.h
  OS_NS_sys_wait.inl
  OS_NS_time.h
  OS_NS_time.inl
  OS_NS_unistd.h
  OS_NS_unistd.inl
  OS_NS_wchar.h
  OS_NS_wchar.inl
  OS_NS_wctype.h
  OS_NS_wctype.inl
  OS_QoS.h
  OS_TLI.h
  OS_TLI.inl
  OS_Thread_Adapter.h
  OS_main.h
  Obchunk.h
  Obchunk.inl
  Object_Manager.h
  Object_Manager.inl
  Object_Manager_Base.h
  Obstack.h
  Obstack_T.cpp
  Obstack_T.h
  Obstack_T.inl
  PI_Malloc.h
  PI_Malloc.inl
  POSIX_Asynch_IO.h
  POSIX_CB_Proactor.h
  POSIX_Proactor.h
  POSIX_Proactor.inl
  Pagefile_Memory_Pool.h
  Pagefile_Memory_Pool.inl
  Pair_T.cpp
  Pair_T.h
  Pair_T.inl
  Parse_Node.h
  Ping_Socket.h
  Ping_Socket.inl
  Pipe.h
  Pipe.inl
  Priority_Reactor.h
  Proactor.h
  Proactor.inl
  Proactor_Impl.h
  Process.h
  Process.inl
  Process_Manager.h
  Process_Manager.inl
  Process_Mutex.h
  Process_Mutex.inl
  Process_Semaphore.h
  Process_Semaphore.inl
  Profile_Timer.h
  Profile_Timer.inl
  RB_Tree.cpp
  RB_Tree.h
  RB_Tree.inl
  RW_Mutex.h
  RW_Mutex.inl
  RW_Process_Mutex.h
  RW_Process_Mutex.inl
  RW_Thread_Mutex.h
  RW_Thread_Mutex.inl
  Reactor.h
  Reactor.inl
  Reactor_Impl.h
  Reactor_Notification_Strategy.h
  Reactor_Notification_Strategy.inl
  Reactor_Timer_Interface.h
  Reactor_Token_T.cpp
  Reactor_Token_T.h
  Read_Buffer.h
  Read_Buffer.inl
  Recursive_Thread_Mutex.h
  Recursive_Thread_Mutex.inl
  Recyclable.h
  Recyclable.inl
  Refcountable_T.cpp
  Refcountable_T.h
  Refcountable_T.inl
  Refcounted_Auto_Ptr.cpp
  Refcounted_Auto_Ptr.h
  Refcounted_Auto_Ptr.inl
  Registry.h
  Registry_Name_Space.h
  Remote_Name_Space.h
  Remote_Tokens.h
  Remote_Tokens.inl
  Reverse_Lock_T.cpp
  Reverse_Lock_T.h
  Reverse_Lock_T.inl
  SOCK.h
  SOCK.inl
  SOCK_Acceptor.h
  SOCK_Acceptor.inl
  SOCK_CODgram.h
  SOCK_CODgram.inl
  SOCK_Connector.h
  SOCK_Connector.inl
  SOCK_Dgram.h
  SOCK_Dgram.inl
  SOCK_Dgram_Bcast.h
  SOCK_Dgram_Bcast.inl
  SOCK_Dgram_Mcast.h
  SOCK_Dgram_Mcast.inl
  SOCK_IO.h
  SOCK_IO.inl
  SOCK_Netlink.h
  SOCK_Netlink.inl
  SOCK_SEQPACK_Acceptor.h
  SOCK_SEQPACK_Acceptor.inl
  SOCK_SEQPACK_Association.h
  SOCK_SEQPACK_Association.inl
  SOCK_SEQPACK_Connector.h
  SOCK_SEQPACK_Connector.inl
  SOCK_Stream.h
  SOCK_Stream.inl
  SPIPE.h
  SPIPE.inl
  SPIPE_Acceptor.h
  SPIPE_Addr.h
  SPIPE_Addr.inl
  SPIPE_Connector.h
  SPIPE_Connector.inl
  SPIPE_Stream.h
  SPIPE_Stream.inl
  SString.h
  SString.inl
  SStringfwd.h
  SUN_Proactor.h
  SV_Message.h
  SV_Message.inl
  SV_Message_Queue.h
  SV_Message_Queue.inl
  SV_Semaphore_Complex.h
  SV_Semaphore_Complex.inl
  SV_Semaphore_Simple.h
  SV_Semaphore_Simple.inl
  SV_Shared_Memory.h
  SV_Shared_Memory.inl
  Sample_History.h
  Sample_History.inl
  Sbrk_Memory_Pool.h
  Sched_Params.h
  Sched_Params.inl
  Select_Reactor.h
  Select_Reactor_Base.h
  Select_Reactor_Base.inl
  Select_Reactor_T.cpp
  Select_Reactor_T.h
  Select_Reactor_T.inl
  Semaphore.h
  Semaphore.inl
  Service_Config.h
  Service_Config.inl
  Service_Gestalt.h
  Service_Gestalt.inl
  Service_Manager.h
  Service_Object.h
  Service_Object.inl
  Service_Repository.h
  Service_Repository.inl
  Service_Types.h
  Service_Types.inl
  Shared_Memory.h
  Shared_Memory_MM.h
  Shared_Memory_MM.inl
  Shared_Memory_Pool.h
  Shared_Memory_SV.h
  Shared_Memory_SV.inl
  Shared_Object.h
  Shared_Object.inl
  Sig_Adapter.h
  Sig_Handler.h
  Sig_Handler.inl
  Signal.h
  Signal.inl
  Singleton.cpp
  Singleton.h
  Singleton.inl
  Sock_Connect.h
  Stack_Trace.h
  Static_Object_Lock.h
  Stats.h
  Stats.inl
  Strategies_T.cpp
  Strategies_T.h
  Strategies_T.inl
  Stream.cpp
  Stream.h
  Stream.inl
  Stream_Modules.cpp
  Stream_Modules.h
  String_Base.cpp
  String_Base.h
  String_Base.inl
  String_Base_Const.h
  Svc_Conf.h
  Svc_Conf_Lexer.h
  Svc_Conf_Param.h
  Svc_Conf_Token_Table.h
  Svc_Conf_Tokens.h
  Svc_Handler.cpp
  Svc_Handler.h
  Synch.h
  Synch_Options.h
  Synch_Traits.h
  System_Time.h
  TLI.h
  TLI.inl
  TLI_Acceptor.h
  TLI_Connector.h
  TLI_Connector.inl
  TLI_Stream.h
  TLI_Stream.inl
  TP_Reactor.h
  TP_Reactor.inl
  TSS_Adapter.h
  TSS_T.cpp
  TSS_T.h
  TSS_T.inl
  TTY_IO.h
  Task.h
  Task.inl
  Task_Ex_T.cpp
  Task_Ex_T.h
  Task_Ex_T.inl
  Task_T.cpp
  Task_T.h
  Task_T.inl
  Test_and_Set.cpp
  Test_and_Set.h
  Thread.h
  Thread.inl
  Thread_Adapter.h
  Thread_Adapter.inl
  Thread_Control.h
  Thread_Control.inl
  Thread_Exit.h
  Thread_Hook.h
  Thread_Manager.h
  Thread_Manager.inl
  Thread_Mutex.h
  Thread_Mutex.inl
  Thread_Semaphore.h
  Thread_Semaphore.inl
  Throughput_Stats.h
  Time_Policy.h
  Time_Policy.inl
  Time_Policy_T.cpp
  Time_Policy_T.h
  Time_Policy_T.inl
  Time_Value.h
  Time_Value.inl
  Time_Value_T.h
  Time_Value_T.inl
  Time_Value_T.cpp
  Timeprobe.h
  Timeprobe.inl
  Timeprobe_T.cpp
  Timeprobe_T.h
  Timer_Hash.h
  Timer_Hash_T.cpp
  Timer_Hash_T.h
  Timer_Heap.h
  Timer_Heap_T.cpp
  Timer_Heap_T.h
  Timer_List.h
  Timer_List_T.cpp
  Timer_List_T.h
  Timer_Queue.h
  Timer_Queue_Adapters.cpp
  Timer_Queue_Adapters.h
  Timer_Queue_Adapters.inl
  Timer_Queue_Iterator.cpp
  Timer_Queue_Iterator.h
  Timer_Queue_Iterator.inl
  Timer_Queue_T.cpp
  Timer_Queue_T.h
  Timer_Queue_T.inl
  Timer_Queuefwd.h
  Timer_Wheel.h
  Timer_Wheel_T.cpp
  Timer_Wheel_T.h
  Token.h
  Token.inl
  Token_Collection.h
  Token_Collection.inl
  Token_Invariants.h
  Token_Manager.h
  Token_Manager.inl
  Token_Request_Reply.h
  Token_Request_Reply.inl
  Tokenizer_T.cpp
  Tokenizer_T.h
  Trace.h
  Truncate.h
  Typed_SV_Message.cpp
  Typed_SV_Message.h
  Typed_SV_Message.inl
  Typed_SV_Message_Queue.cpp
  Typed_SV_Message_Queue.h
  Typed_SV_Message_Queue.inl
  UNIX_Addr.h
  UNIX_Addr.inl
  UPIPE_Acceptor.h
  UPIPE_Acceptor.inl
  UPIPE_Addr.h
  UPIPE_Connector.h
  UPIPE_Connector.inl
  UPIPE_Stream.h
  UPIPE_Stream.inl
  UTF16_Encoding_Converter.h
  UTF16_Encoding_Converter.inl
  UTF32_Encoding_Converter.h
  UTF8_Encoding_Converter.h
  UUID.h
  UUID.inl
  Unbounded_Queue.cpp
  Unbounded_Queue.h
  Unbounded_Queue.inl
  Unbounded_Set.cpp
  Unbounded_Set.h
  Unbounded_Set.inl
  Unbounded_Set_Ex.cpp
  Unbounded_Set_Ex.h
  Unbounded_Set_Ex.inl
  Value_Ptr.h
  Vector_T.cpp
  Vector_T.h
  Vector_T.inl
  Version.h
  Versioned_Namespace.h
  WFMO_Reactor.h
  WFMO_Reactor.inl
  WIN32_Asynch_IO.h
  WIN32_Proactor.h
  XML_Svc_Conf.h
  XTI_ATM_Mcast.h
  XTI_ATM_Mcast.inl
  ace_wchar.h
  ace_wchar.inl
  checked_iterator.h
#  config-WinCE.h
#  config-aix-5.x.h
#  config-aix-7.h
  config-all.h
  config-android.h
  config-cygwin32.h
  config-freebsd.h
  config-g++-common.h
  config-hpux-11.00.h
  config-icc-common.h
  config-integritySCA.h
  config-kfreebsd.h
  config-linux.h
  config-lite.h
  config-lynxos.h
  config-macosx-iOS-hardware.h
  config-macosx-iOS-simulator.h
  config-macosx-leopard.h
  config-macosx-lion.h
  config-macosx-panther.h
  config-macosx-snowleopard.h
  config-macosx-tiger.h
  config-macosx.h
  config-macros.h
  config-netbsd.h
  config-openbsd.h
  config-openvms.h
  config-pharlap.h
  config-posix-nonetworking.h
  config-posix.h
  config-qnx.h
  config-rtems.h
#  config-suncc-common.h
#  config-sunos5.10.h
#  config-sunos5.11.h
#  config-sunos5.4-g++.h
#  config-sunos5.4-sunc++-4.x.h
#  config-sunos5.5.h
#  config-sunos5.6.h
#  config-sunos5.7.h
#  config-sunos5.8.h
#  config-sunos5.9.h
#  config-tandem-nsk-mips-v2.h
#  config-tandem-nsk-mips-v3.h
#  config-vxworks.h
#  config-vxworks6.4.h
#  config-vxworks6.5.h
#  config-vxworks6.6.h
#  config-vxworks6.7.h
#  config-vxworks6.8.h
#  config-vxworks6.9.h
  config-win32-cegcc.h
  config-win32-common.h
  config-win32-dmc.h
  config-win32-interix.h
  config-win32-mingw.h
  config-win32-msvc-10.h
  config-win32-msvc-7.h
  config-win32-msvc-8.h
  config-win32-msvc-9.h
  config-win32-msvc.h
  config-win32.h
  config-windows.h
  config.h
  iosfwd.h
  post.h
  pre.h
  streams.h
  svc_export.h
)

ADD_DEFINITIONS(-DACE_BUILD_DLL -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1)
ADD_LIBRARY(ACE SHARED ${libACE_la_SOURCES})

install(TARGETS ACE
        RUNTIME DESTINATION lib
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
)
install(FILES ${ACE_include_HEADERS} DESTINATION include/ace)
install(DIRECTORY os_include DESTINATION include/ace)

IF(WIN32)
    TARGET_LINK_LIBRARIES(ACE ws2_32 mswsock netapi32 iphlpapi)
ENDIF()
IF(UNIX)
    TARGET_LINK_LIBRARIES(ACE pthread rt dl)
ENDIF()
