// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","�����");
  set ("long", @LONG
����Ǹ��˹��� , ���泤����ʮ�� , ����� . �����и�
�㳡 , ÿ������ , ��������ͷ�������ڴ˱��� , �ǳ����� .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r3-13",
	"west" : "/open/port/room/r3-11",
	"north" : "/open/port/room/r3-15",
	"south" : "/open/port/room/r3-9",
]));

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}
