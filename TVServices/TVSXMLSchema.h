//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVSXMLSchema : NSObject
{
    struct _xmlSchema *_schema;
}

@property(nonatomic) struct _xmlSchema *schema; // @synthesize schema=_schema;
- (_Bool)validateElement:(id)arg1 error:(id *)arg2;
- (_Bool)validateDocument:(id)arg1 error:(id *)arg2;
- (_Bool)_validateWithError:(id *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithSchemaData:(id)arg1;

@end

