// Room: /u/f/fire/room/room1-19.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", GRN"��ɳ��"NOR);
  set ("long", @LONG
Ϧ�������ʹӹ��ϵ����������������ϸ���ʯ�����̳ɵĵ�·
�����Ծ������֣������¿�����ϲ�������Ļ��䣬΢������Ĵ�����
�ﴵ����������Ҷ���类��׽Ūһ�������ķ���ɳɳɳ��������
LONG);

  set("exits", ([ /* sizeof() == 2 */
"south" : __DIR__"room1-20",
"west" : __DIR__"room1-16",
]));
set("outdoors","/open/marksman");

  setup();
}
