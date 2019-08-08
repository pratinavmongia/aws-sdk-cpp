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
#include <aws/glue/model/TransformStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/TransformParameters.h>
#include <aws/glue/model/EvaluationMetrics.h>
#include <aws/glue/model/WorkerType.h>
#include <aws/glue/model/GlueTable.h>
#include <aws/glue/model/SchemaColumn.h>
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
   * <p>A structure for a machine learning transform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MLTransform">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API MLTransform
  {
  public:
    MLTransform();
    MLTransform(Aws::Utils::Json::JsonView jsonValue);
    MLTransform& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique transform ID that is generated for the machine learning transform.
     * The ID is guaranteed to be unique and does not change.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }

    /**
     * <p>The unique transform ID that is generated for the machine learning transform.
     * The ID is guaranteed to be unique and does not change.</p>
     */
    inline bool TransformIdHasBeenSet() const { return m_transformIdHasBeenSet; }

    /**
     * <p>The unique transform ID that is generated for the machine learning transform.
     * The ID is guaranteed to be unique and does not change.</p>
     */
    inline void SetTransformId(const Aws::String& value) { m_transformIdHasBeenSet = true; m_transformId = value; }

    /**
     * <p>The unique transform ID that is generated for the machine learning transform.
     * The ID is guaranteed to be unique and does not change.</p>
     */
    inline void SetTransformId(Aws::String&& value) { m_transformIdHasBeenSet = true; m_transformId = std::move(value); }

    /**
     * <p>The unique transform ID that is generated for the machine learning transform.
     * The ID is guaranteed to be unique and does not change.</p>
     */
    inline void SetTransformId(const char* value) { m_transformIdHasBeenSet = true; m_transformId.assign(value); }

    /**
     * <p>The unique transform ID that is generated for the machine learning transform.
     * The ID is guaranteed to be unique and does not change.</p>
     */
    inline MLTransform& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}

    /**
     * <p>The unique transform ID that is generated for the machine learning transform.
     * The ID is guaranteed to be unique and does not change.</p>
     */
    inline MLTransform& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}

    /**
     * <p>The unique transform ID that is generated for the machine learning transform.
     * The ID is guaranteed to be unique and does not change.</p>
     */
    inline MLTransform& WithTransformId(const char* value) { SetTransformId(value); return *this;}


    /**
     * <p>A user-defined name for the machine learning transform. Names are not
     * guaranteed unique and can be changed at any time.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-defined name for the machine learning transform. Names are not
     * guaranteed unique and can be changed at any time.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A user-defined name for the machine learning transform. Names are not
     * guaranteed unique and can be changed at any time.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A user-defined name for the machine learning transform. Names are not
     * guaranteed unique and can be changed at any time.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A user-defined name for the machine learning transform. Names are not
     * guaranteed unique and can be changed at any time.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A user-defined name for the machine learning transform. Names are not
     * guaranteed unique and can be changed at any time.</p>
     */
    inline MLTransform& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-defined name for the machine learning transform. Names are not
     * guaranteed unique and can be changed at any time.</p>
     */
    inline MLTransform& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-defined name for the machine learning transform. Names are not
     * guaranteed unique and can be changed at any time.</p>
     */
    inline MLTransform& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A user-defined, long-form description text for the machine learning
     * transform. Descriptions are not guaranteed to be unique and can be changed at
     * any time.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-defined, long-form description text for the machine learning
     * transform. Descriptions are not guaranteed to be unique and can be changed at
     * any time.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A user-defined, long-form description text for the machine learning
     * transform. Descriptions are not guaranteed to be unique and can be changed at
     * any time.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-defined, long-form description text for the machine learning
     * transform. Descriptions are not guaranteed to be unique and can be changed at
     * any time.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A user-defined, long-form description text for the machine learning
     * transform. Descriptions are not guaranteed to be unique and can be changed at
     * any time.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-defined, long-form description text for the machine learning
     * transform. Descriptions are not guaranteed to be unique and can be changed at
     * any time.</p>
     */
    inline MLTransform& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-defined, long-form description text for the machine learning
     * transform. Descriptions are not guaranteed to be unique and can be changed at
     * any time.</p>
     */
    inline MLTransform& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A user-defined, long-form description text for the machine learning
     * transform. Descriptions are not guaranteed to be unique and can be changed at
     * any time.</p>
     */
    inline MLTransform& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current status of the machine learning transform.</p>
     */
    inline const TransformStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the machine learning transform.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the machine learning transform.</p>
     */
    inline void SetStatus(const TransformStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the machine learning transform.</p>
     */
    inline void SetStatus(TransformStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the machine learning transform.</p>
     */
    inline MLTransform& WithStatus(const TransformStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the machine learning transform.</p>
     */
    inline MLTransform& WithStatus(TransformStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp. The time and date that this machine learning transform was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }

    /**
     * <p>A timestamp. The time and date that this machine learning transform was
     * created.</p>
     */
    inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }

    /**
     * <p>A timestamp. The time and date that this machine learning transform was
     * created.</p>
     */
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOnHasBeenSet = true; m_createdOn = value; }

    /**
     * <p>A timestamp. The time and date that this machine learning transform was
     * created.</p>
     */
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOnHasBeenSet = true; m_createdOn = std::move(value); }

    /**
     * <p>A timestamp. The time and date that this machine learning transform was
     * created.</p>
     */
    inline MLTransform& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}

    /**
     * <p>A timestamp. The time and date that this machine learning transform was
     * created.</p>
     */
    inline MLTransform& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}


    /**
     * <p>A timestamp. The last point in time when this machine learning transform was
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }

    /**
     * <p>A timestamp. The last point in time when this machine learning transform was
     * modified.</p>
     */
    inline bool LastModifiedOnHasBeenSet() const { return m_lastModifiedOnHasBeenSet; }

    /**
     * <p>A timestamp. The last point in time when this machine learning transform was
     * modified.</p>
     */
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = value; }

    /**
     * <p>A timestamp. The last point in time when this machine learning transform was
     * modified.</p>
     */
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOnHasBeenSet = true; m_lastModifiedOn = std::move(value); }

    /**
     * <p>A timestamp. The last point in time when this machine learning transform was
     * modified.</p>
     */
    inline MLTransform& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}

    /**
     * <p>A timestamp. The last point in time when this machine learning transform was
     * modified.</p>
     */
    inline MLTransform& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}


    /**
     * <p>A list of AWS Glue table definitions used by the transform.</p>
     */
    inline const Aws::Vector<GlueTable>& GetInputRecordTables() const{ return m_inputRecordTables; }

    /**
     * <p>A list of AWS Glue table definitions used by the transform.</p>
     */
    inline bool InputRecordTablesHasBeenSet() const { return m_inputRecordTablesHasBeenSet; }

    /**
     * <p>A list of AWS Glue table definitions used by the transform.</p>
     */
    inline void SetInputRecordTables(const Aws::Vector<GlueTable>& value) { m_inputRecordTablesHasBeenSet = true; m_inputRecordTables = value; }

    /**
     * <p>A list of AWS Glue table definitions used by the transform.</p>
     */
    inline void SetInputRecordTables(Aws::Vector<GlueTable>&& value) { m_inputRecordTablesHasBeenSet = true; m_inputRecordTables = std::move(value); }

    /**
     * <p>A list of AWS Glue table definitions used by the transform.</p>
     */
    inline MLTransform& WithInputRecordTables(const Aws::Vector<GlueTable>& value) { SetInputRecordTables(value); return *this;}

    /**
     * <p>A list of AWS Glue table definitions used by the transform.</p>
     */
    inline MLTransform& WithInputRecordTables(Aws::Vector<GlueTable>&& value) { SetInputRecordTables(std::move(value)); return *this;}

    /**
     * <p>A list of AWS Glue table definitions used by the transform.</p>
     */
    inline MLTransform& AddInputRecordTables(const GlueTable& value) { m_inputRecordTablesHasBeenSet = true; m_inputRecordTables.push_back(value); return *this; }

    /**
     * <p>A list of AWS Glue table definitions used by the transform.</p>
     */
    inline MLTransform& AddInputRecordTables(GlueTable&& value) { m_inputRecordTablesHasBeenSet = true; m_inputRecordTables.push_back(std::move(value)); return *this; }


    /**
     * <p>A <code>TransformParameters</code> object. You can use parameters to tune
     * (customize) the behavior of the machine learning transform by specifying what
     * data it learns from and your preference on various tradeoffs (such as precious
     * vs. recall, or accuracy vs. cost).</p>
     */
    inline const TransformParameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>A <code>TransformParameters</code> object. You can use parameters to tune
     * (customize) the behavior of the machine learning transform by specifying what
     * data it learns from and your preference on various tradeoffs (such as precious
     * vs. recall, or accuracy vs. cost).</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A <code>TransformParameters</code> object. You can use parameters to tune
     * (customize) the behavior of the machine learning transform by specifying what
     * data it learns from and your preference on various tradeoffs (such as precious
     * vs. recall, or accuracy vs. cost).</p>
     */
    inline void SetParameters(const TransformParameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A <code>TransformParameters</code> object. You can use parameters to tune
     * (customize) the behavior of the machine learning transform by specifying what
     * data it learns from and your preference on various tradeoffs (such as precious
     * vs. recall, or accuracy vs. cost).</p>
     */
    inline void SetParameters(TransformParameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A <code>TransformParameters</code> object. You can use parameters to tune
     * (customize) the behavior of the machine learning transform by specifying what
     * data it learns from and your preference on various tradeoffs (such as precious
     * vs. recall, or accuracy vs. cost).</p>
     */
    inline MLTransform& WithParameters(const TransformParameters& value) { SetParameters(value); return *this;}

    /**
     * <p>A <code>TransformParameters</code> object. You can use parameters to tune
     * (customize) the behavior of the machine learning transform by specifying what
     * data it learns from and your preference on various tradeoffs (such as precious
     * vs. recall, or accuracy vs. cost).</p>
     */
    inline MLTransform& WithParameters(TransformParameters&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>An <code>EvaluationMetrics</code> object. Evaluation metrics provide an
     * estimate of the quality of your machine learning transform.</p>
     */
    inline const EvaluationMetrics& GetEvaluationMetrics() const{ return m_evaluationMetrics; }

    /**
     * <p>An <code>EvaluationMetrics</code> object. Evaluation metrics provide an
     * estimate of the quality of your machine learning transform.</p>
     */
    inline bool EvaluationMetricsHasBeenSet() const { return m_evaluationMetricsHasBeenSet; }

    /**
     * <p>An <code>EvaluationMetrics</code> object. Evaluation metrics provide an
     * estimate of the quality of your machine learning transform.</p>
     */
    inline void SetEvaluationMetrics(const EvaluationMetrics& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = value; }

    /**
     * <p>An <code>EvaluationMetrics</code> object. Evaluation metrics provide an
     * estimate of the quality of your machine learning transform.</p>
     */
    inline void SetEvaluationMetrics(EvaluationMetrics&& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = std::move(value); }

    /**
     * <p>An <code>EvaluationMetrics</code> object. Evaluation metrics provide an
     * estimate of the quality of your machine learning transform.</p>
     */
    inline MLTransform& WithEvaluationMetrics(const EvaluationMetrics& value) { SetEvaluationMetrics(value); return *this;}

    /**
     * <p>An <code>EvaluationMetrics</code> object. Evaluation metrics provide an
     * estimate of the quality of your machine learning transform.</p>
     */
    inline MLTransform& WithEvaluationMetrics(EvaluationMetrics&& value) { SetEvaluationMetrics(std::move(value)); return *this;}


    /**
     * <p>A count identifier for the labeling files generated by AWS Glue for this
     * transform. As you create a better transform, you can iteratively download,
     * label, and upload the labeling file.</p>
     */
    inline int GetLabelCount() const{ return m_labelCount; }

    /**
     * <p>A count identifier for the labeling files generated by AWS Glue for this
     * transform. As you create a better transform, you can iteratively download,
     * label, and upload the labeling file.</p>
     */
    inline bool LabelCountHasBeenSet() const { return m_labelCountHasBeenSet; }

    /**
     * <p>A count identifier for the labeling files generated by AWS Glue for this
     * transform. As you create a better transform, you can iteratively download,
     * label, and upload the labeling file.</p>
     */
    inline void SetLabelCount(int value) { m_labelCountHasBeenSet = true; m_labelCount = value; }

    /**
     * <p>A count identifier for the labeling files generated by AWS Glue for this
     * transform. As you create a better transform, you can iteratively download,
     * label, and upload the labeling file.</p>
     */
    inline MLTransform& WithLabelCount(int value) { SetLabelCount(value); return *this;}


    /**
     * <p>A map of key-value pairs representing the columns and data types that this
     * transform can run against. Has an upper bound of 100 columns.</p>
     */
    inline const Aws::Vector<SchemaColumn>& GetSchema() const{ return m_schema; }

    /**
     * <p>A map of key-value pairs representing the columns and data types that this
     * transform can run against. Has an upper bound of 100 columns.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>A map of key-value pairs representing the columns and data types that this
     * transform can run against. Has an upper bound of 100 columns.</p>
     */
    inline void SetSchema(const Aws::Vector<SchemaColumn>& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>A map of key-value pairs representing the columns and data types that this
     * transform can run against. Has an upper bound of 100 columns.</p>
     */
    inline void SetSchema(Aws::Vector<SchemaColumn>&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>A map of key-value pairs representing the columns and data types that this
     * transform can run against. Has an upper bound of 100 columns.</p>
     */
    inline MLTransform& WithSchema(const Aws::Vector<SchemaColumn>& value) { SetSchema(value); return *this;}

    /**
     * <p>A map of key-value pairs representing the columns and data types that this
     * transform can run against. Has an upper bound of 100 columns.</p>
     */
    inline MLTransform& WithSchema(Aws::Vector<SchemaColumn>&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs representing the columns and data types that this
     * transform can run against. Has an upper bound of 100 columns.</p>
     */
    inline MLTransform& AddSchema(const SchemaColumn& value) { m_schemaHasBeenSet = true; m_schema.push_back(value); return *this; }

    /**
     * <p>A map of key-value pairs representing the columns and data types that this
     * transform can run against. Has an upper bound of 100 columns.</p>
     */
    inline MLTransform& AddSchema(SchemaColumn&& value) { m_schemaHasBeenSet = true; m_schema.push_back(std::move(value)); return *this; }


    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions. This role needs permission to your Amazon Simple Storage Service
     * (Amazon S3) sources, targets, temporary directory, scripts, and any libraries
     * used by the task run for this transform.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions. This role needs permission to your Amazon Simple Storage Service
     * (Amazon S3) sources, targets, temporary directory, scripts, and any libraries
     * used by the task run for this transform.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions. This role needs permission to your Amazon Simple Storage Service
     * (Amazon S3) sources, targets, temporary directory, scripts, and any libraries
     * used by the task run for this transform.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions. This role needs permission to your Amazon Simple Storage Service
     * (Amazon S3) sources, targets, temporary directory, scripts, and any libraries
     * used by the task run for this transform.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions. This role needs permission to your Amazon Simple Storage Service
     * (Amazon S3) sources, targets, temporary directory, scripts, and any libraries
     * used by the task run for this transform.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions. This role needs permission to your Amazon Simple Storage Service
     * (Amazon S3) sources, targets, temporary directory, scripts, and any libraries
     * used by the task run for this transform.</p>
     */
    inline MLTransform& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions. This role needs permission to your Amazon Simple Storage Service
     * (Amazon S3) sources, targets, temporary directory, scripts, and any libraries
     * used by the task run for this transform.</p>
     */
    inline MLTransform& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role with the required
     * permissions. This role needs permission to your Amazon Simple Storage Service
     * (Amazon S3) sources, targets, temporary directory, scripts, and any libraries
     * used by the task run for this transform.</p>
     */
    inline MLTransform& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The number of AWS Glue data processing units (DPUs) that are allocated to
     * task runs for this transform. You can allocate from 2 to 100 DPUs; the default
     * is 10. A DPU is a relative measure of processing power that consists of 4 vCPUs
     * of compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>. </p>
     * <p>When the <code>WorkerType</code> field is set to a value other than
     * <code>Standard</code>, the <code>MaxCapacity</code> field is set automatically
     * and becomes read-only.</p>
     */
    inline double GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) that are allocated to
     * task runs for this transform. You can allocate from 2 to 100 DPUs; the default
     * is 10. A DPU is a relative measure of processing power that consists of 4 vCPUs
     * of compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>. </p>
     * <p>When the <code>WorkerType</code> field is set to a value other than
     * <code>Standard</code>, the <code>MaxCapacity</code> field is set automatically
     * and becomes read-only.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) that are allocated to
     * task runs for this transform. You can allocate from 2 to 100 DPUs; the default
     * is 10. A DPU is a relative measure of processing power that consists of 4 vCPUs
     * of compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>. </p>
     * <p>When the <code>WorkerType</code> field is set to a value other than
     * <code>Standard</code>, the <code>MaxCapacity</code> field is set automatically
     * and becomes read-only.</p>
     */
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The number of AWS Glue data processing units (DPUs) that are allocated to
     * task runs for this transform. You can allocate from 2 to 100 DPUs; the default
     * is 10. A DPU is a relative measure of processing power that consists of 4 vCPUs
     * of compute capacity and 16 GB of memory. For more information, see the <a
     * href="https://aws.amazon.com/glue/pricing/">AWS Glue pricing page</a>. </p>
     * <p>When the <code>WorkerType</code> field is set to a value other than
     * <code>Standard</code>, the <code>MaxCapacity</code> field is set automatically
     * and becomes read-only.</p>
     */
    inline MLTransform& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The type of predefined worker that is allocated when a task of this transform
     * runs. Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline const WorkerType& GetWorkerType() const{ return m_workerType; }

    /**
     * <p>The type of predefined worker that is allocated when a task of this transform
     * runs. Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline bool WorkerTypeHasBeenSet() const { return m_workerTypeHasBeenSet; }

    /**
     * <p>The type of predefined worker that is allocated when a task of this transform
     * runs. Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline void SetWorkerType(const WorkerType& value) { m_workerTypeHasBeenSet = true; m_workerType = value; }

    /**
     * <p>The type of predefined worker that is allocated when a task of this transform
     * runs. Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline void SetWorkerType(WorkerType&& value) { m_workerTypeHasBeenSet = true; m_workerType = std::move(value); }

    /**
     * <p>The type of predefined worker that is allocated when a task of this transform
     * runs. Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline MLTransform& WithWorkerType(const WorkerType& value) { SetWorkerType(value); return *this;}

    /**
     * <p>The type of predefined worker that is allocated when a task of this transform
     * runs. Accepts a value of Standard, G.1X, or G.2X.</p> <ul> <li> <p>For the
     * <code>Standard</code> worker type, each worker provides 4 vCPU, 16 GB of memory
     * and a 50GB disk, and 2 executors per worker.</p> </li> <li> <p>For the
     * <code>G.1X</code> worker type, each worker provides 4 vCPU, 16 GB of memory and
     * a 64GB disk, and 1 executor per worker.</p> </li> <li> <p>For the
     * <code>G.2X</code> worker type, each worker provides 8 vCPU, 32 GB of memory and
     * a 128GB disk, and 1 executor per worker.</p> </li> </ul>
     */
    inline MLTransform& WithWorkerType(WorkerType&& value) { SetWorkerType(std::move(value)); return *this;}


    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a task of the transform runs.</p>
     */
    inline int GetNumberOfWorkers() const{ return m_numberOfWorkers; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a task of the transform runs.</p>
     */
    inline bool NumberOfWorkersHasBeenSet() const { return m_numberOfWorkersHasBeenSet; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a task of the transform runs.</p>
     */
    inline void SetNumberOfWorkers(int value) { m_numberOfWorkersHasBeenSet = true; m_numberOfWorkers = value; }

    /**
     * <p>The number of workers of a defined <code>workerType</code> that are allocated
     * when a task of the transform runs.</p>
     */
    inline MLTransform& WithNumberOfWorkers(int value) { SetNumberOfWorkers(value); return *this;}


    /**
     * <p>The timeout in minutes of the machine learning transform.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The timeout in minutes of the machine learning transform.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The timeout in minutes of the machine learning transform.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The timeout in minutes of the machine learning transform.</p>
     */
    inline MLTransform& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The maximum number of times to retry after an <code>MLTaskRun</code> of the
     * machine learning transform fails.</p>
     */
    inline int GetMaxRetries() const{ return m_maxRetries; }

    /**
     * <p>The maximum number of times to retry after an <code>MLTaskRun</code> of the
     * machine learning transform fails.</p>
     */
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }

    /**
     * <p>The maximum number of times to retry after an <code>MLTaskRun</code> of the
     * machine learning transform fails.</p>
     */
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }

    /**
     * <p>The maximum number of times to retry after an <code>MLTaskRun</code> of the
     * machine learning transform fails.</p>
     */
    inline MLTransform& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}

  private:

    Aws::String m_transformId;
    bool m_transformIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    TransformStatusType m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_createdOn;
    bool m_createdOnHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedOn;
    bool m_lastModifiedOnHasBeenSet;

    Aws::Vector<GlueTable> m_inputRecordTables;
    bool m_inputRecordTablesHasBeenSet;

    TransformParameters m_parameters;
    bool m_parametersHasBeenSet;

    EvaluationMetrics m_evaluationMetrics;
    bool m_evaluationMetricsHasBeenSet;

    int m_labelCount;
    bool m_labelCountHasBeenSet;

    Aws::Vector<SchemaColumn> m_schema;
    bool m_schemaHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    double m_maxCapacity;
    bool m_maxCapacityHasBeenSet;

    WorkerType m_workerType;
    bool m_workerTypeHasBeenSet;

    int m_numberOfWorkers;
    bool m_numberOfWorkersHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;

    int m_maxRetries;
    bool m_maxRetriesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
