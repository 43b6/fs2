// Room: /open/poison/room/room7
inherit ROOM;

void create ()
{
  set ("short", "����ſ�");
  set ("long", @LONG
����վ�ڴ���ſڣ���������Ϊ��ɫ�������ߣ����ɫ
��ǽ�ڣ�����������������Ϊ�����������������˸е����
�Իͣ�������ǧ����ʹ�����׳�ۡ��ϱ�����һ��㳯��
��ʯ�ף�ʯ����һ�ɺ������̳ɵ�б�£�������������Ƶ�
����ʯ�������е�̾����������ˡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room1",
  "southdown" : __DIR__"road16",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/fighter" : 2,
]));
  set("light_up", 1);

  setup();
}
