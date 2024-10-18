#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

uint8_t rx_buffer[261];


typedef struct {
    uint8_t start_of_frame;
    uint8_t start_of_text;
    uint8_t data_length;
    uint8_t packet_id;
    uint8_t sensor_id;
    uint8_t opkod;
    uint8_t checksum;
    uint8_t end_of_frame;
    uint8_t message[252];
}Data_frame;

Data_frame D1 ; 


#define START_OF_FRAME_BYTE 0x55
#define START_OF_TEXT_BYTE 0x02
#define END_OF_FRAME_BYTE 0x10



void parse(uint8_t* frameArray, Data_frame* frameStruct, int length)
{
    //bool startBitsControlFlag = 0; // Check 1
    bool end_of_frameControlFlag = 0; // Check 2
    bool checksum_controlFlag = 0; // Check 3
    uint8_t checkToplam = 0;
    //uint8_t message[] = {0};
    int i = 0;

    /* Step 1 Check - start_of_frame and start_of_text Control */
    /***********************************************************/

    for (i = 0; i < length; ++i) {

        switch (frameArray[i])
        {
        case START_OF_FRAME_BYTE:
            frameStruct->start_of_frame = frameArray[i];
            printf("\n%x\n", frameStruct->start_of_frame);
            break;

        case START_OF_TEXT_BYTE:
            printf("\n hoop burdayim\n");
        default:
            break;
        }

        toplam += frameArray[i];

        
    }

    for (i = 0; i < length; ++i)
    {
        if (frameArray[i] == START_OF_FRAME_BYTE)
        {
            if (frameArray[i + 1] == START_OF_TEXT_BYTE)
            {
                //startBitsControlFlag = 1;
                frameStruct->start_of_frame = frameArray[i];
                frameStruct->start_of_text = frameArray[i + 1];
                printf("start_of_frame = 0x%x\nstart_of_text = 0x%x\n", frameStruct->start_of_frame, frameStruct->start_of_text);
                end_of_frameControlFlag = 1;
            }
        }
        ++i;
        ++i;

        /* Step 2 Check - end_of_frame Control */
      /***********************************************************/

        if (end_of_frameControlFlag)
        {
            frameStruct->data_length = frameArray[i];
            if (frameArray[frameStruct->data_length + i + 2] == END_OF_FRAME_BYTE)
            {
                printf("data_length = 0x%x\n", frameStruct->data_length);
                frameStruct->end_of_frame = frameArray[frameStruct->data_length + i + 2];
                printf("end_of_frame = 0x%x\n", frameStruct->end_of_frame);
                checksum_controlFlag = 1;
            }
        }


        /* Step 3 Check - checksum Control *  /***********************************************************/
        if (checksum_controlFlag) {
            int j = 0;
            for (j = i; j <= frameStruct->data_length + i; ++j) // Bu döngü olmadan topl
            {
                printf("0x%x ", frameArray[j]);
                checkToplam += frameArray[j];
            }
            if (checkToplam == frameArray[frameStruct->data_length + i + 1])
            {
                checksum_controlFlag = 1;
                frameStruct->checksum = frameArray[frameStruct->data_length + i + 1];
                printf("\nchecksum = 0x%x\n", frameStruct->checksum);
            }
        }
    }



    if (checksum_controlFlag)
    {
        frameStruct->packet_id = frameArray[i + 1];
        frameStruct->sensor_id = frameArray[i + 2];
        frameStruct->opkod = frameArray[i + 3];
        printf("packet_id = 0x%x\nsensor_id = 0x%x\nopkod = 0x%x\n", frameStruct->packet_id, frameStruct->sensor_id, frameStruct->opkod);
    }
}

int main()
{
    uint8_t rx_buffer[] = { 0X55, 0x02, 0x07, 0x01, 0x22, 0x03, 0x01, 0x02, 0x03, 0x04, 0x37, 0x10 };
    parse(rx_buffer, &D1, sizeof(rx_buffer));
    return 0;
}

