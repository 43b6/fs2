// Room: /u/f/fire/room/room1-31.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  seteuid(getuid());
  set ("short",HIY"�����ɹ�����"NOR);
  set ("long", @LONG
�����ĵ�·������������������ƺ����Ըо�����������ձ�
�����ط���һ�����㷢�������ǰ�ƺ�վ��һλʮ�ָ��˵������
���������ɵڶ���������--->��㡣��������ɢ������ǿ����֮��Ϣ
�ᶨ��Ŀ��ʹ��ͻȻ���ࡣ
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room1-24",
  "west" : __DIR__"room1-30.c",
  "east" : __DIR__"room1-29.c",
"up" : __DIR__"eq-room",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/marksman/npc/master_t.c" : 1,
]));
  set("valid_startroom", 1);
set("light_up",1);

call_other("/obj/board/marksman_b","???");
  setup();
}
