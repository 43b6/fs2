// Room: /open/main/room/maiu-6
inherit ROOM;

void create()
{
  set ("short", "é����");
  set ("long", @LONG
���߽�һ��é����,��ª�İ���,�ƾɵļҾ�,��������˵�
ס��,��ȫ�޷�����ԭ��ҵĸ������,��ƽ���������ս������
�����뼲��,���ѵ����������˵ļ���?
LONG);

  set("objects",([
      "/open/ping/npc/maiu-leader" : 1,
      ]));      
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"maiu-4",
]));
  setup();
}
