#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "��ɽ");
  set ("long", @LONG
������ѩ���ɵĺ�ɽ����ƽʱ�������˻ᵽ�������ں�
���ƺ���һ����Ѩ�����ֳ�һ�ɵ����ظУ���֪��������
�񰵲�ʲô������ ?
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room20",
  "enter" : __DIR__"hole",
]));
  set("light_up", 1);

  setup();
}
