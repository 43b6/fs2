// Room: /open/main/room/maiu-7
inherit ROOM;

void create()
{
  set ("short", "é����");
  set ("long", @LONG
    ���߽�һ��é����,��ª�İ���,�ƾɵļҾ�,��������˵�
ס��,��ȫ�޷�����ԭ��ҵĸ������,��ƽ���������ս������
�����뼲��,���ѵ����������˵ļ���?
LONG);

  set("objects", ([
      "/open/ping/npc/maiu-gen" : 1,
      ]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"maiu-4",
]));
  setup();
}
