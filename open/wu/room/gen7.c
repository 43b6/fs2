inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  seteuid(getuid());    // ����˵Ҫ����һ����?
        set("short",HIC"-�����Թ�����-"NOR);
        set("long", @LONG
�������󷨵����ģ�ֻ����ǰһ�����������Թ��Ļ�����ʧ�ˣ�
���ϵ�ҹ���齫����������ʮ�ֹ����������ǰվ��������ɽ������
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/wu/room/gen2",
  "north" : "/open/wu/room/gen8",
]));
  set("light_up", 1);
  set("no_transmit",1);
  set("no_auc",1);
  set("need_key/north",1);
  create_door("north",HIR"��ɫ����"NOR,"south",DOOR_LOCKED);
  set("objects", ([ /* sizeof() == 1 */
"/open/wu/npc/guard" : 2,
  "/open/wu/npc/guard1" : 1,
]));
  setup();
}
