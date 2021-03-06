//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface NNMKProtoSendMessageRequest : PBRequest <NSCopying>
{
    NSString *_body;
    NSMutableArray *_ccs;
    NSString *_subject;
    NSMutableArray *_tos;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *ccs; // @synthesize ccs=_ccs;
@property(retain, nonatomic) NSMutableArray *tos; // @synthesize tos=_tos;
@property(readonly, nonatomic) BOOL hasBody;
@property(readonly, nonatomic) BOOL hasSubject;
- (id)ccAtIndex:(unsigned int)arg1;
- (void)clearCcs;
- (unsigned int)ccsCount;
- (id)toAtIndex:(unsigned int)arg1;
- (void)clearTos;
- (unsigned int)tosCount;
- (void)addCc:(id)arg1;
- (void)addTo:(id)arg1;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

