// Room: /open/main/room/r3.c

inherit ROOM;

void create()
{
	set("short", "��·");
    set("long", "�����Ǵ���վͨ�������ŵ���Ҫ��·�����ߵ������һ��С�Ļ��
�������̽�ȥ��������һ���ƽ�أ���·�ڴ˳��ϱ���Ͷ�������
�Ǹ�����·�Ρ�
");

set("exits", ([ /* sizeof() == 3 */
  "northeast" : __DIR__"r2",
  "south" : __DIR__"r5",
  "west" : __DIR__"L3",
  "east" : __DIR__"p1",
]));



  setup();
}
