// Room: /open/dancer/room/roomse4.c :cgy
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create ()
{
  set ("short",GRN"��ͤ"NOR);
  set ("long", @LONG
վ�ڴ˵���е��������紵���������Ŀ���������ͤ�Ķ�����һ
ɽ����Ұ�������������󣬺���ɽɫһ����������۵ס����㲻��
�����������˴����������Ƿǡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/dancer/room/roomse3.c",

]));

  set("light_up", 1);

  setup();
}
