#ifndef TAG_PERSISTENCE_H
#define TAG_PERSISTENCE_H

#include <stdint.h>
#include "tag_base_type.h"


/*
 * �������ã�ֻ��һ�ݣ�һ�¼���
 */
#define FDS_CONFIG_RECORD_FILE_KEY   0x1066
#define FDS_CONFIG_RECORD_FILE_ID    0x1066

/*
 * ÿ�������иߵ�Ƶ�������ݣ�����key�Ǹ������ߵģ���id+n�͵��������������̶�ĳ������Ϊָ�����ͼ���
 * ÿ��slot��file_key����һ��
 * ÿ��slot���������͵Ŀ�Ƭ���������������ID����ǰ��
 */
#define FDS_SLOT_TAG_DUMP_FILE_KEY   0x1067
#define FDS_SLOT_TAG_DUMP_FILE_ID    0x1067

/*
 * ÿ�������иߵ�Ƶ�������ݣ���˿��۵��ǳ�ҲҪ�����֣�����key�Ǹ������ߵģ���id+n�͵��������������̶�ĳ������Ϊָ�����ͼ���
 */
#define FDS_SLOT_TAG_NICK_NAME_KEY   0x1068
#define FDS_SLOT_TAG_NICK_NAME_ID    0x1068


typedef struct {
    uint16_t key;
    uint16_t id;
} fds_slot_record_map_t;

/**
 * ����ָ���Ŀ��ۺͿ�Ƭ�����ͣ�������Ӧ�Ŀ�Ƭ���ݵ�FDS��Ϣ��ӳ�����
 */
void get_fds_map_by_slot_sense_type_for_dump(uint8_t slot, tag_sense_type_t sense_type, fds_slot_record_map_t* map);

/**
 * ����ָ���Ŀ��ۺͿ�Ƭ�����ͣ�������Ӧ�Ŀ�Ƭ���ݵ��ǳƵ�FDS��Ϣ��ӳ�����
 */
void get_fds_map_by_slot_sense_type_for_nick(uint8_t slot, tag_sense_type_t sense_type, fds_slot_record_map_t* map);

#endif
