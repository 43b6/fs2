// Room: /open/badman/room/b15
inherit ROOM;

void create ()
{
  set ("short", "���˹��Ͻ�");
  set ("long", @LONG
���˹��Ͻ��������ʼת�ɶ������������ط���ͬ���ǣ���
��Լ�о����ֵ����йɲ�Ѱ������Ϣ��Ҳ��֪��Ϊ��ô����о���
���������������Ĵ˴�������������˿˵������ѹ�ȸС�
 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/pauper.c" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"b16",
  "north" : __DIR__"b14",
]));

  setup();
}
