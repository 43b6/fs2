// Room: /open/poison/room/road18
inherit ROOM;

void create ()
{
  set ("short", "��ͥ");
  set ("long", @LONG
������һ��СͥԺ��Ժ�������˼��ô��������������
�裬���е�Ʈҷ�ţ�ͥ�ڲ�������÷��׮��ƽ����ͽ�Ǳ���
�ڴ������书�Ʒ����Ṧ����׮�Ϲ⻬��ĥ�ۿɼ���ͽ��ƽ
������֮�ڡ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/trainee" : 3,
]));
  set("outdoors", "/open/poison");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"garden1",
  "west" : __DIR__"room11",
  "east" : __DIR__"road16",
]));

  setup();
}
