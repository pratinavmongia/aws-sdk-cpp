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

#include <aws/medialive/model/InputDeviceConfiguredInput.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace InputDeviceConfiguredInputMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int HDMI_HASH = HashingUtils::HashString("HDMI");
        static const int SDI_HASH = HashingUtils::HashString("SDI");


        InputDeviceConfiguredInput GetInputDeviceConfiguredInputForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return InputDeviceConfiguredInput::AUTO;
          }
          else if (hashCode == HDMI_HASH)
          {
            return InputDeviceConfiguredInput::HDMI;
          }
          else if (hashCode == SDI_HASH)
          {
            return InputDeviceConfiguredInput::SDI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceConfiguredInput>(hashCode);
          }

          return InputDeviceConfiguredInput::NOT_SET;
        }

        Aws::String GetNameForInputDeviceConfiguredInput(InputDeviceConfiguredInput enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceConfiguredInput::AUTO:
            return "AUTO";
          case InputDeviceConfiguredInput::HDMI:
            return "HDMI";
          case InputDeviceConfiguredInput::SDI:
            return "SDI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceConfiguredInputMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
