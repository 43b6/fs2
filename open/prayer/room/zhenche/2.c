//open/prayer/room/zhenche/2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�����Ŵ���");
        set("long",@LONG

        ��������һ�������Ӵ����֯, ����ͳ����Ϊ��ʥ��̡�
        , �ֳ�Ϊ����. �˴������̷ֲ�֮һ��������, ��������
        �ŵ���������, ������ֱ������һ���. ��������ʥ���
        ���еڰ˵�֧��.

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "south":__DIR__"5",             //����
        "east":__DIR__"1",              //�һ���
        "west":__DIR__"3",              //�󻤷�
 
        ]) );
        set("light_up", 1);
        set("valid_startroom", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/zhenche" : 1,               //����
]));
  setup();
}
