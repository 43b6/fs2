#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
   ������ɱ����ϰ����ͨ�����ǳ��ı�ֱ��·����������ľ��
   ��·������̳��Χǽ����ֱ������ϰ����ȥ��
   Ȼ�������ܾ��������ƺ������ڿ��㡣

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "west" : __DIR__"outr0.c",
      "east" : __DIR__"outr7.c",
]));
  setup();
}