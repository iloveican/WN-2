//
//  PromotionNode.h
//  WN
//
//  Created by 王尧 on 13-2-17.
//  Copyright (c) 2013年 BuildRun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PromotionNode : NSObject

@property (nonatomic, retain) NSString *content;
@property (nonatomic, retain) NSString *endDate;
@property (nonatomic, assign) int index;
@property (nonatomic, retain) NSString *intro;
@property (nonatomic, retain) NSString *picURL;
@property (nonatomic, retain) NSString *startDate;
@property (nonatomic, retain) NSString *title;

@end
