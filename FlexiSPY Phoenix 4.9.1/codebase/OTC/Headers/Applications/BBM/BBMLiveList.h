/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "BBMContainer.h"

//#import "NSFastEnumeration-Protocol.h"

@class BBMContainerMatchingCriteria, BBMJSONMessage, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface BBMLiveList : NSObject //BBMContainer <NSFastEnumeration>
{
    unsigned int _count;
    NSMutableArray *_objects;
    BOOL _handlingCurrentRequest;
    int _bbmState;
    BBMContainerMatchingCriteria *_criteria;
    NSObject *_parent;
    NSString *_parentKey;
    NSMutableDictionary *_invalidItems;
    NSMutableArray *_receivedElements;
    NSMutableDictionary *_identifierCache;
    BBMJSONMessage *_request;
    NSString *_chunkType;
}

@property BOOL handlingCurrentRequest; // @synthesize handlingCurrentRequest=_handlingCurrentRequest;
@property(retain) NSString *chunkType; // @synthesize chunkType=_chunkType;
@property(retain, nonatomic) BBMJSONMessage *request; // @synthesize request=_request;
@property(retain) NSMutableDictionary *identifierCache; // @synthesize identifierCache=_identifierCache;
@property(retain) NSMutableArray *receivedElements; // @synthesize receivedElements=_receivedElements;
@property(retain) NSMutableDictionary *invalidItems; // @synthesize invalidItems=_invalidItems;
@property(retain) NSString *parentKey; // @synthesize parentKey=_parentKey;
//@property __weak NSObject *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) BBMContainerMatchingCriteria *criteria; // @synthesize criteria=_criteria;
@property(nonatomic) int bbmState; // @synthesize bbmState=_bbmState;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
//- (void).cxx_destruct;
- (id)objectWithIdentifier:(id)arg1;
- (BOOL)containsIdentifier:(id)arg1;
- (BOOL)isStateMissing;
- (BOOL)isStatePending;
- (BOOL)isStateCurrent;
@property(readonly, nonatomic) NSArray *observableArray;
@property(readonly, nonatomic) NSArray *array;
//- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)emitArrayChangeKVO;
@property(retain, nonatomic) NSMutableArray *objects;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (void)handleJSONMessage:(id)arg1 messageType:(id)arg2 listId:(id)arg3;
- (unsigned int)indexOfObjectWithKey:(id)arg1;
- (id)objectWithData:(id)arg1;
- (void)handleOverflow;
- (id)valueAtIndex:(unsigned int)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)buildIdentifierCache;
- (void)requestIfNecessary;
- (void)doCriteriaCheckOn:(id)arg1 in:(id)arg2;
- (BOOL)hasRequest;
- (void)dealloc;
- (id)initWithMasterModel:(id)arg1 andType:(id)arg2 inContainer:(id)arg3;
- (id)initWithMasterModel:(id)arg1 listID:(id)arg2 type:(id)arg3 inContainer:(id)arg4 containerKey:(id)arg5 criteria:(id)arg6;
- (id)initWithMasterModel:(id)arg1 listID:(id)arg2 type:(id)arg3 inContainer:(id)arg4 containerKey:(id)arg5;
- (id)initWithMasterModel:(id)arg1 listID:(id)arg2 type:(id)arg3 inContainer:(id)arg4;

@end

