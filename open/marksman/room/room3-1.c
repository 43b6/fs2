// Room: /open/marksman/room/room3-1
inherit ROOM;

void create ()
{
  set ("short", "��ջ�ͷ�");
  set ("long", @LONG
����һ����ͨ�Ŀͷ��������װ�貢������������һ��Ҳ��ȱ��
��ν��ȸ��С��ȴ�����ȫѽ���������һ�Ŵ�����һ��ľ�Ƶ�����
�ͷ���ǽ�ϰ����˵�һ���Ĺ���������������һλ�׷���ɣ������
��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/marksman/npc/old_man" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"room1-18",
]));

  setup();
}
