//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSMutableArray, NSMutableSet;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSObject {
    Class _field1;
};

struct PLImageTableEntryFooter_s {
    struct {
        unsigned char _field1;
        unsigned char _field2;
        unsigned char _field3;
        unsigned char _field4;
        unsigned char _field5;
        unsigned char _field6;
        unsigned char _field7;
        unsigned char _field8;
        unsigned char _field9;
        unsigned char _field10;
        unsigned char _field11;
        unsigned char _field12;
        unsigned char _field13;
        unsigned char _field14;
        unsigned char _field15;
        unsigned char _field16;
    } _field1;
    unsigned int _field2;
    unsigned int _field3;
    int _field4;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct changeList_s {
    NSMutableSet *inserted;
    NSMutableSet *updated;
    NSMutableSet *deleted;
};

struct contentChanges_s {
    NSMutableArray *container;
    NSMutableArray *updatedContent;
};

struct flock {
    long long _field1;
    long long _field2;
    int _field3;
    short _field4;
    short _field5;
};

struct tokenOutput_t {
    id _field1;
    id _field2;
    id _field3;
    CDStruct_183601bc *_field4;
    long long _field5;
    long long _field6;
    CDStruct_183601bc *_field7;
    long long _field8;
    long long _field9;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    id _field4;
    id _field5;
} CDStruct_af20e25b;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    int retries;
    int state;
} CDStruct_691a9b3b;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct CDStruct_183601bc;

typedef struct {
    int _field1;
    struct CGSize _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    unsigned int _field5;
    int _field6;
    int _field7;
    double _field8[4];
    double _field9[4];
    unsigned int _field10;
} CDStruct_0d559a47;

