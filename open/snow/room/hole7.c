#include <room.h>

inherit ROOM;

void create()
{
        set("short","������");
          set("long","����һ�������,���ܴ�ɨ��һ����Ⱦ,�㿴��ǽ��д��
             ��                   ��
             һ                   һ
             ʱ                   ��
             ��                   ��
             ƽ                   ��
             ��                   ��
             ��                   ��

�⼸������������Ȱ���´����Ź����,��������ë���Ծ�Ȼ����ʯ����,�㲻����д��Դʵ����ָ��־��岻�ѡ�\n");

        set("exits", ([
          "east":__DIR__"hole6",
        ]) );

        create_door("east", "�������", "west", DOOR_CLOSED);

        set("objects", ([ /* sizeof() == 3 */
         "/open/snow/npc/linhwi" :1,
         ]));
         setup();
}
