//
//  DWCapacityQueue.h
//  drawme
//
//  Created by WuJieson on 16/7/22.
//  Copyright © 2016年 Ge. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DKQueue.h"

@interface DWCapacityQueue : DKQueue

@property (nonatomic, assign) NSUInteger capacity;

-(instancetype)initWithCapacity:(NSInteger)numItems;

// Remove all elements
-(void)enqueueElementsFromArray:(NSArray*)arr;
-(void)enqueueElementsFromQueue:(DKQueue*)queue;

@end
