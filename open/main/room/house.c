inherit ROOM;

void create ()
{
  set ("short", "é����");
  set ("long", @LONG
����һ��СС��é���ݣ������и���ͷ���ƺ����ڰ�������֪��
��Ϊ���£�
LONG);

  set("objects", ([
  "/open/doctor/npc/oldman" : 1,
]));
  set("exits", ([
  "east" : __DIR__"m23",
]));
  setup();
}