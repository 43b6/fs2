//by Casey
inherit ROOM;

void create ()
{
  set ("short", "�������");
  set ("long", @LONG
���͵ĺ���ԶԶ���˹��������˾����쳣�ֲ������ϵĽ�ӡ������
���ĵ������Ӳ��в�֪����ʲô����˾����ڰ���һ������ʱ��Σ
�յ���в����֪��ʱ�����ɥ�ڴˣ����ߵ����鶴�У��и��ľ��ĵص�
������Ȼ��տ��ɫ��ˮ���������˺�����ȴʹ�㲻��Ǳ��һ̽������

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dragon-mini" : 3,
]));
  set("outdoors", "/u/p");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 43*/
 "south" : __DIR__"d-15",
 "west" : __DIR__"d-8",
"north" : __DIR__"d-5",

 ]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
