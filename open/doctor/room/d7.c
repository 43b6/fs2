// room:open/doctor/room/d7.c made by adam..

inherit ROOM;

void create ()
{
	set("short","����");
  set ("long", @LONG
�����������ŵĶ����ȣ�һ·�������㲻�����Ϸ��Ļ�
԰��������ĺ����ģ������˷ܵ����飬�Ȳ�������Ҫȥ��
����������ʲô���� ��

LONG);

  set("light_up", 1);
	
	set("objects",([
 	]));
  set("exits", ([ /* sizeof() == 2 */
      "south" : __DIR__"d10",
      "west" : __DIR__"d6",
      ]));
  setup();
}
