//
//  DWCapacityQueue.m
//  drawme
//
//  Created by WuJieson on 16/7/22.
//  Copyright © 2016年 Ge. All rights reserved.
//

#import "DWCapacityQueue.h"

@implementation DWCapacityQueue

-(instancetype)initWithCapacity:(NSInteger)numItems
{
    self = [super init];
    if (self) {
        _capacity = numItems;
        array = [NSMutableArray arrayWithCapacity:numItems];
    }
    return self;
}

-(void)enqueue:(id)element
{
    if ([array count] == _capacity) {
        [self dequeue];
    }
    [array addObject:element];
}

-(void)enqueueElementsFromArray:(NSArray*)arr
{
    [array addObjectsFromArray:arr];
    while ([array count] > _capacity) {
        [self dequeue];
    }
}

-(void)enqueueElementsFromQueue:(DKQueue*)queue
{
    while (![queue isEmpty]) {
        [self enqueue:[queue dequeue]];
    }
}


@end
