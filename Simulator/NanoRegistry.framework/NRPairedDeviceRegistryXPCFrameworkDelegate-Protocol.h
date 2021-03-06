//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRPropertyXPCFrameworkDelegate.h"

@class NRDevice, NSData, NSError, NSNumber, NSUUID;

@protocol NRPairedDeviceRegistryXPCFrameworkDelegate <NRPropertyXPCFrameworkDelegate>
- (void)xpcLastUnpairReasonDidChange:(unsigned long long)arg1;
- (void)xpcDidReceiveBTPairingRequest:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcCompatibilityStateDidChange:(unsigned short)arg1 withDevice:(NRDevice *)arg2 andDeviceID:(NSUUID *)arg3;
- (void)xpcRemoteUnpairingDidBegin;
- (void)xpcHasNewOOBKey:(NSData *)arg1;
- (void)xpcDeviceNeedsActivation:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcDevice:(NRDevice *)arg1 deviceID:(NSUUID *)arg2 needsPasscode:(NSNumber *)arg3;
- (void)xpcStatusDidChange:(unsigned long long)arg1;
- (void)xpcDidBeginPairing:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcCreateDevice:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcDeviceDidUnpair:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcDeviceIDDidFailToPair:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)xpcDeviceDidPair:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
@end

