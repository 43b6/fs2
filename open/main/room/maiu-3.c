// Room: /open/main/room/maiu-3.c
inherit ROOM;

void create ()
{
  set ("short", "����С��");
  set ("long", @LONG
����С�������ڽ���,Ӧ�����˵�ס��,����������������,
��������,�ƺ���������������ı���.
LONG);

  set("objects",([
      "/open/ping/npc/maiu-guard" : 1,
     ]));
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"maiu-4.c",
  "east" : __DIR__"maiu-2",
]));
  set("outdoors", "/open/main");

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}
