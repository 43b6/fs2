#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "��Ϣ��");
  set ("long", @LONG
    ����Ƕ���ү�ر𲦳�����һ�䷿��, ��Ϊ�μ��ӵ���Ϣ�ķ���,
��˳��˶μҵ�������, ������ǽ������ġ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"np14",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/book_boy.c" : 1,
]));
  set("light_up", 1);
  set("no_clean_up", 1);
  set("no_magic", 1);

  setup();
  replace_program(ROOM);
}
