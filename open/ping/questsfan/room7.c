// Room: /u/d/dhk/questsfan/room7
inherit ROOM;

void create ()
{
  set ("short", "����׵ľ���");
  set ("long", @LONG
�ò������߳�����ȷ���ִ˵ؾ���һ�����¡�����
��һ��һ��Ŀ��ɱ��ɱ��ɱ���Ĵ��š��������澹����
��״�����������ʱ����һ�ڣ���������ô�������
�ı����ƺ��������ᷢ��������Ӱ��

LONG);

  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room6",
  "goup" : __DIR__"room28",
]));

  setup();
}
