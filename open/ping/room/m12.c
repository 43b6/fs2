//Room: /open/ping/room/m12.c ~night~(С��)

inherit ROOM;

void create ()
{
  set ("short", "����ɭ��");
  set ("long", @LONG

ɭ����������һ˿����,���ܳ����˸ߴ����ľ,ʹ��̫���Ĺ��߲������ս���,���쬵���
������Ĵ��������˹���,����е�΢΢�ĺ���,ɭ����������Ұ�޳�û,�ƺ���ʱ�����
ɭ�ֺڰ��������,���㲻�ò���߾���.����ǰ����ȥ,����ԼԼ���񿴵�һ������̫�ߵ�
ɽ,��ȥһ̽�����ɡ�


LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/snake" : 1,
]));

  set("outdoors", "/open/ping");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"m9",
  "north" : __DIR__"m13",
  "west"  : __DIR__"m11",
  "east"  : __DIR__"m10",
]));

  setup();
}