// Room: /open/capital/room/premier
inherit ROOM;

void create ()
{
  set ("short", "ة�ฮǰͥԺ");
  set ("long", @LONG
̤����ة�ฮ�ſ�, ��һ��ͥԺ, ��ˮ��ʯ, ��ľ����, ˮ������
, ��ֱ�ɶ��칤, ����̾Ϊ��ֹ, �м��һ��·ֱֱ��ͨ��һ�����ӵ�
���š��������Ʊ��ǻʹ���Ĺ������������, ��˵�ǻ����ص�����
��˵�, �ɴ˿�֪��������������ܵ����ϰ�ϧ��

LONG);

  set("light_up", 1);
  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/capital/room/r63",
]));

  setup();
}
