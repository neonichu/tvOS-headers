//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface RMTable : NSObject <NSFastEnumeration>
{
    NSMutableArray *_matrix;
    unsigned long long _elementCount;
    NSMutableArray *_rowFirstElements;
    NSMutableArray *_columnFirstElements;
    struct CGPDFLayout *_layout;
    struct CGPDFNode *_tableRoot;
    _Bool _rowOrder;
}

@property _Bool rowOrder; // @synthesize rowOrder=_rowOrder;
- (struct CGRect)bounds;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)columnAtIndex:(unsigned long long)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
- (unsigned long long)columns;
- (unsigned long long)rows;
@property(readonly) struct CGPDFPage *page; // @dynamic page;
- (struct CGPDFLayout *)layout;
- (void)dealloc;
- (void)matrixDealloc;
- (id)initWithRoot:(struct CGPDFNode *)arg1 layout:(struct CGPDFLayout *)arg2;
- (void)dump;

@end

