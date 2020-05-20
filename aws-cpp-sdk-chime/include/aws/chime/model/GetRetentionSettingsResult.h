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

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/RetentionSettings.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API GetRetentionSettingsResult
  {
  public:
    GetRetentionSettingsResult();
    GetRetentionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRetentionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retention settings.</p>
     */
    inline const RetentionSettings& GetRetentionSettings() const{ return m_retentionSettings; }

    /**
     * <p>The retention settings.</p>
     */
    inline void SetRetentionSettings(const RetentionSettings& value) { m_retentionSettings = value; }

    /**
     * <p>The retention settings.</p>
     */
    inline void SetRetentionSettings(RetentionSettings&& value) { m_retentionSettings = std::move(value); }

    /**
     * <p>The retention settings.</p>
     */
    inline GetRetentionSettingsResult& WithRetentionSettings(const RetentionSettings& value) { SetRetentionSettings(value); return *this;}

    /**
     * <p>The retention settings.</p>
     */
    inline GetRetentionSettingsResult& WithRetentionSettings(RetentionSettings&& value) { SetRetentionSettings(std::move(value)); return *this;}


    /**
     * <p>The timestamp representing the time at which the specified items are
     * permanently deleted, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiateDeletionTimestamp() const{ return m_initiateDeletionTimestamp; }

    /**
     * <p>The timestamp representing the time at which the specified items are
     * permanently deleted, in ISO 8601 format.</p>
     */
    inline void SetInitiateDeletionTimestamp(const Aws::Utils::DateTime& value) { m_initiateDeletionTimestamp = value; }

    /**
     * <p>The timestamp representing the time at which the specified items are
     * permanently deleted, in ISO 8601 format.</p>
     */
    inline void SetInitiateDeletionTimestamp(Aws::Utils::DateTime&& value) { m_initiateDeletionTimestamp = std::move(value); }

    /**
     * <p>The timestamp representing the time at which the specified items are
     * permanently deleted, in ISO 8601 format.</p>
     */
    inline GetRetentionSettingsResult& WithInitiateDeletionTimestamp(const Aws::Utils::DateTime& value) { SetInitiateDeletionTimestamp(value); return *this;}

    /**
     * <p>The timestamp representing the time at which the specified items are
     * permanently deleted, in ISO 8601 format.</p>
     */
    inline GetRetentionSettingsResult& WithInitiateDeletionTimestamp(Aws::Utils::DateTime&& value) { SetInitiateDeletionTimestamp(std::move(value)); return *this;}

  private:

    RetentionSettings m_retentionSettings;

    Aws::Utils::DateTime m_initiateDeletionTimestamp;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
