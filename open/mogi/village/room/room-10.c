//room:/u/e/eva/village/room/room-10.c    made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create ()
{
  set ("short", "ħ��������");
  set ("long", @LONG

    ������ħ���������, ħ���λ��ħ���������, �����ڴ���
�Թ�����, �и����ڴ�����������֮��, ƾ��������������˵�����
, ���������ʹħ���޷�����, ʹ������ħ����Ψһ������, ����
�����Լ��͵�ħ����Խ���.

LONG);

  set("no_magic", 1);
  set("outdoors", 1);
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
"west" : "/open/mogi/dragon/dr1",
  "east" : __DIR__"room-11",
]));
  set("no_fight", 1);
  set("evil", 1);
  set("no_auc", 1);

  setup();
}

 int valid_leave(object me,string dir)
{
    if ( me==this_player() && dir=="west" )
        {
        tell_object(me,HIM"���������ɵĴ�������, ����ħ���!\n"NOR);
        }
    return ::valid_leave(me,dir);
} 
