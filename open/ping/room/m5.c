// Room: /open/ping/room/m5.c ~night~(С��)

inherit ROOM;

void create ()
{
  set ("short", "����ɭ��");
  set ("long", @LONG

ɭ����������һ˿����,���ܳ����˸ߴ����ľ,ʹ��̫���Ĺ��߲������ս���,���쬵���
������Ĵ�������˹���,����е�΢΢�ĺ���,ɭ���������Ұ�޳�û,�ƺ���ʱ�����
ɭ�ֺڰ��������,���㲻�ò���߾���.����ǰ����ȥ,����ԼԼ���񿴵�һ������̫�ߵ�
ɽ,��ȥһ̽�����ɡ�


LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/bear" : 1,
]));

  set("outdoors", "/open/ping");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"m2",
  "north" : __DIR__"m8",
  "west"  : __DIR__"m4",
  "east"  : __DIR__"m6",
]));

  setup();
}
