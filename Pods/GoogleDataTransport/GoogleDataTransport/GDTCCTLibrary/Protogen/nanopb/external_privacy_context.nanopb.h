/*
 * Copyright 2023 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.9 */

#ifndef PB_PRIVACY_CONTEXT_EXTERNAL_EXTERNAL_PRIVACY_CONTEXT_NANOPB_H_INCLUDED
#define PB_PRIVACY_CONTEXT_EXTERNAL_EXTERNAL_PRIVACY_CONTEXT_NANOPB_H_INCLUDED
#include <nanopb/pb.h>

#include "GoogleDataTransport/GDTCCTLibrary/Protogen/nanopb/external_prequest_context.nanopb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Struct definitions */
typedef struct _privacy_context_external_ExternalPrivacyContext {
    bool has_prequest;
    privacy_context_external_ExternalPRequestContext prequest;
/* @@protoc_insertion_point(struct:privacy_context_external_ExternalPrivacyContext) */
} privacy_context_external_ExternalPrivacyContext;

/* Default values for struct fields */

/* Initializer values for message structs */
#define privacy_context_external_ExternalPrivacyContext_init_default {false, privacy_context_external_ExternalPRequestContext_init_default}
#define privacy_context_external_ExternalPrivacyContext_init_zero {false, privacy_context_external_ExternalPRequestContext_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define privacy_context_external_ExternalPrivacyContext_prequest_tag 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t privacy_context_external_ExternalPrivacyContext_fields[2];

/* Maximum encoded size of messages (where known) */
#define privacy_context_external_ExternalPrivacyContext_size 13

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define EXTERNAL_PRIVACY_CONTEXT_MESSAGES \


#endif

/* @@protoc_insertion_point(eof) */

#endif
