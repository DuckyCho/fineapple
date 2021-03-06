//
//  timelineTabButton.h
//  NEXT_Library
//
//  Created by Ducky on 2014. 12. 21..
//  Copyright (c) 2014년 FineApple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "publicSetting.h"

#define INACTIVE 0
#define ACTIVE 1
#define INACTIVE_COLOR 0xB3B3B3
#define ACTIVE_COLOR 0xEF4089

@interface timelineTabButton : UIButton


{
@private
    int status;
}

-(void)setStatus:(int)newStatus;
-(void)registerNotiCenter;
-(void)touched:(timelineTabButton *)touchedButton;
-(void)tabButtonTouched;
-(int)getStatus;
@end
