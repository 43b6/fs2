// Room: /open/gsword/room/g6-8.c
inherit ROOM;

void create ()
{
  set ("short", "��ɽС��");
  set ("long", @LONG
һ��˳���ͱڱ�Ե�����С����������ߣ��ϱ߼�Ϊ������ȣ���·
���������죬ͨ��δ֪������
 
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "������д�� :
�ô��ɽ������� ~~~ �� !
",
]));
  set("light_up", 1);
  set("outdoors", "/open/gsword/room");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"g6-10",
  "east" : __DIR__"g6-8.c",
]));

  setup();
}
