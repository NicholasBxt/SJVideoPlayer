//
//  SJSQLiteColumnInfo.h
//  Pods-SJSQLite3_Example
//
//  Created by 畅三江 on 2019/7/26.
//  Copyright © 2019 changsanjiang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface SJSQLiteColumnInfo : NSObject<NSCopying>
///
/// e.g. ID
///
@property (nonatomic, copy, nullable) NSString *name;

///
/// e.g. INTEGER
///
@property (nonatomic, copy, nullable) NSString *type;

///
/// e.g. PRIMARY KEY NOT NULL
///
@property (nonatomic, copy, nullable) NSString *constraints;

@property (nonatomic) BOOL isArrayJSONText;
@property (nonatomic) BOOL isPrimaryKey;
@property (nonatomic) BOOL isAutoincrement;
//@property (nonatomic) BOOL notNull;
//@property (nonatomic) BOOL unique;
//@property (nonatomic) BOOL foreignKey;
//@property (nonatomic, copy, nullable) NSString *references;
//// check
//// default
//// collate
@end

NS_ASSUME_NONNULL_END
