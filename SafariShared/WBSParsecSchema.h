//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface WBSParsecSchema : NSObject
{
    _Bool _optional;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _specializedSchemaBlock;
    Class _expectedClass;
    NSError *_associatedError;
}

+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
+ (id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2;
+ (id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2;
+ (id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2;
@property(retain, nonatomic) NSError *associatedError; // @synthesize associatedError=_associatedError;
@property(retain, nonatomic) Class expectedClass; // @synthesize expectedClass=_expectedClass;
@property(nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(copy, nonatomic) CDUnknownBlockType specializedSchemaBlock; // @synthesize specializedSchemaBlock=_specializedSchemaBlock;
@property(copy, nonatomic) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;
- (void).cxx_destruct;
- (_Bool)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)validateObject:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (id)_initWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
- (_Bool)_test_validateObject:(id)arg1 error:(id *)arg2;
- (_Bool)test_rejectsObject:(id)arg1 withErrorCode:(long long)arg2;
- (_Bool)test_rejectsObject:(id)arg1 withError:(id)arg2;
- (_Bool)test_acceptsObject:(id)arg1;

@end

