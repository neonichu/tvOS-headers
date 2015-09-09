//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSFormMetadataController : NSObject
{
    struct HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>> _framesToMetadataMap;
}

+ (_Bool)convertNumber:(id)arg1 toFormMetadataRequestType:(unsigned long long *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldIncludeUnannotatedControls;
- (id)visibleNonEmptyTextFieldsInForm:(id)arg1 inFrame:(id)arg2;
- (id)formSubmissionURLStringForSearchTextField:(id)arg1 inFrame:(id)arg2 useStrictDetection:(_Bool)arg3;
- (id)formAutoFillNodeForField:(id)arg1 inFrame:(id)arg2;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (void)usernameFieldBlurredInFrame:(id)arg1;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)creditCardFieldBlurredInFrame:(id)arg1;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)passwordFieldBlurred:(id)arg1 inFrame:(id)arg2;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2;
- (id)formElementWithFormID:(double)arg1 inFrame:(id)arg2;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2;
- (void)willSendSubmitEventForForm:(id)arg1 inFrame:(id)arg2;
- (void)textFieldBlurred:(id)arg1 inFrame:(id)arg2;
- (void)textFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(_Bool)arg3;
- (_Bool)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)arg1;
- (void)recursivelyCountUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long *)arg2 textAreas:(unsigned long long *)arg3;
- (void)countUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long *)arg2 textAreas:(unsigned long long *)arg3;
- (unsigned long long)userEditedTextControlCountInArray:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 expectTextFieldsRatherThanTextAreas:(_Bool)arg3;
- (id)uniqueIDForTextField:(id)arg1 inFrame:(id)arg2;
- (void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id *)arg3 formMetadata:(id *)arg4 requestType:(unsigned long long)arg5;
- (void)_unlockMetadataForForm:(id)arg1 inFrame:(id)arg2;
- (void)_lockMetadataForForm:(id)arg1 inFrame:(id)arg2;
- (id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(unsigned long long)arg3;
- (struct OpaqueJSValue *)_jsObjectForForm:(id)arg1 inFrame:(id)arg2;
- (void)getMetadataForAllFormsInPageWithMainFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id *)arg3 formMetadata:(id *)arg4;
- (void)recursivelyCollectMetadataInFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id)arg3 formMetadata:(id)arg4;
- (struct FrameMetadata *)metadataForFrame:(id)arg1 requestType:(unsigned long long)arg2;
- (void)recursivelyClearMetadataForFrames:(id)arg1;
- (void)clearMetadataForFrame:(id)arg1;
- (_Bool)isFrameOrChildAnnotated:(id)arg1;
- (_Bool)isFrameAnnotated:(id)arg1;
- (void)replaceRange:(struct _NSRange)arg1 inField:(id)arg2 inFrame:(id)arg3 withString:(id)arg4 andSelectTailStartingAt:(unsigned long long)arg5;
- (void)selectRange:(struct _NSRange)arg1 inField:(id)arg2 inFrame:(id)arg3;
- (void)focusField:(id)arg1 inFrame:(id)arg2;
- (void)clearField:(id)arg1 inFrame:(id)arg2;
- (void)fillField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3;
- (void)setFormControls:(id)arg1 inFrame:(id)arg2 asAutoFilled:(_Bool)arg3;
- (void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(_Bool)arg3 setAutoFilled:(_Bool)arg4 selectFieldAfterFilling:(id)arg5;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2;
- (void)annotateForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)clearScriptWorld;
- (id)init;

@end

