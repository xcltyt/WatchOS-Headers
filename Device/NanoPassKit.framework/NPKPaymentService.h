//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NPKPaymentServiceClientProtocol.h"

@class NSPointerArray, NSString, NSXPCConnection;

@interface NPKPaymentService : NSObject <NPKPaymentServiceClientProtocol>
{
    BOOL _requestsPaymentSessions;
    id <NPKPaymentServiceDelegate> _delegate;
    NSXPCConnection *_xpcConnection;
    int _fieldDetectReferenceCount;
    NSPointerArray *_transientPassAssertions;
}

+ (id)paymentGlobalConcurrentQueue;
- (id)initWithDelegate:(id)arg1;
- (void)markAllPaymentApplicationsForDelete;
@property(retain, nonatomic) NSPointerArray *transientPassAssertions; // @synthesize transientPassAssertions=_transientPassAssertions;
@property(nonatomic) BOOL requestsPaymentSessions; // @synthesize requestsPaymentSessions=_requestsPaymentSessions;
- (void)removalPendingForPass:(id)arg1;
- (void)getDefaultPaymentPassUniqueIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDefaultPaymentPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_requestFieldDetectActive:(BOOL)arg1;
@property(nonatomic) int fieldDetectReferenceCount; // @synthesize fieldDetectReferenceCount=_fieldDetectReferenceCount;
- (void)_setTransientPaymentCard:(id)arg1;
- (void)_requestPaymentSessions:(BOOL)arg1;
- (void)_checkTransientPassAssertionState;
- (void)_resyncState;
- (void)paymentDeviceNoLongerBusy;
- (void)paymentRequestedWhileDeviceBusy;
- (void)paymentNoLongerRestricted;
- (void)paymentRequestedWhileRestricted;
- (void)paymentRequestedWithNoPaymentPasses;
- (void)transactionFailedForPaymentCard:(id)arg1;
- (void)transactionCompletedForPaymentCard:(id)arg1;
- (void)paymentSessionDidBeginWithEndpoint:(id)arg1 paymentCard:(id)arg2;
- (void)fieldDetected:(BOOL)arg1 cardEmulationEnabled:(BOOL)arg2;
- (void)setupNewUser;
- (void)stopFieldDetect;
- (void)startFieldDetect;
- (void)removeTransientPassAssertion:(id)arg1;
- (void)addTransientPassAssertion:(id)arg1;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)invalidate;
@property __weak id <NPKPaymentServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
