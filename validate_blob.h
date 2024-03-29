#ifndef FIRMWARE_BLOB_VALIDATE_BLOB_H
#define FIRMWARE_BLOB_VALIDATE_BLOB_H

#ifdef __cplusplus
extern "C" {
#endif

#include "boot_policy.h"
#include "firmware_blob.h"

#include <stdint.h>

typedef enum {
  BOARD_PARTITION_NONE,
  BOARD_PARTITION_RECOVERY,
  BOARD_PARTITION_SOFTWARE,
  BOARD_PARTITION_COUNT,
} board_partition_t;

struct validate_blob_input
{
  const uint8_t *blob;
  uint32_t blob_len;
  board_boot_policy_t board_boot_policy;
  uint32_t board_project_id;
  board_partition_t board_partition;
};

validate_blob_err_t
validate_blob(const struct validate_blob_input *validate_blob_input,
              const char **feedback);

#ifdef __cplusplus
}
#endif

#endif // FIRMWARE_BLOB_VALIDATE_BLOB_H
