//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ObjCBridgeClass : NSObject
{
    struct OpaqueJSClass *classRef;
    NSMutableDictionary *methodMapping;
    NSMutableDictionary *propertyMapping;
}

@property(retain, nonatomic) NSMutableDictionary *propertyMapping; // @synthesize propertyMapping;
@property(retain, nonatomic) NSMutableDictionary *methodMapping; // @synthesize methodMapping;
@property(nonatomic) struct OpaqueJSClass *classRef; // @synthesize classRef;
- (struct objc_method **)methodForJSFunction:(id)arg1;
- (void)setMethod:(struct objc_method **)arg1 forJSFunction:(id)arg2;
- (void)dealloc;
- (id)initWithClassRef:(struct OpaqueJSClass *)arg1;

@end

