// Room: /open/wu/room/gen1.c
// ��ɽ�������
inherit ROOM;
#include <ansi.h>
void create ()
{
  seteuid(getuid());    // ����˵Ҫ����һ����?
        set("short",RED "-�Թ����-" NOR);
        set("long", @LONG
���Ǵ�˵��ɽ�ɵ����Թٵ���ڴ�������Ļ�������������ϸһ������
������ǽ�ϣ������������׻�����ޡ���������ֹŴ������ޡ����ߵ�
��Ӧ���Ǵ�˵�е���ɽ�Թ��˰ɡ�
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "up" : "/open/wu/room/luroom23",
  "north" : "/open/wu/room/gen2.c",
]));
  set("no_transmit",1);
  set("no_auc",1);
  setup();
}
