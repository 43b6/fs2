// Room: /open/hall/jail/jail3.c

inherit ROOM;

#include <ansi.h>

void create()
{

        set("short", "����ǰ�ߵ�");
        set("long", @LONG
�˴�û�еƹ⣬ֻ��ƾ�Ŵ������⣬�����������¹��ʶ����!!վ
��������Ժ�������������������д�������������������������ޱ�
���������Ƶģ���!?�����ǹ��˵ĵط���!?�ѵ�............
LONG);

        set("exits", ([ /* sizeof() == 1 */
  "south" :__DIR__"jail2",
  ]));

        setup();

}

