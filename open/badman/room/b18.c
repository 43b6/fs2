// Room: /open/badman/room/b18
inherit ROOM;

void create ()
{
  set ("short", "���˹��Ͻ�");
  set ("long", @LONG
�������ɵĽֵ���������˵���������������Ǹ��еĶ��С�С
����ô����������䣻���������Ų��Ҵң���������Ħ������
ӵ��ģ�����������ȣ�Ҳ���Գ���һ����ء�

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/badman/npc/chi_un.c" : 1,
  "/open/badman/npc/e.c" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"b19",
  "east" : __DIR__"b17",
]));

  setup();
}
