#include <room.h>
#include "dunno.h"

inherit ROOM;

void create ()
{
  set ("short", "��Ѩ");
  set ("long", @LONG
�����Ƕ�Ѩ���ڲ����������ʯ��(wall)
���ƺ���ǿ���Կ��������֣�
 
    ���ɽ��޼���ħ��Ī�⡱
 
                  ���³�
 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"hole.c",
  "up" : __DIR__"hole10",
]));

  setup();
}
void init()
{
      add_action("do_look","l");
           add_action("do_look","look");
        add_action("do_key","key");
}
int do_look(string str)
{
      if(str!="wall") return 0;
	tell_object(this_player(),"�㷢��ǽ����һ��ʯ��(board)��\n");
       return 1;
}
int do_key(string str)
{
	if( str != KEY_WORD+" on board" ) return 0;
		tell_object( this_player() , "�����������һ���������ʯ赵��š�\n");
         tell_object(this_player(),"����������ҡ�\n");
 this_player()->move("/open/gblade/room/secret.c");
tell_room(environment(this_player()),sprintf ("%s��ʯ�ҵ��ţ����˽�����\n",
this_player()->short()),this_player());
         return 1;
}
