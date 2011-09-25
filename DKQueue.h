//
//  DKQueue.h
//  ProCalc
//
//  Created by Dominik Krejčík on 25/09/2011.
//  Copyright 2011 Gymnázium Ledeč nad Sázavou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DKQueue : NSObject {
    NSMutableArray* array;
}

- (void)pop;
- (void)push:(id)element;
- (void)clear;

- (id)front;
- (BOOL)isEmpty;
- (NSInteger)size;

@end
