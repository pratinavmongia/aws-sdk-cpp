﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshiftserverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshiftserverless/model/Namespace.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class AWS_REDSHIFTSERVERLESS_API GetNamespaceResult
  {
  public:
    GetNamespaceResult();
    GetNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned namespace object.</p>
     */
    inline const Namespace& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The returned namespace object.</p>
     */
    inline void SetNamespace(const Namespace& value) { m_namespace = value; }

    /**
     * <p>The returned namespace object.</p>
     */
    inline void SetNamespace(Namespace&& value) { m_namespace = std::move(value); }

    /**
     * <p>The returned namespace object.</p>
     */
    inline GetNamespaceResult& WithNamespace(const Namespace& value) { SetNamespace(value); return *this;}

    /**
     * <p>The returned namespace object.</p>
     */
    inline GetNamespaceResult& WithNamespace(Namespace&& value) { SetNamespace(std::move(value)); return *this;}

  private:

    Namespace m_namespace;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
