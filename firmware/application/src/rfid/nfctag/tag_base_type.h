#ifndef TAG_BASE_TYPE_H
#define TAG_BASE_TYPE_H


// ���ĸ�Ӧ����
typedef enum  {
    // �޳���Ӧ
    TAG_SENSE_NO,
    // ��Ƶ125khz����Ӧ
    TAG_SENSE_LF,
    // ��Ƶ13.56mhz����Ӧ
    TAG_SENSE_HF,
} tag_sense_type_t;

/**
 *
 * ����֧��ģ��ı�ǩ�����͵Ķ���
 * ע�⣬�������ж���ı�ǩ���ͣ�����Ӧ�ò��ϸ���ľ��������ͳ��
 * �������ָߵ�Ƶ
 */
typedef enum {
    // �ض����ұ�����ڵı�־�����ڵ�����
    TAG_TYPE_UNKNOWN,
    // 125khz��ID����ϵ��
    TAG_TYPE_EM410X,
    // Mifareϵ��
    TAG_TYPE_MIFARE_Mini,
    TAG_TYPE_MIFARE_1024,
    TAG_TYPE_MIFARE_2048,
    TAG_TYPE_MIFARE_4096,
    // NTAGϵ��
    TAG_TYPE_NTAG_213,
    TAG_TYPE_NTAG_215,
    TAG_TYPE_NTAG_216,
} tag_specific_type_t;


#endif
