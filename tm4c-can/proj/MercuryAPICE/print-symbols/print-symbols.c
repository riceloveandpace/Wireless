
    printf("%s %s\n",
#ifdef __cplusplus
           "D"
#else
           "u"
#endif
           , "__cplusplus"
           );

    printf("%s %s\n",
#ifdef _TM_READER_H
           "D"
#else
           "u"
#endif
           , "_TM_READER_H"
           );

    printf("%s %s\n",
#ifdef DOXYGEN_IGNORE
           "D"
#else
           "u"
#endif
           , "DOXYGEN_IGNORE"
           );

    printf("%s %s\n",
#ifdef SINGLE_THREAD_ASYNC_READ
           "D"
#else
           "u"
#endif
           , "SINGLE_THREAD_ASYNC_READ"
           );

    printf("%s %s\n",
#ifdef TMR_ENABLE_BACKGROUND_READS
           "D"
#else
           "u"
#endif
           , "TMR_ENABLE_BACKGROUND_READS"
           );

    printf("%s %s\n",
#ifdef TMR_ENABLE_JNI_SERIAL_READER_ONLY
           "D"
#else
           "u"
#endif
           , "TMR_ENABLE_JNI_SERIAL_READER_ONLY"
           );

    printf("%s %s\n",
#ifdef TMR_ENABLE_LLRP_READER
           "D"
#else
           "u"
#endif
           , "TMR_ENABLE_LLRP_READER"
           );

    printf("%s %s\n",
#ifdef TMR_ENABLE_LLRP_TRANSPORT
           "D"
#else
           "u"
#endif
           , "TMR_ENABLE_LLRP_TRANSPORT"
           );

    printf("%s %s\n",
#ifdef TMR_ENABLE_SERIAL_READER_ONLY
           "D"
#else
           "u"
#endif
           , "TMR_ENABLE_SERIAL_READER_ONLY"
           );

    printf("%s %s\n",
#ifdef WIN32
           "D"
#else
           "u"
#endif
           , "WIN32"
           );

    printf("%s %s\n",
#ifdef WINCE
           "D"
#else
           "u"
#endif
           , "WINCE"
           );
