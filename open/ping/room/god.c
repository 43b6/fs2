// Room: /u/l/lum/workroom.c
inherit ROOM;
 
void create ()
{
  set ("short", "��������");
  set ("long", @LONG
  һ�߽�����һ��������������������������У������õ������룬�����Ŷ���Ů��
��ķ������(Idol)��������һ�ֲ����ַ��ĸо����������滹��������ķ���Ĵ�����
�ֱ�����ħʦ���ơ�����ʦ�����ӡ��������������ɻ�������а���ء�
LONG);
  set("objects", ([ /* sizeof() == 1 */
  "/u/l/lum/npc/boy" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/ping/room/road1",
]));
  set("light_up", 1);
  set("valid_startroom", 1);
 
  setup();
}
