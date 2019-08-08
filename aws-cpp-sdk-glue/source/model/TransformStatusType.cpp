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

#include <aws/glue/model/TransformStatusType.h>
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
      namespace TransformStatusTypeMapper
      {

        static const int NOT_READY_HASH = HashingUtils::HashString("NOT_READY");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        TransformStatusType GetTransformStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_READY_HASH)
          {
            return TransformStatusType::NOT_READY;
          }
          else if (hashCode == READY_HASH)
          {
            return TransformStatusType::READY;
          }
          else if (hashCode == DELETING_HASH)
          {
            return TransformStatusType::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformStatusType>(hashCode);
          }

          return TransformStatusType::NOT_SET;
        }

        Aws::String GetNameForTransformStatusType(TransformStatusType enumValue)
        {
          switch(enumValue)
          {
          case TransformStatusType::NOT_READY:
            return "NOT_READY";
          case TransformStatusType::READY:
            return "READY";
          case TransformStatusType::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransformStatusTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
