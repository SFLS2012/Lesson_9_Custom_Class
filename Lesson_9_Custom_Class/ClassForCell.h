//
//  ClassForCell.h
//  Lesson_9_Custom_Class
//
//  Created by 朱 皓斌 on 12-12-4.
//  Copyright (c) 2012年 朱 皓斌. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ClassForCell : NSObject{
    NSString *title;
    NSString *subTitle;
    UIImage *image;
}
@property(nonatomic,retain)NSString *title;
@property(nonatomic,retain)NSString *subTitle;
@property(nonatomic,retain)UIImage *image;
@end
