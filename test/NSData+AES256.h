//
//  NSData+AES256.h
//  test
//
//  Created by leying on 16/2/15.
//  Copyright (c) 2016年 leying. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (AES256)
- (NSData *)aes256_encrypt:(NSString *)key;   //加密
- (NSData *)aes256_decrypt:(NSString *)key;   //解密
@end
