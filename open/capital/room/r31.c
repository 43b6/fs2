// Room: /open/capital/room/r31.c

inherit ROOM;

void create ()
{
  set ("short", "������ͬ");
  set ("long", @LONG
�˶�ĵط�������ؤ��·�߾��м��������Ƕ���Ǯ��ż�����м���
�ٱ�������ɢ���������˶�������ֻ�����ˣ����Թٱ���Ҳ������
ֻҪ����������ͨ�У��������ల���¡������м�С��ݣ���������
«��·���и��Ʒ�д�š����С���
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/beggar" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"tea",
  "west" : __DIR__"r30",
  "east" : __DIR__"r33",
]));
  set("gopath", "west");
  set("gopath2", "west");

  setup();
}
