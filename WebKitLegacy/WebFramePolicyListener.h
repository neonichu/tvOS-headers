//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebFormSubmissionListener-Protocol.h>
#import <WebKitLegacy/WebPolicyDecisionListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener>
{
    struct RefPtr<WebCore::Frame> _frame;
    struct function<void (WebCore::PolicyAction)> _policyFunction;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)continue;
- (void)use;
- (void)download;
- (void)ignore;
- (void)receivedPolicyDecision:(int)arg1;
- (void)dealloc;
- (void)invalidate;
-     // Error parsing type: @72@0:8^{Frame=^^?{atomic<int>=Ai}{HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >={HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> >=^^{FrameDestructionObserver}IIII}}^{MainFrame}^{Page}{RefPtr<WebCore::Settings>=^{Settings}}{FrameTree=^{Frame}^{Frame}{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{RefPtr<WebCore::Frame>=^{Frame}}^{Frame}{RefPtr<WebCore::Frame>=^{Frame}}^{Frame}I}{FrameLoader=^{Frame}^{FrameLoaderClient}{unique_ptr<WebCore::PolicyChecker, std::__1::default_delete<WebCore::PolicyChecker> >={__compressed_pair<WebCore::PolicyChecker *, std::__1::default_delete<WebCore::PolicyChecker> >=^{PolicyChecker}}}{unique_ptr<WebCore::HistoryController, std::__1::default_delete<WebCore::HistoryController> >={__compressed_pair<WebCore::HistoryController *, std::__1::default_delete<WebCore::HistoryController> >=^{HistoryController}}}{ResourceLoadNotifier=^{Frame}}{unique_ptr<WebCore::SubframeLoader, std::__1::default_delete<WebCore::SubframeLoader> >={__compressed_pair<WebCore::SubframeLoader *, std::__1::default_delete<WebCore::SubframeLoader> >=^{SubframeLoader}}}{FrameLoaderStateMachine=i}{unique_ptr<WebCore::IconController, std::__1::default_delete<WebCore::IconController> >={__compressed_pair<WebCore::IconController *, std::__1::default_delete<WebCore::IconController> >=^{IconController}}}{MixedContentChecker=^{Frame}}{unique_ptr<WebCore::FrameLoader::FrameProgressTracker, std::__1::default_delete<WebCore::FrameLoader::FrameProgressTracker> >={__compressed_pair<WebCore::FrameLoader::FrameProgressTracker *, std::__1::default_delete<WebCore::FrameLoader::FrameProgressTracker> >=^{FrameProgressTracker}}}ii{RefPtr<WebCore::DocumentLoader>=^{DocumentLoader}}{RefPtr<WebCore::DocumentLoader>=^{DocumentLoader}}{RefPtr<WebCore::DocumentLoader>=^{DocumentLoader}}{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}BBB{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}BBBiB{RefPtr<WebCore::SerializedScriptValue>=^{SerializedScriptValue}}B{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{Timer=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16>}{function<void ()>={type=[24C]}^{__base<void ()>}}}BB^{Frame}{HashSet<WebCore::Frame *, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> >={HashTable<WebCore::Frame *, WebCore::Frame *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *>, WTF::HashTraits<WebCore::Frame *> >=^^{Frame}IIII}}BBBi{RefPtr<WebCore::FrameNetworkingContext>=^{FrameNetworkingContext}}{Optional<WebCore::ResourceRequestCachePolicy>=B{type=[4C]}}{Optional<WebCore::ResourceLoadPriority>=B{type=[4C]}}{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{RefPtr<WebCore::HistoryItem>=^{HistoryItem}}{Token<WebCore::PageActivityAssertionTokenType>={RefPtr<WTF::RefCounter::Count>=^{Count}}}}{NavigationScheduler=^{Frame}{Timer=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{unique_ptr<WebCore::ScheduledNavigation, std::__1::default_delete<WebCore::ScheduledNavigation> >={__compressed_pair<WebCore::ScheduledNavigation *, std::__1::default_delete<WebCore::ScheduledNavigation> >=^{ScheduledNavigation}}}}^{HTMLFrameOwnerElement}{RefPtr<WebCore::FrameView>=^{FrameView}}{RefPtr<WebCore::Document>=^{Document}}{unique_ptr<WebCore::ScriptController, std::__1::default_delete<WebCore::ScriptController> >={__compressed_pair<WebCore::ScriptController *, std::__1::default_delete<WebCore::ScriptController> >=^{ScriptController}}}{unique_ptr<WebCore::Editor, std::__1::default_delete<WebCore::Editor> >={__compressed_pair<WebCore::Editor *, std::__1::default_delete<WebCore::Editor> >=^{Editor}}}{unique_ptr<WebCore::FrameSelection, std::__1::default_delete<WebCore::FrameSelection> >={__compressed_pair<WebCore::FrameSelection *, std::__1::default_delete<WebCore::FrameSelection> >=^{FrameSelection}}}{unique_ptr<WebCore::EventHandler, std::__1::default_delete<WebCore::EventHandler> >={__compressed_pair<WebCore::EventHandler *, std::__1::default_delete<WebCore::EventHandler> >=^{EventHandler}}}{unique_ptr<WebCore::AnimationController, std::__1::default_delete<WebCore::AnimationController> >={__compressed_pair<WebCore::AnimationController *, std::__1::default_delete<WebCore::AnimationController> >=^{AnimationController}}}{Timer=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow, 16>}{function<void ()>={type=[24C]}^{__base<void ()>}}}f{IntPoint=ii}{ViewportArguments=iffffffffffff}Bi{VisibleSelection={Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}iib1b1}{VisibleSelection={Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}{Position={RefPtr<WebCore::Node>=^{Node}}ib3b1}iib1b1}ffi}16{function<void (WebCore::PolicyAction)>={type=[24C]}^{__base<void (WebCore::PolicyAction)>}}24, name: initWithFrame:policyFunction:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

