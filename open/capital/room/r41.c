// Room: /open/capital/room/r41.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
�Ӳݴ�����ʯ��·��������ȥ�������۵����ϱ�ԶԶ�����������
̨����Щ���̨�Ǿ�����Ϯʱ�����ظ��߹صĴ���Ԯ�õġ��⼸����
��̫ƽ�����̨�������Ѿ��þ�û��ȼ���ˡ�
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"r42",
  "west" : __DIR__"r39",
]));
  set("gopath", "west");

  setup();
}
