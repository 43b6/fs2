// Room: /open/hall/jail/jail2.c

inherit ROOM;

#include <ansi.h>

void create()

{

        set("short", "�η��ߵ�");
        set("long", @LONG
�ߵ�����ȼ����ֻ��ѣ������η��ĵƹ�����Դ˵�..��ʪ�ĵذ�
..ż�����е�߰ߵ�Ѫ��....����ĺ����ʱӿ�������ͷ......���
��һ��ǿ�ҵĲ�����!!����þ����뿪����Ϊ��!!
LONG);

        set("exits", ([ /* sizeof() == 1 */
  "south" :__DIR__"jail",
  "north" :__DIR__"jail3",

  ]));

        setup();

}

