// Room: /open/gsword/room/suking.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������ǰ���ɹ����и�,�ڱ���������,�׶�Ǩ���¶�����,
������Ȩ��������λ,��Ϊ����ƽ���󽫾��ľ���, ���Կɴ�
�Ǹ��ʵ�Χǽ,��Զ�Ĵ�Ժ,�����ȥ�ĸ������û�.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/gsword/room/su4",
  "enter" : __DIR__"suking1",
]));

  set("light_up", 1);

  setup();
}
