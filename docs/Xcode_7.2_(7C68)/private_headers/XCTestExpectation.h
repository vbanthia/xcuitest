//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _XCTestExpectationImplementation;

@interface XCTestExpectation : NSObject
{
    id _internalImplementation;
}

+ (id)expectationForTestCase:(id)arg1 withDescription:(id)arg2;
- (id)_initForTestCase:(id)arg1 withDescription:(id)arg2;
- (void)cleanup;
- (void)dealloc;
- (id)description;
- (void)fulfill;
@property(readonly) _XCTestExpectationImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;

@end

