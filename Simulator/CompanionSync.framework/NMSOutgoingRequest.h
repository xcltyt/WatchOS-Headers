//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMSObfuscatableDescriptionProviding.h"

@class NMSMessageCenter, NSData, NSDictionary, NSString;

@interface NMSOutgoingRequest : NSObject <NMSObfuscatableDescriptionProviding>
{
    _Bool _shouldEncrypt;
    unsigned short _messageID;
    NSData *_data;
    NSString *_idsIdentifier;
    unsigned long long _priority;
    double _sendTimeout;
    double _responseTimeout;
    NSDictionary *_persistentUserInfo;
    NSDictionary *_extraIDSOptions;
    NMSMessageCenter *_messageCenter;
    id _pbRequest;
}

+ (id)requestWithMessageID:(unsigned short)arg1;
@property(retain, nonatomic) id pbRequest; // @synthesize pbRequest=_pbRequest;
@property(nonatomic) __weak NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) NSDictionary *extraIDSOptions; // @synthesize extraIDSOptions=_extraIDSOptions;
@property(retain, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
@property(nonatomic) _Bool shouldEncrypt; // @synthesize shouldEncrypt=_shouldEncrypt;
@property(nonatomic) double responseTimeout; // @synthesize responseTimeout=_responseTimeout;
@property(nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

