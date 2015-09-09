//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct _PSDImageInfo {
    unsigned int width;
    unsigned int height;
    unsigned short mode;
    unsigned short bitsPerSample;
    unsigned short samplesPerPixel;
    int isDrawable;
};

struct _renditionkeyfmt {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4[0];
};

struct _renditionkeytoken {
    unsigned short identifier;
    unsigned short value;
};

#pragma mark Typedef'd Structures

typedef struct {
    double top;
    double left;
    double bottom;
    double right;
} CDStruct_3c058996;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    char *_field1;
    char *_field2;
    struct _renditionkeytoken _field3[5];
    long long _field4;
    long long _field5;
    struct {
        char *_field1;
        char *_field2;
        long long _field3;
        unsigned long long _field4;
    } _field6[12];
} CDStruct_26b2aa83;

typedef struct {
    struct CGSize _field1;
    struct CGSize _field2;
    struct CGSize _field3;
} CDStruct_1ba92a5e;

typedef struct {
    char *_field1;
    char *_field2;
    _Bool _field3;
    long long _field4;
    CDStruct_26b2aa83 _field5[7];
} CDStruct_e3362728;

