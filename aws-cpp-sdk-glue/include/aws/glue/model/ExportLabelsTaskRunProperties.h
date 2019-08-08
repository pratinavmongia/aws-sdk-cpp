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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies configuration properties for an exporting labels task
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ExportLabelsTaskRunProperties">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API ExportLabelsTaskRunProperties
  {
  public:
    ExportLabelsTaskRunProperties();
    ExportLabelsTaskRunProperties(Aws::Utils::Json::JsonView jsonValue);
    ExportLabelsTaskRunProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline const Aws::String& GetOutputS3Path() const{ return m_outputS3Path; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline bool OutputS3PathHasBeenSet() const { return m_outputS3PathHasBeenSet; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline void SetOutputS3Path(const Aws::String& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = value; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline void SetOutputS3Path(Aws::String&& value) { m_outputS3PathHasBeenSet = true; m_outputS3Path = std::move(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline void SetOutputS3Path(const char* value) { m_outputS3PathHasBeenSet = true; m_outputS3Path.assign(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline ExportLabelsTaskRunProperties& WithOutputS3Path(const Aws::String& value) { SetOutputS3Path(value); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline ExportLabelsTaskRunProperties& WithOutputS3Path(Aws::String&& value) { SetOutputS3Path(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where you will export the
     * labels.</p>
     */
    inline ExportLabelsTaskRunProperties& WithOutputS3Path(const char* value) { SetOutputS3Path(value); return *this;}

  private:

    Aws::String m_outputS3Path;
    bool m_outputS3PathHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
