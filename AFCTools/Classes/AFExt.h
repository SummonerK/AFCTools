//
//  AFExt.h
//  AFCom
//
//  Created by Lofi on 2020/12/4.
//  Copyright © 2020 Lofi. All rights reserved.
//

#ifndef AFExt_h
#define AFExt_h

#define IBWeakSelf __weak __typeof__(self) weakSelf = self;


#define AF_SCREEN_W ([[UIScreen mainScreen] bounds].size.width)
#define AF_SCREEN_H ([[UIScreen mainScreen] bounds].size.height)

// log
#ifdef DEBUG
#define AFLog(format, ...) printf("\n[%s] %s [第%d行] %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#else
#define AFLog(format, ...)
#endif

#endif /* AFExt_h */
