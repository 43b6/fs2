// Room: /open/poison/room/room14
inherit ROOM;

void create ()
{
  set ("short", "�ּ�С��");
  set ("long", @LONG
����һ��СС��ľ�ݣ��������������õģ���������һ
�����ʵ�ס������ϸһ����Ȼ�����ڴ˾�ס������е�ʮ��
���ȣ���˼�ª��С�ݣ������Ǻ����ܰ����ڴ��أ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"road4",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/woman" : 1,
]));

  setup();
}
