//
//  NSString+AES256.h
//  test
//
//  Created by leying on 16/2/15.
//  Copyright (c) 2016年 leying. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (AES256)
-(NSString *) aes256_encrypt:(NSString *)key;
-(NSString *) aes256_decrypt:(NSString *)key;
@end
