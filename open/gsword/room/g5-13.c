// Room: /open/gsword/room/g5-13.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�������ɽ������������󷨵ĵط�������Կ�������������С�˷�
�������һȺ�ųɱ������ǣ�һȺ�ų�̫����ͼ������������һȺ����
���㿴��������ʲôͼ��,���ſ����㷢�������ƤԽ��Խ��,��֪���ɽ�
��ʵ�ڲ�������ֵ�һ��Ȼ�����鴫��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g5-9.c",
  "east" : "/open/gsword/room/g5-14.c",
]));

  set("objects", ([ /* sizeof() == 1 */
        "/daemon/class/swordsman/shouyau": 1,
]));

  set("light_up", 1);

  setup();
}
