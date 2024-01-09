#ifndef FIRMWARE_BLOB_VERIFY_BLOB_INTEGRITY_H
#define FIRMWARE_BLOB_VERIFY_BLOB_INTEGRITY_H

#ifdef __cplusplus
extern "C" {
#endif

#include "firmware_blob.h"

#include <stdint.h>

validate_blob_err_t
verify_blob_integrity(const uint8_t *blob, uint32_t blob_len,
                      struct blob_header *parsed_blob_header_out,
                      int *has_valid_signature);

#ifdef __cplusplus
}
#endif

#endif // FIRMWARE_BLOB_VERIFY_BLOB_INTEGRITY_H
