// Room: /open/ping/room/road10
inherit ROOM;

void create ()
{
  set ("short", "ʯ�����");
  set ("long", @LONG
������Ǿ�Ӫ�������,���ǵĴ�������ŵ���һ��,�㿴��
���ϲ�������,�ڷ�������Ʈ����,ʿ���ǽ�������, �ƺ�����æ
��.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/soldier" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"soldier2",
  "north" : __DIR__"road6",
]));

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}
