// Room: /open/poison/room/v10.c
inherit ROOM;

void create ()
{
  set ("short", "Сľ����");
  set ("long", @LONG
����һ����ľͷ�ǵļ�ª��ľ�ݣ��Ǵ峤���ٴ����״������
�潫���ǵģ�������Ϊ�˸�л���˵İ�æ�������ڴ˵�Э��ά����
��İ����������������ֺ���
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"pa4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/general.c" : 1,
]));
  set("light_up", 1);

  setup();
}
