#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
int do_list();
int do_trade(string);
void create()
{
  set("short","����");
  set ("long",@LONG
���￴���Ǵ����������Ƕ���Ϣ�ĵط�����������и�����վ��
�ǣ����������ȥ����˵˵����
LONG);

  set("light_up", 1);
   set("exits", ([ /* sizeof() == 2 */
   "corner" : __DIR__"corner.c",
   "west" : __DIR__"wolf08.c",
]));
  set("objects",([ /* sizeof() == 4 */
  "/open/badman/npc/wolf.c" : 2,
   "/open/badman/npc/wolf02.c" : 2,
]));

  setup();
}
