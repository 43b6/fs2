//by poloer
// Room: /u/p/poloer/dragon/liuroom.c
inherit ROOM;

void create ()
{
  set ("short", "�����¥");
  set ("long", @LONG
һ����ͨ�Ŀͷ�������ֻ��һ�Ŵ��ͼ������Ӷ��ѡ��ڷ��ڵĽ���
����һ���ƾɵ����ң���ϡ�ܿ���������֣������Ǹ����֡���������
����һλ������صĹ��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" : "/open/mogi/village/room/room-50",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/mogi/dragon/npc/liugirl" : 1,
  ]));

   set("no_auc",1);
set("no_transmit",1);
set("evil",1);

  setup();
}
