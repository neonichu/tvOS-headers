//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct SSLContext;

struct _ipp_attribute_s;

struct _ipp_s {
    int _field1;
    union _ipp_request_u {
        CDStruct_2892ad96 _field1;
        CDStruct_2892ad96 _field2;
        CDStruct_2892ad96 _field3;
        CDStruct_2892ad96 _field4;
    } _field2;
    struct _ipp_attribute_s *_field3;
    struct _ipp_attribute_s *_field4;
    struct _ipp_attribute_s *_field5;
    int _field6;
    struct _ipp_attribute_s *_field7;
    int _field8;
    int _field9;
    int _field10;
};

struct fd_set;

struct http_addrlist_s;

struct in_addr {
    unsigned int _field1;
};

struct internal_state;

struct pwg_map_s {
    char *_field1;
    char *_field2;
};

struct pwg_size_s {
    struct pwg_map_s _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct z_stream_s {
    char *_field1;
    unsigned int _field2;
    unsigned long long _field3;
    char *_field4;
    unsigned int _field5;
    unsigned long long _field6;
    char *_field7;
    struct internal_state *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    void *_field11;
    int _field12;
    unsigned long long _field13;
    unsigned long long _field14;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1[2];
    int _field2;
    int _field3;
} CDStruct_2892ad96;

