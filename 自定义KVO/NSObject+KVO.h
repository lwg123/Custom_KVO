//
//  NSObject+KVO.h
//  自定义KVO
//
//  Created by weiguang on 2018/3/11.
//  Copyright © 2018年 weiguang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^PGObservingBlock)(id observedObject,NSString *observedKey,id oldValue,id newValue);

@interface NSObject (KVO)

- (void)PG_addObserver:(NSObject *)observer
                forKey:(NSString *)key
             withBlock:(PGObservingBlock)block;

- (void)PG_removeObserver:(NSObject *)observer forKey:(NSString *)key;

@end
