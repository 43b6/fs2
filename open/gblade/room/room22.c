// Room: /u/m/moner/tree/room19.c
inherit ROOM;
#include <ansi.h>
#include "/open/open.h"

void create ()
{
  set ("short", "����");
  set ("long", @LONG

��������а���������˵��η������۴�ϸ��������һ�Զ���ɭ����
��������ɱ����������㣬��ÿ̤��һ��������㺮���ķ�ë�ţ�������
��û�а�������������һƬ������������Խ���¡��η��������ػص��߶�
�����䡣

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"room20.c",
"west":"/open/gblade/room/mrm1/r3.c",
  "east" : __DIR__"room24.c",
]));
  set("light_up", 1);
set("no_transmit", 1);
  setup();
}
void init()
{
 object me = this_player();
   if(present("skykey",me))
   tell_object(me,HIW"������������и��������ϵ�Կ�׶��������졣\n"NOR);
 add_action("do_go","go");
 add_action("do_press","press");
}
int do_go(string str)
{
  object me = this_player();
  object ob = this_object();
    if(str == "south" )
         if(present("skykey",me))
            {
        tell_room(ob,"���Ÿ�ӦԿ�׵�ħ����������һ���š�\n");
             message_vision("$N���Ų�æ�����˽�ȥ��\n",me);
             tell_room(ob,"���Ŵ�ʯ��ȥ��ʯ���Զ����ϡ�\n");
me->move("/open/gblade/room/mrm1/r9.c");
             return 1;
            }
}
