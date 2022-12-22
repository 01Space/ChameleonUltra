#ifndef TAG_PERSISTENCE_H
#define TAG_PERSISTENCE_H

#include <stdint.h>
#include "tag_base_type.h"


// fds
#define FDS_CONFIG_RECORD_FILE_KEY   0x1066
#define FDS_CONFIG_RECORD_FILE_ID    0x1066
/*
 * ÿ��slot��file_key����һ��
 * ÿ��slot���������͵Ŀ�Ƭ���������������ID����ǰ��
 */
#define FDS_SLOT_TAG_DUMP_FILE_KEY   0x1067
#define FDS_SLOT_TAG_DUMP_FILE_ID    0x1067


typedef struct {
    uint16_t key;
    uint16_t id;
} fds_slot_record_map_t;

/**
 * ����ָ���Ŀ��ۺͿ�Ƭ�����ͣ�������Ӧ�Ŀ�Ƭ���ݵ�FDS��Ϣ��ӳ�����
 */
void get_fds_map_by_slot_sense_type(uint8_t slot, tag_sense_type_t sense_type, fds_slot_record_map_t* map);

#endif
