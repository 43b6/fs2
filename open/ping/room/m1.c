// Room: /open/ping/room/m1.c ~night~(С��)

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
]));

  set("outdoors", "/open/ping");

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"m4",
  "west" : __DIR__"m3",
  "east" : __DIR__"m2",
]));

  setup();
}
