// Room: /open/gblade/port/room/p2-4.c
inherit ROOM;

void create()
{
	set("short","�����");
  set ("long", @LONG
������ȫ��Ψһ��һ�ҳ���� , ������ʽ�������� , ���
����ȥ���� , Ҳ������ȥ�ú�ѵ�� , ���㹲������ , ������
�ﻹ��ȱ���� , ���źܿ�ͻ��л�Դ�˵��� !


LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"p2-3",
]));
  setup();
}
