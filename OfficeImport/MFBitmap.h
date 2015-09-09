//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface MFBitmap : NSObject
{
    int m_width;
    int m_height;
    unsigned int m_bitsPerPixel;
    int m_compression;
    _Bool m_isOS2;
    unsigned int m_infoHeaderSize;
    unsigned int m_paletteSize;
    NSMutableData *m_bmpData;
}

- (_Bool)isEmpty;
- (void)setMonoPalette:(id)arg1;
- (void)dealloc;
- (id)initWithBitmap:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(const char *)arg6:(unsigned int)arg7;
- (id)initWithDIBitmap:(id)arg1:(const char *)arg2:(unsigned int)arg3:(const char *)arg4:(unsigned int)arg5:(int)arg6;
- (id)initWithDIBitmap:(id)arg1:(const char *)arg2:(unsigned int)arg3:(int)arg4;
- (id)init;
- (_Bool)processDIBHeader:(id)arg1:(const char *)arg2:(unsigned int)arg3:(int)arg4;
- (void)appendDIBPalette:(id)arg1:(const char *)arg2:(unsigned int)arg3:(int)arg4;
- (unsigned int)pixelDataOffset:(const char *)arg1:(unsigned int)arg2:(int)arg3;
- (unsigned int)coloursUsed:(const char *)arg1:(unsigned int)arg2:(int)arg3;
- (void)setNull;
- (void)writeInfoHeader;
- (void)writeFileHeader;
- (void)writePaletteEntry:(id)arg1:(int)arg2;
- (_Bool)parseHeader:(const char *)arg1:(unsigned int)arg2;

@end

