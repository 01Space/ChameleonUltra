#include "tag_persistence.h"


#define NRF_LOG_MODULE_NAME tag_persistence
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"
NRF_LOG_MODULE_REGISTER();


/**
 * ���ݿ��ۺͿ�����ָ���ĳ����ͻ������FDS�ж�Ӧ�����ݵ�KEY��ID
 */
void get_fds_map_by_slot_sense_type(uint8_t slot, tag_sense_type_t sense_type, fds_slot_record_map_t* map) {
    // ���� @see FDS_SLOT_TAG_DUMP_FILE_KEY ��Լ����ÿ��slot����Ϊ��㣬ÿ��slot�����䵥����key��record
    map->key = FDS_SLOT_TAG_DUMP_FILE_KEY + slot;
    // Ȼ���ٸ���Լ����ÿ��slot�ж��صĳ�����Ҳ��һ�����ݵ�id
    uint8_t base_id = 0;
    switch(sense_type) {
        case TAG_SENSE_HF:
            base_id = 0;
            break;
        case TAG_SENSE_LF:
            base_id = 1;
            break;
        case TAG_SENSE_NO:
            // never to here...(if dev wrong, must fix)
            APP_ERROR_CHECK(NRF_ERROR_INVALID_PARAM);
    }
    map->id = FDS_SLOT_TAG_DUMP_FILE_ID + base_id;
}
