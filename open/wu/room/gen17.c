inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  seteuid(getuid());    // ����˵Ҫ����һ����?
        set("short",HIC"-�����Թ�����-"NOR);
        set("long", @LONG
�������󷨵����ģ�ֻ����ǰһ����������Ļ�����ʧ�ˣ�
���ϵ�ҹ���齫����������ʮ�ֹ��������
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/wu/room/gen18",
  "south" : "/open/wu/room/gen16",
]));
  set("light_up", 1);
  set("no_transmit",1);
  set("no_auc",1);
  set("need_key/north",1);
set("need_key/south",1);
  create_door("south",HIY"��ɫ����"NOR,"north",DOOR_LOCKED);
create_door("north",HIB"��ɫ����"NOR,"south",DOOR_LOCKED);

  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/guard4" : 1,
]));
  setup();
}
