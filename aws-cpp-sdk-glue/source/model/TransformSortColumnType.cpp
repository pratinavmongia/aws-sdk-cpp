﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/glue/model/TransformSortColumnType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace TransformSortColumnTypeMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int TRANSFORM_TYPE_HASH = HashingUtils::HashString("TRANSFORM_TYPE");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int LAST_MODIFIED_HASH = HashingUtils::HashString("LAST_MODIFIED");


        TransformSortColumnType GetTransformSortColumnTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return TransformSortColumnType::NAME;
          }
          else if (hashCode == TRANSFORM_TYPE_HASH)
          {
            return TransformSortColumnType::TRANSFORM_TYPE;
          }
          else if (hashCode == STATUS_HASH)
          {
            return TransformSortColumnType::STATUS;
          }
          else if (hashCode == CREATED_HASH)
          {
            return TransformSortColumnType::CREATED;
          }
          else if (hashCode == LAST_MODIFIED_HASH)
          {
            return TransformSortColumnType::LAST_MODIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformSortColumnType>(hashCode);
          }

          return TransformSortColumnType::NOT_SET;
        }

        Aws::String GetNameForTransformSortColumnType(TransformSortColumnType enumValue)
        {
          switch(enumValue)
          {
          case TransformSortColumnType::NAME:
            return "NAME";
          case TransformSortColumnType::TRANSFORM_TYPE:
            return "TRANSFORM_TYPE";
          case TransformSortColumnType::STATUS:
            return "STATUS";
          case TransformSortColumnType::CREATED:
            return "CREATED";
          case TransformSortColumnType::LAST_MODIFIED:
            return "LAST_MODIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransformSortColumnTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
