// Room: /u/f/fire/room/room1-6.c
//inherit ROOM;

#include <ansi.h>
#include <marksman.h>
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", YEL"�μ��̵�"NOR);
  set ("long", @LONG
��������˸�ʽ�����ոմ�������ķ��ߺ����������ﵽ����Ƥ
��������Ϻ͵��������ƺ�������ǽ�ϼ����Ͽ�������ɢɢ�Ļ�Ѽ�
���������̵�����ϰ����׵��д��㡣
LONG); 

 set("exits", ([ /* sizeof() == 1 */
"north" : __DIR__"room1-4",
]));
set("outdoors","/open/marksman");

  setup();
}
