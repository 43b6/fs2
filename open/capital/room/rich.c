// Room: /open/capital/room/rich
inherit ROOM;

void create ()
{
  set ("short", "��ͨ��լǰͥԺ");
  set ("long", @LONG
��ͨ���ͥԺ, �����̲�����, ���Ŵ���, ���ƺ���ͨ��ʮ��ϲ��
�軨������, ��Ϊ�󲿷ֵĻ��־�������Ĳ軨, ��ʮ��ѧʿ��������
����������������������ء�������ɫ�⡱�ȵȡ��ݾ�����ľ���˵,
��������԰�Ĺ������Ǹ�ͨ��Զ������Ƹ������, �ѹ�������Ͻ���
ζ��

LONG);

  set("light_up", 1);
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"rich1",
  "south" : __DIR__"r62",
]));

  setup();
}
