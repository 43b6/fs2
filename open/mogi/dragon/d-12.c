//by Casey
inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
���͵ĺ���ԶԶ�Ĵ��˹��������˾����쳣�ֲ������ϵĽ�ӡ������
���ĵ��� ,�Ӳ��в�֪����ʲô���� ,�˾����ڰ���һ������ʱ��Σ
�յ���в����֪��ʱ���ܻ���ɥ���� ��

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dragon-mini" : 2,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */

 "east" : __DIR__"d-13",
 
 ]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}

