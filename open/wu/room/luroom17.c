// Room: /open/wu/room/luroom17.c
// ��ɽ��ݵ�����
inherit ROOM;
void create ()
{
  set ("short", "����");
  set ("long", @LONG
��������ɽ������,�����Ļ���ͨ����ɽ�ɵĴ���,����������ɽ�ɵ�
���䳡��,���ڴ˴���Ϊ��Ҫ,����������ί����ɽ�ɸ���--������--
�����ء��������ص��˵�Ŀ��,������������һ��!!!!
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"luroom9.c",
  "east" : __DIR__"luroom18.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/chen" : 1,
]));

  setup();
}
