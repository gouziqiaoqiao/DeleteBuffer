//
//  BufferFile.h
//  BufferFile
//
//  Created by 王钧 on 16/6/27.
//  Copyright (c) 2016年 gouzi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BufferFile : NSObject

/**
 *  获取文件夹尺寸
 *
 *  @param directoryPath 文件夹路径
 *
 *  @return 返回文件夹尺寸
 */
+ (void)getFileSize:(NSString *)directoryPath completion:(void(^)(NSInteger totalSize))completion;

/**
 *  删除文件夹所有文件
 *
 *  @param directoryPath 文件夹路径
 */
+ (void)removeDirectoryPath:(NSString *)directoryPath;


@end
