//
// Created by Bruno Wernimont on 2012
// Copyright 2012 BWObjectMapping
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

typedef id(^BWObjectMappingValueBlock)(id value, id object);

typedef id(^BWObjectMappingObjectBlock)(Class objectClass, NSString *primaryKey, id primaryKeyValue, id JSON, id userInfo);

typedef void(^BWObjectMappingObjectDidMapObjectBlock)(id object);

typedef id(^BWObjectRelationMappingValueBlock)(id object);

typedef void(^BWObjectMappingCompletionBlock)(id object, id JSON);