#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
struct player
{
    int num;
    char first_name[100];
    char last_name[100];
    int bats;
    int hits;
    int walks;
    int bri;
    float aver;
};
int main(int argc, char* argv[])
{
    struct player data[100] = { 0 };
    int ch;
    int index_1 = 0;
    int ba, hi, wa, br;
    FILE* fp;

    if (argc != 2)
    {
        fprintf(stderr, "사용법: C:\\Users\\gnbup\\Desktop\\ktc\\filename\n");
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "%s 파일을 열 수 없습니다.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        char temp[100];
        int temp_index = 0;
        while (ch != '\n' && ch != EOF)
        {
            temp[temp_index++] = ch;
            ch = getc(fp);
        }
        temp[temp_index] = '\0';
        int found = -1;
        int num_value;
        sscanf(temp, "%d", &num_value);
        for (int j = 0; j < index_1; j++)
        {
            if (data[j].num == num_value)
            {
                found = j;
                break;
            }
        }
        if (found != -1)
        {
            sscanf(temp, "%*d %*s %*s %d %d %d %d", &ba, &hi, &wa, &br);
            data[found].bats += ba;
            data[found].hits += hi;
            data[found].walks += wa;
            data[found].bri += br;
        }
        else
        {
            sscanf(temp, "%d %s %s %d %d %d %d", &data[index_1].num, data[index_1].first_name,
                data[index_1].last_name, &data[index_1].bats, &data[index_1].hits,
                &data[index_1].walks, &data[index_1].bri);
            index_1++;
        }
    }
    int total_bats = 0,total_hits = 0,total_walks = 0,total_bri = 0;
    for (int i = 0; i < index_1; i++)
    {
        total_bats += data[i].bats;
        total_hits += data[i].hits;
        total_walks += data[i].walks;
        total_bri += data[i].bri;
        data[i].aver = (float)data[i].hits / data[i].bats;
        printf("%d %s %s %d %d %d %d %.2f\n", data[i].num, data[i].first_name,
            data[i].last_name, data[i].bats, data[i].hits, data[i].walks, data[i].bri, data[i].aver);
    }
    float total_aver = (float)total_hits / total_bats;
    printf("팀 전체 통계 : %d %d %d %d %.2f\n", total_bats, total_hits, total_walks, total_bri, total_aver);
    fclose(fp);
    return 0;
}