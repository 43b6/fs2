inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  seteuid(getuid());    // ����˵Ҫ����һ����?
        set("short",HIC"-�����Թ�����-"NOR);
        set("long", @LONG
�������󷨵����ģ�ֻ����ǰһ�����������Թ��Ļ�����ʧ�ˣ�
���ϵ�ҹ���齫����������ʮ�ֹ��������
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/wu/room/gen7",
  "down" : "/open/wu/room/gen9",
]));
  set("light_up", 1);
  set("no_transmit",1);
  set("no_auc",1);
  set("need_key/south",1);
  create_door("south",HIR"��ɫ����"NOR,"north",DOOR_LOCKED);
  set("objects", ([ /* sizeof() == 1 */
]));
  setup();
}
