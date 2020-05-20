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
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a Transport Layer Security (TLS) validation context
   * trust for a local file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TlsValidationContextFileTrust">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API TlsValidationContextFileTrust
  {
  public:
    TlsValidationContextFileTrust();
    TlsValidationContextFileTrust(Aws::Utils::Json::JsonView jsonValue);
    TlsValidationContextFileTrust& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual
         node that the proxy is running on.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual
         node that the proxy is running on.</p>
     */
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual
         node that the proxy is running on.</p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual
         node that the proxy is running on.</p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual
         node that the proxy is running on.</p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChainHasBeenSet = true; m_certificateChain.assign(value); }

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual
         node that the proxy is running on.</p>
     */
    inline TlsValidationContextFileTrust& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual
         node that the proxy is running on.</p>
     */
    inline TlsValidationContextFileTrust& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The certificate trust chain for a certificate stored on the file system of
     * the virtual
         node that the proxy is running on.</p>
     */
    inline TlsValidationContextFileTrust& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}

  private:

    Aws::String m_certificateChain;
    bool m_certificateChainHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
