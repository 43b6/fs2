#include <ansi.h>
#include <room.h>
inherit ROOM;
                
void create ()
{
  set ("short", "��ս����������");
  set ("long", @LONG
����Ҷ��ɱ�ص������ķ�����������ɱ����û���������������뿪��̳������
����벹�䳤����ս�����װ�������ǲ����ѡ��

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"foodrm.c",
   ]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/npc/lee.c" : 1,]));
  setup();
}