// Room: /u/d/dhk/questsfan/rm21
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
������Լ����ɽɽ�������������ߺ����ͨ�������ɹȡ�
��������ֻ�Ǵ��ţ�Ҳ��֪���ǲ��������ǵط����˵�������
�����ɣ��������أ������������ҡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/woman" : 2,
]));
  set("outdoors", "/u/d");
  set("exits", ([ /* sizeof() == 2 */
  "westdown" : __DIR__"rm27",
  "northeast" : __DIR__"rm8",
]));

  setup();
}
